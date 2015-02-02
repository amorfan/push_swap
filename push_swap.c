/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 20:48:30 by amorfan           #+#    #+#             */
/*   Updated: 2015/01/28 17:23:15 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst		*ft_swap_a(t_lst *l_a, t_lst *l_b)
{
	l_a->prev = l_a->next;
	((l_a->next)->next)->prev = (l_a->next)->prev;
	l_a->next = (l_a->next)->next;
	(l_a->prev)->next = l_a;
	(l_a->prev)->prev = NULL;
	l_a = l_a->prev;
	if ((ft_ascending(l_a) == 1) && l_b == NULL)
		ft_putstr("sa\n");
	else
		ft_putstr("sa ");
	return (l_a);
}

t_lst		*ft_swap_b(t_lst *l_b)
{
	l_b->prev = l_b->next;
	if ((l_b->next)->next != NULL)
	{
		((l_b->next)->next)->prev = (l_b->next)->prev;
		l_b->next = (l_b->next)->next;
		(l_b->prev)->next = l_b;
		(l_b->prev)->prev = NULL;
		l_b = l_b->prev;
	}
	else
	{
		(l_b->prev)->next = l_b;
		l_b->next = NULL;
		(l_b->prev)->prev = NULL;
		l_b = l_b->prev;
	}
	ft_putstr("sb ");
	return (l_b);
}

void		ft_push_a(t_lst **l_a, t_lst **l_b, t_flag *flag)
{
	flag->a = 0;
	*l_a = ft_insert_element_first(*l_a, (*l_b)->value);
	if ((*l_b)->next != NULL)
	{
		*l_b = (*l_b)->next;
		(*l_b)->prev->next = NULL;
		(*l_b)->prev = NULL;
	}
	else
	{
		*l_b = NULL;
		flag->b = 1;
	}
	if ((ft_ascending(*l_a) == 1) && *l_b == NULL)
		ft_putstr("pa\n");
	else
		ft_putstr("pa ");
}

void		ft_push_b(t_lst **l_a, t_lst **l_b, t_flag *flag)
{
	flag->b = 0;
	*l_b = ft_insert_element_first(*l_b, (*l_a)->value);
	if ((*l_a)->next != NULL)
	{
		*l_a = (*l_a)->next;
		(*l_a)->prev->next = NULL;
		(*l_a)->prev = NULL;
	}
	else
		*l_a = NULL;
	ft_putstr("pb ");
}
