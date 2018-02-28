/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 09:15:11 by nroman            #+#    #+#             */
/*   Updated: 2018/02/27 19:50:35 by nroman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	j = 0;
	k = 0;
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
