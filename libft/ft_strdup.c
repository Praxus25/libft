/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:48:03 by mchaduc           #+#    #+#             */
/*   Updated: 2023/07/27 13:48:04 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		nbytes;

	nbytes = ft_strlen(s1) + 1;
	ptr = (char *) malloc(sizeof(char) * nbytes);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, nbytes);
	return (ptr);
}
