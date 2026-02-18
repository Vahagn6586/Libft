/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchiling <vchiling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:15:29 by vchiling          #+#    #+#             */
/*   Updated: 2026/02/14 21:09:13 by vchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int s)
{
	int	i;

	i = 0;
	if (s == 0)
		return ((char *)(str + ft_strlen(str)));
	while (*(str + i))
	{
		if (*(str + i) == (char)s)
		{
			return ((char *)(str + i));
		}
		++i;
	}
	return (0);
}
