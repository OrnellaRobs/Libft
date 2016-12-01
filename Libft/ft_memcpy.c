/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 10:32:05 by orazafin          #+#    #+#             */
/*   Updated: 2016/11/30 10:54:49 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*dest1;
	unsigned char const		*src1;

	i = 0;
	dest1 = dest;
	src1 = src;
	while (((src1[i]) && (i < n)))
	{
		dest1[i] = src1[i];
		i++;
	}
	while (dest1[i])
	{
		dest1[i] = '\0';
		i++;
	}
	return (dest1);
}
