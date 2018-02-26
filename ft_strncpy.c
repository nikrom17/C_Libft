/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 08:57:54 by nroman            #+#    #+#             */
/*   Updated: 2018/02/25 20:08:25 by nroman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = -1;
	if (n)
	{
		while (++i < n && src[i])
			dest[i] = src[i];
		while (i < n)
			dest[i++] = 0;
	}
	return (dest);
}
