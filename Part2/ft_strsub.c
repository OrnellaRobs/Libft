/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:12:53 by orazafin          #+#    #+#             */
/*   Updated: 2016/11/27 21:59:29 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*copy_s;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	if (!(copy_s = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy_s[i] = s[start];
		i++;
		start++;
	}
	copy_s[i] = '\0';
	return (copy_s);
}
