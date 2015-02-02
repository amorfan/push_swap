/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 14:11:37 by amorfan           #+#    #+#             */
/*   Updated: 2015/01/28 17:26:22 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_ascending(t_lst *l_a)
{
	if (l_a == NULL)
		return (0);
	while (l_a->value < (l_a->next)->value)
	{
		l_a = l_a->next;
		if (l_a->next == NULL)
			return (1);
	}
	return (0);
}

int			ft_descending(t_lst *l_b)
{
	if (l_b == NULL)
		return (1);
	while (l_b->value > (l_b->next)->value)
	{
		l_b = l_b->next;
		if (l_b->next == NULL)
			return (1);
	}
	return (0);
}

t_lst		*ft_rotate_a(t_lst *l_a, t_lst *l_b)
{
	t_lst	*last;

	last = ft_last_element(l_a);
	last->next = l_a;
	(l_a->next)->prev = NULL;
	l_a->next = NULL;
	l_a->prev = last;
	while (l_a->prev != NULL)
		l_a = l_a->prev;
	if ((ft_ascending(l_a) == 1) && l_b == NULL)
		ft_printf("ra\n");
	else
		ft_printf("ra ");
	return (l_a);
}

t_lst		*ft_rotate_b(t_lst *l_b)
{
	t_lst	*last;

	last = ft_last_element(l_b);
	last->next = l_b;
	(l_b->next)->prev = NULL;
	l_b->prev = last;
	l_b->next = NULL;
	while (l_b->prev != NULL)
		l_b = l_b->prev;
	ft_printf("rb ");
	return (l_b);
}
