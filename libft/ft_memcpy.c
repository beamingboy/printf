#include "libft.h"

void    *ft_memcpy(void    *dest, const void   * src, size_t   n)
{
    size_t i;
    
    i = 0;
    while (n)
    {
        // The void is typecasted to "unsigned char"
        ((unsigned char    *)dest)[i] = ((char  *)src)[i] ;
        i++;
        n--;
    }
    return (dest);
}
