/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:48:36 by mchaduc           #+#    #+#             */
/*   Updated: 2023/07/25 17:48:37 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		n;
	char	*p;

	n = 0;
	while (n <= ft_strlen(s))
	{
		if ((char)c == (((char *)s)[n]))
		{
			p = &((char *)s)[n];
			return (p);
		}
		n++;
	}
	return (NULL);
}
