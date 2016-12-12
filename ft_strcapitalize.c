/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 14:29:26 by orazafin          #+#    #+#             */
/*   Updated: 2016/12/12 15:33:40 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

int		ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int		ft_is_upper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int		ft_is_lower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

char *ft_strcapitalize(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (str[i])
	{
		if (ft_isalnum(str[i]) == 0)
			flag = 0;
		else if (((ft_is_lower(str[i]) == 1) && (flag == 0)) || i == 0)
		{
			str[i] = ft_toupper(str[i]);
			flag = 1;
		}
		else if ((ft_is_lower(str[i]) == 0) && (flag == 0))
			flag = 1;
		else if ((ft_is_upper(str[i]) == 1) && (flag == 1))
			str[i] = ft_tolower(str[i]);
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[1000] = "salut, SALUT ? 42SALUT 42salut, quArente-deux; cinquDte+Et+un";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
