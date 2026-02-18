/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchiling <vchiling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:02:58 by vchiling          #+#    #+#             */
/*   Updated: 2026/02/14 23:46:05 by vchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	cc;

	cc = (unsigned char)c;
	if (cc >= 'a' && cc <= 'z')
		return (cc - ('a' - 'A'));
	return (cc);
}
