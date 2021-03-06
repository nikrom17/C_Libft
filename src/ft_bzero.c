/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 10:57:42 by nroman            #+#    #+#             */
/*   Updated: 2018/03/28 11:37:06 by nroman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	size_t			i;
	unsigned char	*cpy;

	cpy = (unsigned char *)b;
	i = 0;
	while (i < len)
		cpy[i++] = 0;
}
