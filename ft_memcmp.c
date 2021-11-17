/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:30:37 by oabdelha          #+#    #+#             */
/*   Updated: 2021/11/10 14:49:44 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*strone;
	const unsigned char	*strtow;
	size_t				i;

	strone = s1;
	strtow = s2;
	i = 0;
	while (i < n)
	{
		if (strone[i] != strtow[i])
			return (strone[i] - strtow[i]);
		i++;
	}
	return (0);
}
