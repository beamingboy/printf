#include "libft.h"

void *ft_memmove(void *str1, const void *str2, size_t n)
{
    size_t i;
    size_t j;
    char *temp;
    
    j = n;
    i = 0;
    if (str1 == str2)
    {
        return(str1);
    }
    while (j)
    {
        // The void is typecasted to "unsigned char"
        temp[i] = ((char  *)str2)[i] ;
        i++;
        j--;
    }
    i = 0;
    while (n)
    {
        // The void is typecasted to "unsigned char"
        ((char *)str1)[i] = temp[i] ;
        i++;
        n--;
    }
    return (str1);
}
