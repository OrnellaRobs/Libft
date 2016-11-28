/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafin <orazafin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:04:25 by orazafin          #+#    #+#             */
/*   Updated: 2016/11/27 16:06:59 by orazafin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_source;
	size_t	j;
	size_t	i;

	len_dest = ft_strlen((char *)dst);
	len_source = ft_strlen((char *)src);
	j = 0;
	i = ft_strlen(dst);
	if (!size)
		return (len_source);
 	while (src[j] && j < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (size <= len_dest)
		return (size + len_dest);
	return (len_source + len_dest);
}
*/
size_t	ft_strlcat(char *dest, char *src, size_t n)
{

   size_t i;
   size_t len_dest;
   size_t len_src;

   i = 0;
   len_dest = (size_t)ft_strlen(dest);
   len_src = (size_t)ft_strlen(src);
   if (n < len_dest)
       return (n + len_src);
   while (src[i] != '\0' && (len_dest + 1 + i) < n)
   {
       dest[len_dest + i] = src[i];
       i++;
   }
   dest[len_dest + i] = '\0';
   return (len_dest + len_src);
}

int		main(void)
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	printf("%d\n", (int)strlcat(buff1, str, max));
	puts(buff1);
	printf("%d\n", (int)ft_strlcat(buff2, str, max));
	puts(buff2);
	return (0);
}
