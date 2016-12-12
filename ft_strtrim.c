/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 23:41:30 by orazafin          #+#    #+#             */
/*   Updated: 2016/12/12 23:41:31 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_is_space_trim(char const *s)
{
    if (*s == ' ' || *s == '\n' || *s == '\t')
        return (1);
    return (0);
}

static int  str_is_empty(const char *str)
{
	while (*str)
	{
		if (*str > 32)
			return (0);
		str++;
	}
	return (1);
}

char        *ft_strtrim(char const *s)
{
    char             *str;
    unsigned int    len;

    if (!s || (str_is_empty(s) == 1))
        return ("");
    while ((ft_is_space_trim(s) == 1) && s)
        s++;
    len = ft_strlen((char *)s);
    len--;
    while ((ft_is_space_trim(&s[len]) == 1) && (len))
        len--;
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    str = ft_strsub(s, 0, (len + 1));
    if (!str)
        return (NULL);
    return (str);
}
