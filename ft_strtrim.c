/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joborges <joborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 15:20:36 by joborges          #+#    #+#             */
/*   Updated: 2026/05/09 16:15:53 by joborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	i_alloc;
	char	*alloc;

	i = 0;
	i_alloc = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) != NULL)
		i++;
	while (j > i && ft_strchr(set, s1[j]) != NULL)
		j--;
	alloc = malloc(j - i + 2);
	if (!alloc)
		return (NULL);
	while (i <= j)
	{
		alloc[i_alloc] = s1[i];
		i++;
		i_alloc++;
	}
	alloc[i_alloc] = '\0';
	return (alloc);
}	
