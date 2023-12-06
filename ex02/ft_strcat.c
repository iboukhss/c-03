char	*ft_strcat(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*dest)
	{
		++dest;
	}
	while (*src)
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = '\0';
	return (tmp);
}


#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	s1[11] = {'h', 'e', 'l', 'l', 'o'};
	char	s2[11] = {'h', 'e', 'l', 'l', 'o'};
	char	*str = "world";
	char	*ret;
	int		n = 12;

	printf("before: %s\n", s1);

	for (int x = 0; x < n; ++x)
		printf("%c %p\n", s1[x], &s1[x]);

	ret = ft_strcat(s1, str);

	printf("\nafter:  %s\n", s1);
	for (int x = 0; x < n; ++x)
		printf("%c %p\n", s1[x], &s1[x]);

	printf("ft_strcat: %s\n", ret);

	ret = strcat(s2, str);
	printf("strcat: %s\n", ret);
}
