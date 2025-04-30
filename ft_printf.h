/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:43:28 by adoireau          #+#    #+#             */
/*   Updated: 2024/11/19 14:47:33 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
//# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_print_nbr(int n);
int		ft_print_str(char *str);
int		ft_print_address(void *ptr);
int		ft_print_char(char c);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex(unsigned int n, char format);
void	ft_print_base(unsigned long nbr, char *base);

#endif
