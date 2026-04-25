/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joborges <joborges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:57:03 by joborges          #+#    #+#             */
/*   Updated: 2025/08/02 17:28:10 by joborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	duplicate = (char *)malloc(len + 1);
	if (duplicate == NULL)
		return (NULL);
	ft_strcpy(duplicate, src);
	return (duplicate);
}
/*int main() {
	char src[] = "Hello, World!";

	char *duplicate = ft_strdup(src);

	if (duplicate == NULL) {
		printf("Erro ao alocar memória para a duplicação da string.\n");
		return (1);
	}

	printf("Original: %s\n", src);
	printf("Duplicada: %s\n", duplicate);

	free(duplicate);

	return (0);
}*/
