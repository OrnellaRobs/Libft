/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:03:24 by orazafin          #+#    #+#             */
/*   Updated: 2016/11/30 10:24:45 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	*copy_n_octet(unsigned char *dest,
	unsigned const char *src, size_t n)
{
	while (n > 0)
	{
		dest[n] = src[n];
		n--;
	}
	return (dest);
}

static unsigned char	*copy_i_octet(unsigned char *dest,
	unsigned const char *src, size_t n, size_t i)
{
	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void					*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*dest_tmp;
	unsigned const char		*source_tmp;

	i = 0;
	dest_tmp = dest;
	source_tmp = src;
	if (dest_tmp > source_tmp && (size_t)(dest_tmp - source_tmp) <= n)
		dest_tmp = copy_n_octet(dest_tmp, source_tmp, n);
	else
		dest_tmp = copy_i_octet(dest_tmp, source_tmp, n, i);
	return (dest_tmp);
}
