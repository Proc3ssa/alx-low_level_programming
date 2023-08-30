#include "main.h"

/**
 * wildcmp - Compare strings
 * @p1: pointer to string params
 * @p2: pointer to string params
 * Return: 0
 */
int wildcmp(char *p1, char *p2)
{
    if (*p1 == '\0')
    {
        if (*p2 != '\0' && *p2 == '*')
        {
            return (wildcmp(p1, p2 + 1));
        }
        return (*p2 == '\0');
    }

    if (*p2 == '*')
    {
        return (wildcmp(p1 + 1, p2) || wildcmp(p1, p2 + 1));
    }
    else if (*p1 == *p2)
    {
        return (wildcmp(p1 + 1, p2 + 1));
    }
    return (0);
}
