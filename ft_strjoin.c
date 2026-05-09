/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joborges <joborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 14:41:02 by joborges          #+#    #+#             */
/*   Updated: 2026/05/09 15:18:16 by joborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*alloc;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	alloc = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!alloc)
		return (NULL);
	ft_memcpy(alloc, s1, s1_len);
	ft_memcpy(alloc + s1_len, s2, s2_len);
	alloc[s1_len + s2_len] = '\0';
	return (alloc);
}
