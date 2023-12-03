#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (*s1 == *s2 && i < n && *s1)
	{
		printf("s1: %c %p\ns2: %c %p\n", *s1, s1, *s2, s2);
		++s1;
		++s2;
		++i;
	}
	printf("\ns1: %d\ns2: %d\n", *s1, *s2);
	return (*s1 - *s2);
}

int	main(void)
{
	char	*hello = "ABBV";
	char	*salut = "AB";
	unsigned int k = 2;
	int	ret1;
	int	ret2;

	ret1 = strncmp(hello, salut, k);
	ret2 = ft_strncmp(hello, salut, k);

	printf("\nret1: %d\nret2: %d\n", ret1, ret2);
}
