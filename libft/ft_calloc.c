/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:56:13 by mchaduc           #+#    #+#             */
/*   Updated: 2023/07/26 16:56:16 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	max;
	size_t	nbytes;
	void	*ptr;

	max = 4294967296;
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (count * size > max)
		return (NULL);
	nbytes = count * size;
	ptr = malloc(nbytes);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nbytes);
	return (ptr);
}
