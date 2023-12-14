/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:50:23 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/14 13:50:31 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*hello = "";
	char	*salut = "";
	int	ret1;
	int ret2;

	ret1 = strcmp(hello, salut);
	ret2 = ft_strcmp(hello, salut);

	printf("1: %d\n2: %d\n", ret1, ret2);
}
*/
