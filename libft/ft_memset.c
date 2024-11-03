/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:14:31 by adoireau          #+#    #+#             */
/*   Updated: 2024/10/06 16:22:29 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Fills n bytes of memory at dest with byte value c. */
void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			i;
	unsigned char	*bytes;

	i = 0;
	bytes = (unsigned char *)dest;
	while (i < n)
	{
		bytes[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
