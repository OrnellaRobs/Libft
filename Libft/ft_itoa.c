/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 15:40:20 by orazafin          #+#    #+#             */
/*   Updated: 2016/12/01 15:13:48 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_number(int n)
{
	int i;

	i = 0;
	if (n < 0)
		i++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int		get_last_number(int number)
{
	if (number < 0)
		return (0 - number);
	return (number);
}

char			*ft_itoa(int n)
{
	char	*tab;
	int		total_number;
	int		negatif;

	negatif = 0;
	if (n < 0)
		negatif = 1;
	total_number = count_number(n);
	if (!(tab = (char*)malloc(sizeof(char) * (total_number + 1))))
		return (NULL);
	tab[total_number] = '\0';
	total_number--;
	while (total_number >= negatif)
	{
		tab[total_number] = (char)(get_last_number(n % 10) + '0');
		n = n / 10;
		total_number--;
	}
	if (negatif == 1)
		tab[total_number] = '-';
	return (tab);
}
