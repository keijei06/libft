/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joborges <joborges@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:40:07 by joborges          #+#    #+#             */
/*   Updated: 2026/05/02 21:55:53 by joborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1u;
	unsigned char	*s2u;
	size_t			i;

	i = 0;
	s1u = (unsigned char *)s1;
	s2u = (unsigned char *)s2;
	while ((s1u[i] != '\0' || s2u[i] != '\0') && (i < n))
	{
		if (s1u[i] != s2u[i])
		{
			return (s1u[i] - s2u[i]);
		}
		i++;
	}
	return (0);
}
