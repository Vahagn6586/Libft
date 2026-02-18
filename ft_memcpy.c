/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchiling <vchiling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:38:40 by vchiling          #+#    #+#             */
/*   Updated: 2026/02/14 22:22:35 by vchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*tempd;
	const unsigned char	*temps;

	tempd = (unsigned char *)dest;
	temps = (const unsigned char *)src;
	while (n--)
		*tempd++ = *temps++;
	return (dest);
}
