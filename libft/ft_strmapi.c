/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:07:15 by mchaduc           #+#    #+#             */
/*   Updated: 2023/07/28 16:07:17 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				n;
	unsigned int	i;
	char			*map;

	n = 0;
	i = ft_strlen(s);
	map = (char *) malloc(sizeof(char) * (i + 1));
	if (map == NULL)
		return (NULL);
	while (s[n])
	{
		map[n] = f(n, s[n]);
		n++;
	}
	map[n] = '\0';
	return (map);
}
