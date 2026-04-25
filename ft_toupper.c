/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:02:57 by joborges          #+#    #+#             */
/*   Updated: 2025/07/25 10:06:18 by joborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*orig;

	orig = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (orig);
}
/*
int main(void)
{
        char a[] = "masqueico";
        char b[] = "aboBora";
        char c[] = "aran co";
        char d[] = "aanha2";
        char e[] = "";

        printf("%s\n",ft_strupcase(a));
        printf("%s\n",ft_strupcase(b));
        printf("%s\n",ft_strupcase(c));
        printf("%s\n",ft_strupcase(d));
        printf("%s\n",ft_strupcase(e));

        return 0;
}*/
