/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:56:29 by jelorria          #+#    #+#             */
/*   Updated: 2021/11/11 17:03:44 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(long m)
{
	int	lens;

	lens = 0;
	if (m <= 0)
		lens = 1;
	while (m != 0)
	{
		lens++;
		m = m / 10;
	}
	return (lens);
}

char	*ft_itoa(int n)
{
	char	*s;
	int	i;
	long	m;

	m = n;
	i = len(m);
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i--] = '\0';
	if (m == 0)
		s[0] = '0';
	if (m < 0 )
	{
		s[0] = '-';
		m = m * -1;
	}
	while (m > 0)
	{
		s[i] = '0' + (m % 10);
		m = m / 10;
		i--;
	}
	return (s);
}
