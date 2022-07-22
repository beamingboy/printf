#include "libft.h"

int	ft_isalnum(int	ascii)
{
	if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122) || (ascii >= 48 && ascii <= 57))
	
		return (1);
	
	else
		return (0);
}
