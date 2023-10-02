#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads and prints a text file to the standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return (0);  /* Check for NULL filename */
    }

    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        return (0);  /* Unable to open the file */
    }

    char *buffer = (char *)malloc(letters + 1); /* Allocate memory for reading */
    if (buffer == NULL) {
        close(fd);
        return (0);  /* Memory allocation failed */
    }

    ssize_t bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1) {
        free(buffer);
        close(fd);
        return (0);  /* Read error */
    }

    buffer[bytes_read] = '\0';  /* Null-terminate the string */

    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1 || (size_t)bytes_written != bytes_read) {
        free(buffer);
        close(fd);
        return (0);  /* Write error or incomplete write */
    }

    free(buffer);
    close(fd);
    return (bytes_written);
}

int main() {
    const char *filename = "example.txt";  /* Change this to the desired filename */
    size_t letters_to_read = 100;  /* Change this to the desired number of letters to read */

    ssize_t bytes_printed = read_textfile(filename, letters_to_read);
    if (bytes_printed == 0) {
        printf("Failed to read and print the file.\n");
    } else {
        printf("Successfully read and printed %zd letters.\n", bytes_printed);
    }

    return (0);
}
