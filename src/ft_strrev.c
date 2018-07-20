/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 20:32:30 by nroman            #+#    #+#             */
/*   Updated: 2018/07/19 17:30:56 by nroman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strrev(char *str)
{
	int size;
	int i;
	int temp;

	i = 0;
	size = 0;
	if (str)
	{
		while (str[size] != '\0')
			size++;
		size--;
		while (i <= (size / 2))
		{
			temp = str[i];
			str[i] = str[size - i];
			str[size - i] = temp;
			i++;
		}
	}
}
