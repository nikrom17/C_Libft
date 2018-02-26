/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 09:36:29 by nroman            #+#    #+#             */
/*   Updated: 2018/02/24 08:46:43 by nroman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int neq;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			neq = 0;
			while (to_find[j] != '\0')
			{
				if (to_find[j] != str[i + j])
					neq = 1;
				j++;
			}
			if (!neq)
				return (str + i);
		}
		i++;
	}
	return ((void *)0);
}
