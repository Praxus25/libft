/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:08:15 by mchaduc           #+#    #+#             */
/*   Updated: 2023/07/28 14:08:17 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_len(int n)
{
	int	l;

	l = 0;
	if (n <= 0)
	{
		l++;
	}
	while (n != 0)
	{
		l++;
		n = n / 10;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char			*ptr;
	unsigned int	l;
	unsigned int	nbr;

	l = ft_len(n);
	ptr = (char *) malloc(sizeof(char) * (l + 1));
	if (ptr == NULL)
		return (NULL);
	nbr = n;
	if (n < 0)
	{
		ptr[0] = '-';
		nbr = n * (-1);
	}
	ptr[l] = '\0';
	if (nbr == 0)
		ptr[0] = '0';
	while (nbr != 0)
	{
		l--;
		ptr[l] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (ptr);
}
