/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:34:44 by oabdelha          #+#    #+#             */
/*   Updated: 2021/11/09 09:26:08 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*s2;
	size_t	i;
	size_t	result;
	size_t	j;
	size_t	k;

	k = 0;
	result = 0;
	s2 = (char *)src;
	i = ft_strlen(dst);
	j = ft_strlen(s2);
	if (i < dstsize)
		result = j + i;
	else
		result = j + dstsize;
	while (s2[k] && i + 1 < dstsize)
	{
		dst[i] = s2[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (result);
}
