/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:20:59 by oabdelha          #+#    #+#             */
/*   Updated: 2021/11/06 15:41:15 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ca;

	ca = malloc(count * size);
	if (ca == NULL)
		return (NULL);
	else
		ft_memset(ca, 0, count * size);
	return (ca);
}
