#ifndef LETTERS_C
#define LETTERS_C

#include <stdlib.h>
#include <signal.h>

// Interval uppercase (65,90)
// Interval lowercase (97,122)
#define DEFAULT_LOWER "abcdefghijklmnopqrstuvwxyz"
#define DEFAULT_UPPER "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

//
int isUpper(const char x)
{
    if (x != '\0')
    {
        if (x >= 65 && x <= 90)
        {
            return 0;
        }
    }
    return -1;
}
int isLower(const char x)
{
    if (x != '\0')
    {
        if (x >= 97 && x <= 122)
        {
            return 0;
        }
    }
    return -1;
}
int charIsLetter(const char x)
{
    if (x == '\0')
    {
        return -1;
    }
    if (isUpper(x) == -1 && isLower(x) == -1)
    {
        return -1;
    }
    return 0;
}
int charIsNumber(const char x)
{
    if (x == '\0')
    {
        return -1;
    }

    if (x < 48 && x > 57)
    {
        return -1;
    }
    return 0;
}

char *convertIntToChar(const char x)
{
}

#endif
