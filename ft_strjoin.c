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
	size_t	mem;
	size_t	i;
	size_t	j;

	if(!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	mem = s1_len + s2_len;
	alloc =  malloc(mem + 1);
	if (!alloc)
		return (NULL);
	i = 0;
	j = 0;
	while (i < s1_len)
	{
		alloc[i] = s1[i];
		i++;
	}
	while(j < s2_len)
	{
		alloc[i] = s2[j];
		i++;
		j++;
	}
	alloc[i] = '\0';
	
	return (alloc);
	
}
