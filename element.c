/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 20:46:41 by amorfan           #+#    #+#             */
/*   Updated: 2015/01/28 17:25:04 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst			*ft_create_element(int value)
{
	t_lst		*new_element;

	new_element = (t_lst *)malloc(sizeof(t_lst));
	new_element->value = value;
	new_element->next = NULL;
	new_element->prev = NULL;
	return (new_element);
}

t_lst			*ft_insert_element_end(t_lst *list, int value)
{
	t_lst		*tmp;
	t_lst		*new_element;

	tmp = list;
	new_element = ft_create_element(value);
	if (list == NULL)
		return (new_element);
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_element;
		new_element->prev = tmp;
	}
	return (list);
}

t_lst			*ft_insert_element_first(t_lst *list, int value)
{
	t_lst		*tmp;
	t_lst		*new_element;

	tmp = list;
	new_element = ft_create_element(value);
	if (list == NULL)
		return (new_element);
	else
	{
		while (tmp->prev != NULL)
			tmp = tmp->prev;
		tmp->prev = new_element;
		new_element->next = tmp;
		list = list->prev;
	}
	return (list);
}

t_lst			*ft_last_element(t_lst *l_tmp)
{
	while (l_tmp->next != NULL)
		l_tmp = l_tmp->next;
	return (l_tmp);
}
