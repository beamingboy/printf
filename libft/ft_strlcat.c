#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    {
        int d_len;
        int s_len;
        int offset;
        int src_index;

        /* obtain initial sizes */
        d_len = ft_strlen(dst);
        s_len = ft_strlen(src);

        /* get the end of dst */
        offset = d_len;

        /* append src */
        src_index = 0;
        while( src[src_index] != '\0' && src_index < size)
        {
            dst[offset] = src[src_index];
            offset++;
            src_index++;
            /* don't copy more than dstsize characters
               minus one */
        
        }
        /* always cap the string! */
        dst[offset] = '\0';

        return( d_len + s_len );
    }
}

