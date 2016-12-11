/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 18:47:45 by orazafin          #+#    #+#             */
/*   Updated: 2016/12/11 23:51:14 by robinson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*copy(char *str_both, char *s, int len_s, int j)
{
	int i;

	i = 0;
	while (i < len_s)
	{
		str_both[j] = s[i];
		i++;
		j++;
	}
	return (str_both);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_both;
	int		j;
	int		len_s1;
	int		len_s2;

	j = 0;
	if (!s1)
		return ((char*)s2);
	if (!s2)
			return ((char*)s1);
	len_s1 = ft_strlen((char*)s1);
	len_s2 = ft_strlen((char*)s2);
	if (!(str_both = (char *)malloc(sizeof(char) * (len_s1 + len_s2) + 1)))
		return (NULL);
	str_both = copy(str_both, (char *)s1, len_s1, j);
	j = len_s1;
	str_both = copy(str_both, (char *)s2, len_s2, j);
	j = (len_s1 + len_s2);
	str_both[j] = '\0';
	return (str_both);
}
