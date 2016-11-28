/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:45:42 by orazafin          #+#    #+#             */
/*   Updated: 2016/11/28 14:31:25 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>

#include <stdio.h>
#include <stdlib.h>

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

static int		nb_word(char *str, char c)
{
	int i;
	int space;
	int word;

	i = 0;
	space = 0;
	word = 0;
	while(str[i])
	{
		if(str[i] == c)
			space++;
		else
		{
			if (space != 0)
			{
				word++;
				space = 0;
			}
		}
		i++;
	}
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	int nb;
	char **tab;
	int i;
	int space;
	int index;

	i = 0;
	index = 0;
	nb = nb_word((char *)s, c);
	if (!(tab = (char **)malloc(sizeof(char*) * (nb + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] == 0)
			space++;
		else
		{
			if (space != 0)
			{
				tab[index] = ft_strsub(s, (i - space), space);
				index++;
				space = 0;
			}
		}
		i++;
	}
	if (space != 0)
		tab[index] = ft_strsub(s, (i - space), space);
	return (tab);
}

void 	affiche(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != NULL)
		printf("[%s]\n", tab[i]);
}

int		main(int argc, char **argv)
{
	argc++;
	char **tab = ft_strsplit(argv[1], ' ');
	printf("%d\n", nb_word(argv[1], ' '));
	affiche(tab);
	return (0);
}
