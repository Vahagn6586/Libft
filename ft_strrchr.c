/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchiling <vchiling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:55:35 by vchiling          #+#    #+#             */
/*   Updated: 2026/02/14 23:43:37 by vchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	i;

	i = 0;
	if (ch == 0)
	{
		return ((char *)(str + ft_strlen(str)));
	}
	while (str[i])
	{
		++i;
	}
	while (i--)
	{
		if (str[i] == (char)(ch))
		{
			return ((char *)(str + i));
		}
	}
	return (0);
}
