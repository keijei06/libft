/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joborges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 10:29:40 by joborges          #+#    #+#             */
/*   Updated: 2025/07/25 10:06:36 by joborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (! (*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main(void)
{
        char *a = "masqueico";
        char *b = "ABC";
        char *c = "abc1";
        char *d = "|";
        char *e = "";
        char *f = "lowercase";
        char *g = "{}";

        printf("%d", ft_str_is_printable(a));
        printf("%d", ft_str_is_printable(b));
        printf("%d", ft_str_is_printable(c));
        printf("%d", ft_str_is_printable(d));
        printf("%d", ft_str_is_printable(e));
        printf("%d", ft_str_is_printable(f));
        printf("%d", ft_str_is_printable(g));
        return 0;
}*/
