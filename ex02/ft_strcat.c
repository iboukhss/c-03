/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:10:46 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/14 14:10:48 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	s1[11] = {'h', 'e', 'l', 'l', 'o'};
	char	s2[11] = {'h', 'e', 'l', 'l', 'o'};
	char	*str = "world";
	char	*ret;

	ret = strcat(s1, str);
	printf("strcat: %s %p\n", ret, ret);

	ret = ft_strcat(s2, str);
	printf("ft_strcat: %s %p\n", ret, ret);
}
*/
