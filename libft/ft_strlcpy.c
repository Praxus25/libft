/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:54:33 by mchaduc           #+#    #+#             */
/*   Updated: 2023/07/25 15:54:35 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	dstsize--;
	while (i < dstsize && src[i] != '\0')
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	((char *)dst)[i] = '\0';
	return (ft_strlen(src));
}
