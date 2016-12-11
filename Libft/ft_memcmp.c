/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:34:50 by orazafin          #+#    #+#             */
/*   Updated: 2016/12/12 00:04:36 by robinson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char		*tmp_s1;
    const unsigned char		*tmp_s2;
    unsigned int					i;

    i = 0;
    tmp_s1 = (unsigned char*)s1;
    tmp_s2 = (unsigned char*)s2;
    while (i < n && tmp_s1[i] == tmp_s2[i])
        i++;
    if (i < n)
        return ((unsigned char)tmp_s1[i] - tmp_s2[i]);
    else
    {
        if (tmp_s1[i] == tmp_s2[i])
            return (tmp_s1[i] - tmp_s2[i]);
        else
            return (0);
    }
		return (0);
}
