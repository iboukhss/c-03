#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1)
	{
		printf("s1: %c\ns2: %c\n", *s1, *s2);
		++s1;
		++s2;
	}
	printf("\ns1: %d\ns2: %d\n", *s1, *s2);
	
	return (*s1 - *s2);
}

int	main(void)
{
	char	*hello = "";
	char	*salut = " ";
	int	ret1;
	int ret2;

	ret1 = strcmp(hello, salut);
	ret2 = ft_strcmp(hello, salut);

	printf("\nret1: %d\nret2: %d\n", ret1, ret2);
}
