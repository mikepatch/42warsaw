/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <mlata@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:03:14 by mlata             #+#    #+#             */
/*   Updated: 2024/12/05 20:47:20 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_unsigned;
	unsigned char	c_unsigned;

	if ((s == NULL && n > 0) || n == 0)
		return (NULL);

	s_unsigned = (unsigned char *)s;
	c_unsigned = (unsigned char)c;
	i = 0;
	while (i <= n)
	{
		s_unsigned[i] = c_unsigned;
		i++;
	}
	return (s);
}
