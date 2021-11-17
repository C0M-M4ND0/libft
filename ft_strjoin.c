/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:38:46 by oabdelha          #+#    #+#             */
/*   Updated: 2021/11/04 09:42:47 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	l = ft_strlen(s2);
	temp = (char *)malloc(i + l + 1);
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (*s1)
		temp[i++] = *s1++;
	while (*s2)
		temp[i++] = *s2++;
	temp[i] = '\0';
	return (temp);
}
