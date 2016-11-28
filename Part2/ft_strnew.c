/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 17:22:54 by orazafin          #+#    #+#             */
/*   Updated: 2016/11/26 18:09:10 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnew(size_t size)
{
	char	*new_str;
	size_t	i;

	i = 0;
	if (!(new_str = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (new_str[i])
	{
		new_str[i] = '\0';
		i++;
	}
	return (new_str);
}
