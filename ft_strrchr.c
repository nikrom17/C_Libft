/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 09:16:05 by nroman            #+#    #+#             */
/*   Updated: 2018/02/26 21:17:26 by nroman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	while (i > -1)
	{
		if (s[i] == c)
			return (s + i);
		i--;
	}
	return (0);
}
