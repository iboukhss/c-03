/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:30:13 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/14 14:19:29 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strncat(3): the size of dest must be at least strlen(dest)+n+1 */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*tmp;
	unsigned int	i;

	tmp = dest;
	i = 0;
	while (*dest)
	{
		++dest;
	}
	while (*src && (i < nb))
	{
		*dest = *src;
		++dest;
		++src;
		++i;
	}
	*dest = '\0';
	return (tmp);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[3] = {'1', '2', '3'};
	char	d1[10] = "test";
	char	d2[10] = "test";
	char	*ret;
	char	*ret2;

	ret = ft_strncat(d1, str, 3);
	printf("ft_strncat: %s\n", ret);

	ret2 = strncat(d2, str, 3);
	printf("strncat:    %s\n", ret2);
}
*/
