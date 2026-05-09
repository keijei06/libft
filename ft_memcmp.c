/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joborges <joborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 17:09:27 by joborges          #+#    #+#             */
/*   Updated: 2026/05/05 19:07:34 by joborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1u;
	unsigned char	*s2u;

	s1u = (unsigned char *)s1;
	s2u = (unsigned char *)s2;
	while (n--)
	{
		if (*s1u != *s2u)
			return (*s1u - *s2u);
		s1u++;
		s2u++;
	}
	return (0);
}
