#include "libft.h"

void ft_bzero(void *s, size_t n) 
{
    size_t  i;
    unsigned char   *unsigned_s;

    unsigned_s = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        unsigned_s[i] = 0;
        i++;
    }
}