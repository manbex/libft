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
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (dlen >= size)
		dlen = size;
	else if ((dlen + slen) < size)
		ft_memcpy((dst + dlen), src, (slen + 1));
	else
	{
		ft_memcpy((dst + dlen), src, (size - dlen - 1));
		dst[size - 1] = 0;
	}
	return (slen + dlen);
}
