/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:45:05 by adoireau          #+#    #+#             */
/*   Updated: 2024/10/23 12:11:19 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_unsigned(unsigned int n)
{
	if (n >= 10)
		ft_putnbr_unsigned(n / 10);
	ft_putchar_fd((n % 10) + '0', 1);
}

int	ft_print_unsigned(unsigned int n)
{
	int				len;
	unsigned int	tmp;

	len = 0;
	tmp = n;
	if (n == 0)
		len = 1;
	while (tmp)
	{
		tmp /= 10;
		len++;
	}
	ft_putnbr_unsigned(n);
	return (len);
}
