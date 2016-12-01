/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:45:42 by orazafin          #+#    #+#             */
/*   Updated: 2016/11/30 10:51:51 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		nb_word(char *str, char c)
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

static char		**split(char const *s, char c, char **tab)
{
	unsigned int	i;
	unsigned int	taille;
	int				index;

	taille = 0;
	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] == c)
			taille = 0;
		else if (s[i] != c)
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				tab[index] = ft_strsub(s, (i - taille), taille + 1);
				index++;
			}
			taille++;
		}
		i++;
	}
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		nb;

	nb = nb_word((char *)s, c);
	if (!(tab = (char **)malloc(sizeof(char*) * (nb + 1))))
		return (NULL);
	tab = split(s, c, tab);
	tab[nb] = NULL;
	return (tab);
}
