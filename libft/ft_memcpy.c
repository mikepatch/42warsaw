#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    if (n == 0 || dst == src)
        return (dst);
    size_t  i;
    unsigned char   *d;
    const unsigned char   *s;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}