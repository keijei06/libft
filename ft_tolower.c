/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:48:10 by joborges          #+#    #+#             */
/*   Updated: 2025/07/25 10:06:10 by joborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*orig;

	orig = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (orig);
}
/*
int main(void)
{
        char a[] = "ABCCC";
        char b[] = "aboBora";
        char c[] = "ABC CORA";
        char d[] = "AFANHA2";
        char e[] = "";

        printf("%s\n",ft_strlowcase(a));
        printf("%s\n",ft_strlowcase(b));
        printf("%s\n",ft_strlowcase(c));
        printf("%s\n",ft_strlowcase(d));
        printf("%s\n",ft_strlowcase(e));

        return 0;
}*/
