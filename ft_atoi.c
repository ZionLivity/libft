/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:21:39 by rbenjami          #+#    #+#             */
/*   Updated: 2013/11/22 15:53:36 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * With implementation ft_strtol
 */
int	ft_atoi(const char *str)
{
	return ((int)ft_strtol(str, (char **)NULL, 10));
}

/** 
 * Without implementation 
 */
/*
int	ft_atoi(const char *str)
{
	int		res;
	int		neg;

	res = 0;
	neg = 0;
	if (*str == '-')
	{
		str++;
		neg = 1;
	}
	if (*str == '+')
		str++;
	while (*str)
	{
		if (ft_isdigit(*str))
			res = res * 10 + (*str) - '0';
		else
			return (0);
		str++;
	}
	if (neg)
		return (-res);
	return (res);
}
*/
