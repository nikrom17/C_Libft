/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_ptr_eql.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 14:41:33 by nroman            #+#    #+#             */
/*   Updated: 2018/06/20 19:24:54 by nroman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_ptr_eql(void *ptr1, void *ptr2)
{
	if (ptr1 == ptr2)
		return (0);
	return (1);
}
