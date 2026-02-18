/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchiling <vchiling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:42:39 by vchiling          #+#    #+#             */
/*   Updated: 2026/02/14 23:45:58 by vchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	cc;

	cc = (unsigned char)c;
	if (cc >= 'A' && cc <= 'Z')
		return (cc + ('a' - 'A'));
	return (cc);
}
