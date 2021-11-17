/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:49:40 by oabdelha          #+#    #+#             */
/*   Updated: 2021/11/09 09:20:19 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_write(char *temp, unsigned int i, long int l)
{
	while (i > 0)
	{
		temp[l] = '0' + (i % 10);
		i = i / 10;
		l--;
	}
	return (temp);
}

static long int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*temp;
	long int		len;
	unsigned int	rep;

	rep = 0;
	len = ft_count(n);
	temp = (char *)malloc(sizeof(char) * (len + 1));
	if (temp == NULL)
		return (NULL);
	temp[len--] = '\0';
	if (n == 0)
		temp[0] = '0';
	if (n < 0)
	{
		rep = n * -1;
		temp[0] = '-';
	}
	else
		rep = n;
	temp = ft_write(temp, rep, len);
	return (temp);
}

/*int main()
  {
  printf("%s",ft_itoa());

  return 0;
  }*/
