/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:16:54 by mbenicho          #+#    #+#             */
/*   Updated: 2022/05/04 14:16:55 by mbenicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- && *((const unsigned char *)s) != (unsigned char)c)
		(const unsigned char *)s++;
	if (*((const unsigned char *)s) == (unsigned char)c)
		return ((unsigned char *)s);
	return (0);
}
