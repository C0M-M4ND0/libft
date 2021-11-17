/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:08:46 by oabdelha          #+#    #+#             */
/*   Updated: 2021/11/11 21:34:02 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sing;

	i = 0;
	result = 0;
	sing = 1;
	while ((str[i] == '\t') || (str[i] == '\r') || (str[i] == '\n')
		|| (str[i] == '\f') || (str[i] == '\v') || (str[i] == ' '))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sing *= -1;
		i++;
	}
	while ((str[i] - '0') >= 0 && (str[i] - '0') <= 9)
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sing);
}
