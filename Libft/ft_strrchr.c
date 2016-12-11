/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 09:08:20 by orazafin          #+#    #+#             */
/*   Updated: 2016/12/06 10:40:16 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int	flag;
	int end;

	end = ft_strlen((char *)s);
	i = 0;
	flag = (-1);
	if (c == '\0')
		return ((char *)&s[end]);
	while (s[i])
	{
		if (s[i] == c)
			flag = i;
		i++;
	}
	if (flag > (-1))
		return ((char *)s + flag);
	return (0);
}
