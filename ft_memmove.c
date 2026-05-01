/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joborges <joborges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 22:48:59 by joborges          #+#    #+#             */
/*   Updated: 2026/04/29 23:19:41 by joborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*ds;
	unsigned const char	*sr;

	if (!dst && !src)
		return (NULL);
	ds = (unsigned char *)dst;
	sr = (unsigned const char *)src;
	if (ds > sr)
	{
		while (n--)
		{
			ds[n] = sr[n];
		}
	}
	else
	{
		while (n--)
			*ds++ = *sr++;
	}
	return (dst);
}
