/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:12:44 by oabdelha          #+#    #+#             */
/*   Updated: 2021/11/10 12:05:48 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str ;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (n != 0)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
		n--;
	}
	return (NULL);
}
