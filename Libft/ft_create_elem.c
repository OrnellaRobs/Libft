/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinson <robinson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 00:23:22 by robinson          #+#    #+#             */
/*   Updated: 2016/12/12 00:31:56 by robinson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_create_elem(void *content)
{
  t_list *new_elem;

  new_elem = NULL;
  if(!(new_elem = (t_list*)malloc(sizeof(t_list))))
    return (NULL);
  if (new_elem)
  {
    new_elem->content = content;
    new_elem->next = NULL;
  }
  return (new_elem);
}
