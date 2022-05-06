/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:15:17 by mbenicho          #+#    #+#             */
/*   Updated: 2022/05/04 12:15:18 by mbenicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = dlen;
	j = 0;
	if (dlen < size - 1 && size > 0)
	{
		while (src[j] && dlen + j < size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = 0;
	}
	else
		dlen = size;
	return (slen + dlen);
}
