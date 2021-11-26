/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelorria <jelorria@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:26:19 by jelorria          #+#    #+#             */
/*   Updated: 2021/11/12 20:03:55 by jelorria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *a = (char*)malloc(len);
	char *s2 = (char*)s;
	unsigned int i;

	i = 0;
	while (len-- > 0)
	{
		a[i] = s2[start];
		i++;
		start++;
	}
	return (a);
}
