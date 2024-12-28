/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <mlata@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 00:32:22 by mlata             #+#    #+#             */
/*   Updated: 2024/12/28 01:42:13 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_num_length(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*result;
	long	num;

	num = n;
	len = get_num_length(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	if (num == 0)
		result[0] = '0';
	while (num > 0)
	{
		result[--len] = num % 10 + '0';
		num /= 10;
	}
	return (result);
}
