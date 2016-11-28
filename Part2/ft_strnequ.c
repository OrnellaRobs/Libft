/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 16:45:37 by orazafin          #+#    #+#             */
/*   Updated: 2016/11/26 17:04:49 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((i < n) && (s1[i] || s2[i])))
	{
		if (s1[i] != s2[i])
			return (0);
		else if (s1[i] == s2[i])
		{
			printf("avant ++ : %zu\n", i);
			i++;
			printf("apres ++ : %zu\n", i);
		}
	}
	return (1);
}
