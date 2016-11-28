/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 11:35:34 by orazafin          #+#    #+#             */
/*   Updated: 2016/11/28 13:36:24 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static unsigned int		is_space_begin(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

static unsigned int		is_space_end(char *s, int len_s)
{
	unsigned int i;

	i = 0;
	while (s[len_s] == ' ' || s[len_s] == '\n' || s[len_s] == '\t')
	{
		len_s--;
		i++;
	}
	return (i);
}

char					*ft_strtrim(char const *s)
{
	int				len_s;
	char			*str_trim;
	unsigned int	begin;
	unsigned int	size;

	len_s = ft_strlen((char*)s);
	begin = is_space_begin((char*)s);
	size = len_s - (begin + is_space_end((char*)s, (len_s - 1)));
	if (!(str_trim = (char *)malloc(sizeof(char) * (len_s - begin + size + 1))))
		return (NULL);
	str_trim = ft_strsub(s, begin, size);
	str_trim[len_s] = '\0';
	return (str_trim);
}
