/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mike-priv <mike-priv@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:32:21 by mike-priv         #+#    #+#             */
/*   Updated: 2025/02/08 21:34:39 by mike-priv        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	addr;

	count = 0;
	addr = (unsigned long)ptr;
	count += ft_putstr("0x");
	count += ft_puthex(addr, 'x');
	return (count);
}
