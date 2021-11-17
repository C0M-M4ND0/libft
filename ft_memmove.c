/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:56:39 by oabdelha          #+#    #+#             */
/*   Updated: 2021/11/09 09:23:19 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*ds;
	const char	*sr;
	char		*dd;
	const char	*ss;

	if (dest == NULL && src == NULL)
		return (NULL);
	ds = dest;
	sr = src;
	if (ds < sr)
		while (len--)
			*ds++ = *sr++;
	else
	{
		ss = sr + (len - 1);
		dd = ds + (len - 1);
		while (len--)
			*dd-- = *ss--;
	}
	return (dest);
}
