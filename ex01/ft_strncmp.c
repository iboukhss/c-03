/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:58:54 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/14 13:58:58 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 1;
	while ((*s1 == *s2) && (i < n) && *s1)
	{
		++s1;
		++s2;
		++i;
	}
	return (*s1 - *s2);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*hello = "";
	char	*salut = "halloworld";
	unsigned int k = 6;
	int	ret1;
	int	ret2;

	ret1 = strncmp(hello, salut, k);
	ret2 = ft_strncmp(hello, salut, k);

	printf("ret1: %d\nret2: %d\n", ret1, ret2);
}
*/
