/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joborges <joborges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:59:16 by joborges          #+#    #+#             */
/*   Updated: 2026/05/01 12:56:51 by joborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int c)
{
	unsigned char	*st;
	unsigned char	cd;
	size_t			st_len;

	st = (unsigned char *)str;
	cd = (unsigned char)c;
	st_len = ft_strlen((const char *)st);
	if (cd == '\0')
		return ((char *)&st[st_len]);
	while (st_len > 0)
	{
		st_len--;
		if (st[st_len] == cd)
			return ((char *)&st[st_len]);
	}
	return (NULL);
}
