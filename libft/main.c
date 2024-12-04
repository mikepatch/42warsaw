/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <mlata@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:27:52 by mlata             #+#    #+#             */
/*   Updated: 2024/12/04 16:00:22 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char	is_ascii_test_1;
	char	is_ascii_test_2;
	char	is_ascii_test_3;
	char	is_ascii_test_4;

	is_ascii_test_1 = 'g';
	is_ascii_test_2 = ' ';
	is_ascii_test_3 = '4';
	is_ascii_test_4 = 0x80;
	printf("\n isascii()");
	printf("\n=================");
	printf("\n\"%c\" == %d", is_ascii_test_1, isascii(is_ascii_test_1));
	printf("\n\"%c\" == %d", is_ascii_test_2, isascii(is_ascii_test_2));
	printf("\n\"%c\" == %d", is_ascii_test_3, isascii(is_ascii_test_3));
	printf("\n\"%c\" == %d", is_ascii_test_4, isascii(is_ascii_test_4));
	printf("\n=================");
	printf("\n ft_isascii()");
	printf("\n=================");
	printf("\n\"%c\" == %d", is_ascii_test_1, ft_isascii(is_ascii_test_1));
	printf("\n\"%c\" == %d", is_ascii_test_2, ft_isascii(is_ascii_test_2));
	printf("\n\"%c\" == %d", is_ascii_test_3, ft_isascii(is_ascii_test_3));
	printf("\n\"%c\" == %d", is_ascii_test_4, ft_isascii(is_ascii_test_4));
	printf("\n=================");
	printf("\n=================");
	printf("\n isprint()");
	printf("\n=================");
	printf("\n\"%c\" == %d", is_ascii_test_1, isprint(is_ascii_test_1));
	printf("\n\"%c\" == %d", is_ascii_test_2, isprint(is_ascii_test_2));
	printf("\n\"%c\" == %d", is_ascii_test_3, isprint(is_ascii_test_3));
	printf("\n\"%c\" == %d", is_ascii_test_4, isprint(is_ascii_test_4));
	printf("\n=================");
	printf("\n=================");
	printf("\n ft_isprint()");
	printf("\n=================");
	printf("\n\"%c\" == %d", is_ascii_test_1, ft_isprint(is_ascii_test_1));
	printf("\n\"%c\" == %d", is_ascii_test_2, ft_isprint(is_ascii_test_2));
	printf("\n\"%c\" == %d", is_ascii_test_3, ft_isprint(is_ascii_test_3));
	printf("\n\"%c\" == %d", is_ascii_test_4, ft_isprint(is_ascii_test_4));
	printf("\n=================");
	printf("\n");
	return (0);
}
