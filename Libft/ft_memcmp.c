/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:34:50 by orazafin          #+#    #+#             */
/*   Updated: 2016/12/01 09:04:26 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char		*string_1;
	unsigned const char		*string_2;
	size_t					i;

	string_1 = (unsigned const char*)s1;
	string_2 = (unsigned const char*)s2;
	i = 0;
	while ((string_1[i] || string_2[i]) && (i < n))
	{
		if (string_1[i] == string_2[i])
			i++;
		if (string_1[i] != string_2[i] && (i < n))
			return (string_1[i] - string_2[i]);
	}
	return (0);
}
