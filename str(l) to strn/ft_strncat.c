/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joborges <joborges@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:42:32 by joborges          #+#    #+#             */
/*   Updated: 2025/07/26 15:04:52 by joborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
        char a[100] = "abobora";
        char d[100] = "abobora";
        char b[] = " com manga";
	unsigned int c = 10;
        printf("%s",ft_strncat(a, b, c));
	printf("\n");
	printf("%s",strncat(d, b, c));

}*/
