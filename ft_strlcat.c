/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchiling <vchiling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 18:35:38 by vchiling          #+#    #+#             */
/*   Updated: 2026/02/14 22:35:06 by vchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dstlen;
	unsigned int	srclen;

	i = 0;
	dstlen = 0;
	srclen = 0;
	while (*(dest + dstlen) && dstlen < size)
		++dstlen;
	while (*(src + srclen))
		++srclen;
	if (dstlen == size)
		return (dstlen + srclen);
	while (*(src + i) && dstlen + i < size - 1)
	{
		*(dest + dstlen + i) = *(src + i);
		++i;
	}
	*(dest + dstlen + i) = '\0';
	return (dstlen + srclen);
}
