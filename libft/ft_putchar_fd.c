/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:08:03 by adoireau          #+#    #+#             */
/*   Updated: 2024/10/09 15:28:55 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Outputs the character c to the file descriptor fd. */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
