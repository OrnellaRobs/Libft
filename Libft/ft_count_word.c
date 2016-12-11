/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinson <robinson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 22:54:31 by robinson          #+#    #+#             */
/*   Updated: 2016/12/11 22:55:51 by robinson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_word(char *str, char c)
{
	int i;
	int flag;
	int word;

	i = 0;
	flag = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] == c)
			flag = 0;
		else if ((str[i] != c) && (flag == 0))
		{
			word++;
			flag = 1;
		}
		i++;
	}
	return (word);
}
