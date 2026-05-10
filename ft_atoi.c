/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joborges <joborges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 22:18:20 by joborges          #+#    #+#             */
/*   Updated: 2026/05/07 22:46:36 by joborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == 45)
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
        	i++;
	while (str[i] >= 48 && str[i] <=  57)
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
