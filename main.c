#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(const char *s1, char const *set);

int main()
{
	char a[10] = {'!', 'h', 'o', 'l', '!', 'h'};
	char b[3] = {'!', 'h'};
	void *ptr;
	void *ptr2;
	char *resultado;

	ptr2 = b;
	ptr = a;
	resultado = ft_strtrim((const char*)ptr, (const char*)ptr2);
	printf("%s", resultado);
	return(0);
}
