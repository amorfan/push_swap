/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/02 17:55:21 by amorfan           #+#    #+#             */
/*   Updated: 2015/02/02 17:56:31 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*ptr;

	tmp = *alst;
	while (tmp)
	{
		ptr = tmp;
		tmp = tmp->next;
		ft_lstdelone(&ptr, del);
	}
	*alst = NULL;
}
