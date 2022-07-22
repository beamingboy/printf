#include "libft.h"

/* 
******To be used if the the input is octal*******
int     ft_power(int nb, int power)
{
        if (power < 0)
                return (0);
        if (power == 0)
                return (1);
        else
                return (nb * ft_power(nb, power - 1));
}

int OctalToDecimal(int n) 
{
    int p = 0, decimal = 0, r;
    
    while(n>0)
	{
        // retrieving the right-most digit of n
        r = n % 10;
        
        // dividing n by 10 to remove the
        // right-most digits since it is already
        // scanned in previous step
        n = n / 10;
        decimal = decimal + r * ft_power( 8, p );    
        ++p;
    }
    return decimal;
}
*/ 
int	ft_isascii(int	ascii)
{
	if (ascii >= 0 && ascii <= 127)
	
		return	(1);
	
	else
		return	(0);
}
