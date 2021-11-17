/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:10:46 by oabdelha          #+#    #+#             */
/*   Updated: 2021/11/09 09:28:27 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checking(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	int		s;
	int		len;
	int		i;

	i = 0;
	s = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	len = ft_strlen(s1);
	while (s1[s] && ft_checking(s1[s], set) == 1)
		s++;
	while (len > s && ft_checking(s1[len - 1], set) == 1)
		len--;
	temp = (char *)malloc(sizeof(char) * (len - s + 1));
	if (temp == NULL)
		return (NULL);
	while (s < len)
		temp[i++] = s1[s++];
	temp[i] = '\0';
	return (temp);
}
