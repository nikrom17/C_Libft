/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 11:11:57 by nroman            #+#    #+#             */
/*   Updated: 2018/02/25 19:57:06 by nroman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	if (len)
	{
		d = (unsigned char *)dest;
		s = (unsigned char *)src;
		while ((i < len) && s[i])
		{
			d[i] = s[i];
			i++;
		}
		d[i] = 0;
	}
	return (dest);
}
