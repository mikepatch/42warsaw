/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <mlata@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 23:32:13 by mlata             #+#    #+#             */
/*   Updated: 2024/12/22 23:59:48 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*uc1;
	const unsigned char	*uc2;

	uc1 = (const unsigned char *)s1;
	uc2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (uc1[i] != uc2[i])
			return ((int)(uc1[i] - uc2[i]));
		i++;
	}
	return (0);
}
