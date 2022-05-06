/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:55:01 by mbenicho          #+#    #+#             */
/*   Updated: 2022/05/03 18:55:03 by mbenicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(char const *s, char c)
{
	int		i;
	char	last;
	int		size;

	i = 0;
	last = c;
	size = 0;
	while (s[i])
	{
		if (s[i] != c && last == c)
			size++;
		last = s[i];
		i++;
	}
	return (size);
}

static char	*ft_strncpy(char *dest, const char *s, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s[i] && i < n)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

static int	ft_strlen_c(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		size;

	size = ft_size(s, c);
	tab = malloc((size + 1) * sizeof(char *));
	if (tab == 0)
		return (0);
	tab[size] = 0;
	i = 0;
	j = 0;
	while (j < size)
	{
		while (s[i] == c)
			i++;
		tab[j] = malloc(ft_strlen_c(s + i, c) * sizeof(char));
		ft_strncpy(tab[j], s + i, ft_strlen_c(s + i, c));
		i += ft_strlen_c(s + i, c);
		j++;
	}
	return (tab);
}
