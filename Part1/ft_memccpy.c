/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 13:46:30 by orazafin          #+#    #+#             */
/*   Updated: 2016/11/25 11:33:41 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*dest_tmp;
	unsigned const char		*source_tmp;

	i = 0;
	dest_tmp = dest;
	source_tmp = src;
	while ((source_tmp[i]) && (i < n))
	{
		if ((char)source_tmp[i] == c)
		{
			dest_tmp[i] = source_tmp[i];
			return (dest_tmp + (i + 1));
		}
		else
		{
			dest_tmp[i] = source_tmp[i];
			i++;
		}
	}
	return (NULL);
}
