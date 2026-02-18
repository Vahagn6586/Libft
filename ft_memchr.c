/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchiling <vchiling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:11:44 by vchiling          #+#    #+#             */
/*   Updated: 2026/02/15 16:02:46 by vchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *ptr, int c, size_t count)
{
	const unsigned char	*p;
	size_t				i;

	p = (const unsigned char *)(ptr);
	i = 0;
	while (i < count)
	{
		if (*(p + i) == (unsigned char)c)
		{
			return ((void *)(p + i));
		}
		++i;
	}
	return (0);
}
