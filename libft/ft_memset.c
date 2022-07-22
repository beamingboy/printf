#include "libft.h"

void	*ft_memset(void	*str, int   c, size_t n)
{
	size_t i;
    
    i = 0;
	while (n)
	{
		// The void is typecasted to "unsigned char"
		((unsigned char	*)str)[i] = c;
		i++;
		n--;
	}
	return (str);
}
