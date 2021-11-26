#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*b;

	if (!s || !f)
		return (NULL);
	b = malloc(sizeof(*b) * (ft_strlen(s) + 1));
	if (!b)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		b[i] = f(i, s[i]);
		i++;
	}
	b[i] = '\0';
	return (b);
}
