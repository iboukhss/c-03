#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 == *s2 && n > 0)
	{
		printf("s1: %c\ns2: %c\n", *s1, *s2);
		++s1;
		++s2;
		--n;
	}
	printf("\ns1: %d\ns2: %d\n", *s1, *s2);
	return(*s1 - *s2);
}

int	main(void)
{
	char	*hello = "ABC";
	char	*salut = "AB";
	int k = 2;
	int	ret1;
	int ret2;

	ret1 = strncmp(hello, salut, k);
	ret2 = ft_strncmp(hello, salut, k);

	printf("\nret1: %d\nret2: %d\n", ret1, ret2);
}
