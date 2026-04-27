/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joborges <joborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:07:36 by joborges          #+#    #+#             */
/*   Updated: 2026/04/27 23:06:46 by joborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmpsrc;
	unsigned char	*tmpdest;

	tmpsrc = (unsigned char *)src;
	tmpdest = (unsigned char *)dest;
	if (!dest && !src)
	{
		return (NULL);
	}
	while (n > 0)
	{
		*(tmpdest++) = *(tmpsrc++);
		n--;
	}
	return (dest);
}
