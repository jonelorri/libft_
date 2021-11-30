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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*dest;
	size_t				i;
	unsigned int		n;

	if (!s)
		return (NULL);
	n = ft_strlen(s);
	if (start > n)
		return (ft_strdup(""));
	if (len > n)
		len = n;
	dest = (char *)malloc(sizeof(*s) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	if (n > start)
	{
		while (s[start + i] && i < len)
		{
			dest[i] = s[start + i];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
