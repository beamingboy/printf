#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/*
*	Checking the char, if not return 0
*	input : isalp <test>
*/
int	ft_isalpha(int	ascii);

/*********************************/

/*
*	Checking the digit, if not return 0
*	input : isdig <test>
*/
int	ft_isdigit(int	ascii);

/*********************************/

/*
*	Checking the digit or char, if not return 0
*	input : isaln <test>
*/
int	ft_isalnum(int	ascii);

/*********************************/

/*
*	Checking the ascii with input of octal, if not return 0
*	input : isasc <test>
*/
int	ft_isascii(int	ascii);

/*********************************/

/*
*	Checking the ascii with input of octal, if not return 0
*	input : isasc <test>
*/
int	ft_isprint(int	ascii);

/*
*    count to length of the string
*    input : strlen <test>
*/
size_t    ft_strlen(const char *str);


/*
*    points to memory of size "n" and puts c
*    input : memset <pointername> <ascii number> <bits number>
*/
void    *ft_memset(void    *str, int   c, size_t n);

/*
*    points to memory of size "n" and puts null
*    input : bzero
*/
void ft_bzero(void *s, size_t n);

/*
*    copies n characters from memory area src to memory area dest.
*    input : memcpy
*/
void    *ft_memcpy(void    *dest, const void   * src, size_t   n);

/*
*    copies n characters from memory area src to memory area dest without ovellapping.
*    input : memmove
*/
void *ft_memmove(void *str1, const void *str2, size_t n);

size_t  ft_strlcpy(char *dst, const char *src, size_t size);

/********************************************************************************* 
*   using the argument to test the function with different cases
*   "argc" = number of argument passed
*	"argv[][]" = The 2D vector containing the argument.
*	It contains the string as well as the each char of string
*	for example -
*	with first index it represent the string and for second it represent the each char individually for that string
**********************************************************************************/

int main(int	argc, char	*argv[])
{
    if (argc == 2)
    {
        if (argv[1][0] == 'm' && argv[1][1] == 'e' && argv[1][2] == 'm' &&argv[1][3] == 's' && argv[1][4] == 'e' && argv[1][5] == 't')
        {
            printf("return for ft_memset: ");
        }
        
        if (argv[1][0] == 'b' && argv[1][1] == 'z' && argv[1][2] == 'e' &&argv[1][3] == 'r' && argv[1][4] == 'o')
        {
            printf("return for ft_bzero: ");
        }
        
        
        if (argv[1][0] == 'm' && argv[1][1] == 'e' && argv[1][2] == 'm' &&argv[1][3] == 'c' && argv[1][4] == 'p' && argv[1][5] == 'y')
        {
            const char src[50] = "vinay" ;
               char dest[50];
            strcpy(dest,"Heloooo!!");
            printf("Before memcpy dest = %s\n", dest);
            ft_memcpy(dest, src, strlen(src)+1);
            printf("After memcpy dest = %s\n", dest);
        }
        
        if (argv[1][0] == 'm' && argv[1][1] == 'e' && argv[1][2] == 'm' &&argv[1][3] == 'm' && argv[1][4] == 'o' && argv[1][5] == 'v' && argv[1][6] == 'e')
        {
            const char src[50] = "vinay" ;
               char dest[50];
            strcpy(dest,"Heloooo!!");
            printf("Before memmove dest = %s\n", dest);
            ft_memmove(dest, src, strlen(src)+1);
            printf("After memmove dest = %s\n", dest);
        }
        if (argv[1][0] == 's' && argv[1][1] == 't' && argv[1][2] == 'r' &&argv[1][3] == 'l' && argv[1][4] == 'c' && argv[1][5] == 'p' && argv[1][6] == 'y')
        {
            const char src[50] = "vinay" ;
               char dest[50];
            printf("Before strlcpy dest = %s\n", dest);
            ft_strlcpy(dest, src, strlen(src)+1);
            printf("After strlcpy dest = %s\n", dest);
            
            printf("return = %zu\n",ft_strlcpy(dest, src, strlen(src)+1));
            printf("return = %zu\n",strlen(src) + 1);
        }
        else
        {
            printf("return error");
        }
    }
    
	if (argc == 3)
	{
		if (argv[1][0] == 'i' && argv[1][1] == 's' && argv[1][2] == 'a' && argv[1][3] == 'l' && argv[1][4] == 'p')
		{
			int isalpha = ft_isalpha(argv[2][0]);
			printf("return for ft_isalpha: %d\n", isalpha);
		}
		if (argv[1][0] == 'i' && argv[1][1] == 's' && argv[1][2] == 'd' &&argv[1][3] == 'i' && argv[1][4] == 'g')
		{
			int isdigit = ft_isdigit(argv[2][0]);
			printf("return for ft_isdigit: %d\n", isdigit);
		}
		if (argv[1][0] == 'i' && argv[1][1] == 's' && argv[1][2] == 'a' &&argv[1][3] == 'l' && argv[1][4] == 'n' )
		{
			int isalnum = ft_isalnum(argv[2][0]);
			printf("return for ft_isalnum: %d\n", isalnum);
		}
		if (argv[1][0] == 'i' && argv[1][1] == 's' && argv[1][2] == 'a' &&argv[1][3] == 's' && argv[1][4] == 'c' )
		{
			int input = atoi(argv[2]);
			int isascii = ft_isascii(input);
			printf("return for ft_isacsii: %d\n", isascii);
		}
		if (argv[1][0] == 'i' && argv[1][1] == 's' && argv[1][2] == 'p' &&argv[1][3] == 'r' && argv[1][4] == 'i' )
		{
			int input = atoi(argv[2]);
			int isprint = ft_isprint(input);
			printf("return for ft_isprint: %d\n", isprint);
		}
        
        if (argv[1][0] == 's' && argv[1][1] == 't' && argv[1][2] == 'r' &&argv[1][3] == 'l' && argv[1][4] == 'e' && argv[1][5] == 'n')
		{
            int strlen = ft_strlen(*(argv + 2));
			printf("return for ft_strlen: %d\n", strlen);
		}
        
        else
        {
            printf("return error");
        }
    }
}
