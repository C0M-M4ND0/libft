/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:41:03 by oabdelha          #+#    #+#             */
/*   Updated: 2021/11/09 09:29:13 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*temp;
	unsigned int	i;
	size_t			n;

	i = 0;
	n = 0;
	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s))
		temp = (char *)malloc((ft_strlen(s) + 1) * sizeof(*s));
	else
		temp = (char *)malloc((len + 1) * sizeof(*s));
	if (temp == NULL)
		return (NULL);
	while (s[i])
	{
		if (i >= start && n < len)
		{
			temp[n] = s[i];
			n++;
		}
		i++;
	}
	temp[n] = '\0';
	return (temp);
}
