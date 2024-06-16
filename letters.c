#ifndef LETTERS_C
#define LETTERS_C

#include <stdlib.h>

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
int isLetter(const char x){
    if(x == '\0'){
        return -1;
    }
    if(isUpper(x) == -1 && isLower(x) == -1){
        return -1;
    }
    return 0;
}
int isNumber(const char x){
    if(x == '\0'){
        return -1;
    }   

    if(x<48 && x>57){
        return -1;
    }
    return 0; 

}






#endif
