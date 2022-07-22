/*******************************************************************
*  The Header file for libft project
*  Contains the defined functions
*  Last updated 31 sep 2021
*******************************************************************/

#ifndef	LIBFT_H   /* header gaurds*/
#define LIBFT_H

# include <stdlib.h>
# include <unistd.h>


// // // // // STANDARD FUNCTIONS // // // // //


/********************************************************************************* 
*   It checks if the ascii is the of the argumnet represent the Letter A-Z or a-z.
*   If not return "0" and if yes return any "int"
**********************************************************************************/
int ft_isalpha(int ascii);


/********************************************************************************* 
*   It checks if the ascii is the of the argumnet represent the number 0-9.
*   If not return "0" and if yes return any "int"
**********************************************************************************/
int	ft_isdigit(int	ascii);


/********************************************************************************* 
*   It checks if the ascii is the of the argumnet represent the number or alpabet.
*   If not return "0" and if yes return any "int"
**********************************************************************************/
int	ft_isalnum(int	ascii);


/********************************************************************************* 
*   It checks if the ascii.
*   If not return "0" and if yes return any "int"
**********************************************************************************/
int	ft_isascii(int	ascii);


/*********************************************************************************
 * It checks if the ascii is printable.
 * If not return "0" and if yes return any "int"
**********************************************************************************/
int	ft_isprint(int	ascii);


/*********************************************************************************
*    count to length of the string
* returns the size_t variable
 **********************************************************************************/
size_t    ft_strlen(const char *str);


/*********************************************************************************
 * copies the character c (an unsigned char) to the first n characters
 * of the string pointed to, by the argument str.
**********************************************************************************/
void    *ft_memset(void *str, int    c, size_t   n);


/*********************************************************************************
 * Puts null to the first n bytes of the void pointerto.
**********************************************************************************/
void ft_bzero(void *s, size_t n);


/*********************************************************************************
 * copies n characters from memory area src to memory area dest.
**********************************************************************************/
void    *ft_memcpy(void    *dest, const void   * src, size_t   n);


/*********************************************************************************
 * moves n characters from memory area str2 to memory area str1.
 *  the main difference between the memcpy and memmove is that memmove is better if the src and dest are overlapping.
 *  And in processing of cpy the memmove do not destroy the src
    [---- src ----]   For example if the dest and src overlap, the  while cpy the data from src will get destroy.
        [---- dst ---]
**********************************************************************************/
void *ft_memmove(void *str1, const void *str2, size_t n);


/*********************************************************************************
* Better than strncpy because copy whole buffer to the destenation
*  return the size of src
**********************************************************************************/
size_t  ft_strlcpy(char *dst, const char *src, size_t size);


/*********************************************************************************
* Better than strncat because concat whole buffer to the destenation
*  return the size of src + dest
**********************************************************************************/
size_t  ft_strlcat(char *dst, const char *src, size_t size);

#endif
