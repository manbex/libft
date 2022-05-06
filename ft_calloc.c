/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:24:51 by mbenicho          #+#    #+#             */
/*   Updated: 2022/05/05 15:24:52 by mbenicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb * size >= 4294967295)
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);
	ft_bzero (ptr, nmemb * size);
	return (ptr);
}
