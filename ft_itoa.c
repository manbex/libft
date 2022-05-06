/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:35:34 by mbenicho          #+#    #+#             */
/*   Updated: 2022/05/05 19:35:35 by mbenicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_rev(char *str, int size)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = size - 1;
	size--;
	while (i <= size / 2)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

static char	*ft_strdupcat(char *src, char c)
{
	char	*dest;
	int		size;
	int		i;

	size = ft_strlen(src) + 1;
	dest = malloc((size + 1) * sizeof(char));
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = c;
	dest[size] = 0;
	free(src);
	return (dest);
}

char	*ft_itoa(int n)
{
	int			i;
	long int	nb;
	char		*str;

	str = malloc(1);
	if (str == 0)
		return (0);
	str[0] = 0;
	i = 0;
	nb = n;
	if (n == 0)
		str = ft_strdupcat(str, '0');
	if (n < 0)
		nb *= -1;
	while (nb != 0)
	{
		str = ft_strdupcat(str, (nb % 10) + '0');
		nb /= 10;
		i++;
	}
	if (n < 0)
		str = ft_strdupcat(str, '-');
	str = ft_rev(str, ft_strlen(str));
	return (str);
}
