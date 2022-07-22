#include "libft.h"

int	ft_isprint(int	ascii)
{
	if (ascii >= 32 && ascii <= 126)
        return	(1);
	else
		return	(0);
}
