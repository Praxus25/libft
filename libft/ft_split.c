/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:14:29 by mchaduc           #+#    #+#             */
/*   Updated: 2023/07/27 16:14:31 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_nwords(char const *s, char c)
{
	int	i;
	int	nwords;

	i = 0;
	nwords = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			nwords++;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (s[i] == '\0')
				return (nwords);
		}
		i++;
	}
	return (nwords);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**strs;

	strs = (char **) malloc (sizeof(char *) * (ft_nwords(s, c) + 1));
	if (strs == NULL || s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_nwords(s, c))
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			strs[j] = ft_substr(s, start, i - start);
			j++;
		}
		i++;
	}
	strs[j] = NULL;
	return (strs);
}
