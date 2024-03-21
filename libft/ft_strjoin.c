/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:53:29 by mchaduc           #+#    #+#             */
/*   Updated: 2023/07/27 14:53:31 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	n;
	size_t	s;

	ptr = malloc(1 + ft_strlen(s1) + ft_strlen(s2));
	if (ptr == 0)
		return (NULL);
	n = 0;
	s = 0;
	while (s1[n] != '\0')
	{
		ptr[n] = s1[n];
		s++;
		n++;
	}
	s = 0;
	while (s2[s] != '\0')
	{
		ptr[n] = s2[s];
		s++;
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
