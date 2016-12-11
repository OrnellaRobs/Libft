/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 15:37:38 by orazafin          #+#    #+#             */
/*   Updated: 2016/12/11 23:11:33 by robinson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(char *str)
{
	int i;
	int res;
	int negatif;

	i = 0;
	res = 0;
	negatif = 0;
	while (ft_is_space(str) == 1)
		str++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		negatif = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (negatif == 1)
		return (res * (-1));
	return (res);
}
