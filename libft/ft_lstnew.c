/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 19:54:46 by amorfan           #+#    #+#             */
/*   Updated: 2015/02/02 18:29:01 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if ((new = (t_list *)malloc(sizeof(t_list) * content_size)) == NULL)
		return (NULL);
	new->next = NULL;
	new->content_size = 0;
	if (content == NULL)
		new->content = NULL;
	else
	{
		if ((new->content = malloc(content_size)) == NULL)
			return (new);
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	return (new);
}
