/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 09:15:11 by nroman            #+#    #+#             */
/*   Updated: 2018/02/28 09:16:01 by nroman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		k;
	size_t		n;

	i = 0;
	j = 0;
	k = 0;
	n = size;
	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0')
		k++;
	if (i <= size)
	{
		while (src[j] != '\0' && j < (size - i - 1))
		{
			dest[j + i] = src[j];
			j++;
		}
	}
	if (size != 0 && i <= size)
		dest[i + j] = '\0';
	if (i > size)
		return (size + k);
	else
		return (i + k);
}
