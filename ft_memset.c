/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joborges <joborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 12:56:29 by joborges          #+#    #+#             */
/*   Updated: 2026/04/25 14:10:17 by joborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)b;
	while (len > 0)
	{
		*(tmp++) = (unsigned char)c;
	}
	return (0);
}
