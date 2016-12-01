/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:05:36 by orazafin          #+#    #+#             */
/*   Updated: 2016/11/30 10:23:35 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const	char	*s1;

	i = 0;
	s1 = s;
	while (s1[i] && (i <= n))
	{
		if (s1[i] == c)
			return ((void *)s1 + i);
		i++;
	}
	return (NULL);
}
