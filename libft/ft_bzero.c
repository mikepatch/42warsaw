/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <mlata@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:29:13 by mlata             #+#    #+#             */
/*   Updated: 2024/12/08 21:29:15 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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