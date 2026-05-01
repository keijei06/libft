/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joborges <joborges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 23:22:45 by joborges          #+#    #+#             */
/*   Updated: 2026/05/01 12:49:35 by joborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	cd;

	cd = (unsigned char) c;
	while (*s)
	{
		if (*s == cd)
			return ((char *)s);
		s++;
	}
	if (*s == cd)
		return ((char *)s);
	return (NULL);
}
