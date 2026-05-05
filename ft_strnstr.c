/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joborges <joborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 19:10:42 by joborges          #+#    #+#             */
/*   Updated: 2026/05/05 19:55:23 by joborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	s2_len;
	size_t	i;
	
	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	s2_len = strlen(s2);
	while (s1[i] && (len - i) >= s2_len)
	{
	    if (strncmp(s1 + i, s2, s2_len) == 0)
		return ((char *)(s1 + i));
	    i++;
	}
	return (NULL);
}
