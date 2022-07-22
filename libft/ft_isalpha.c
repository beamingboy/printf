#include "libft.h"

int	ft_isalpha(int	ascii)
{
	if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
        return (1);
	else
		return (0);
}
