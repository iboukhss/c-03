/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:30:13 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/06 17:15:39 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while (*src && i < nb)
	{
		*dest = *src;
		++dest;
		++src;
		++i;
	}
	*dest = '\0';
	return (tmp);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str = "xdd";
	char	d1[10] = "hehe";
	char	d2[10] = "hehe";
	char	*ret;
	char	*ret2;

	ret = ft_strncat(d1, str, 2);
	printf("ft_strncat: %s\n", ret);

	ret2 = strncat(d2, str, 2);
	printf("strncat: %s\n", ret2);
}
