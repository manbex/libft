/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:59:53 by mbenicho          #+#    #+#             */
/*   Updated: 2022/05/04 13:59:57 by mbenicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*((unsigned char *)s1) == *((unsigned char *)s2) && n - 1)
	{
		(unsigned char *)s1++;
		(unsigned char *)s2++;
		n--;
		i++;
	}
	if (i % 2)
		return ((*((unsigned char *)s1) - *((unsigned char *)s2)) * 256);
	return (*((unsigned char *)s1) - *((unsigned char *)s2));
}
