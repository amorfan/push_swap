/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 19:59:12 by amorfan           #+#    #+#             */
/*   Updated: 2015/02/02 21:32:51 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			main(int argc, char **argv)
{
	t_lst	*l_a;
	int		i;

	l_a = NULL;
	if (argc > 2)
	{
		if ((i = ft_check_param(argv)) == 0)
			return (0);
		while (argv[i])
		{
			if (!(ft_check_digit(argv[i])) || !(ft_check_double(argv, i)))
			{
				ft_putendl("Error");
				return (0);
			}
			l_a = ft_insert_element_end(l_a, ft_atoi(argv[i]));
			i++;
		}
		ft_sort(l_a);
	}
	return (0);
}

int 		ft_check_param(char **argv)
{
	int 	i;

	i = 1;
	if (ft_strcmp(argv[1], "-v") == 0)
	{
		i++;
		if (ft_strcmp(argv[2], "-c") == 0)
			i++;
	}
	if (!(argv[i]) && i >= 2)
		return (0);
	return (i);
}

int			ft_check_double(char **argv, int begin)
{
	int		i;
	int		j;

	i = begin;
	while (argv[i] != '\0')
	{
		j = begin;
		while (argv[j] != '\0')
		{
			if (ft_strcmp(argv[i], argv[j]) == 0 && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int			ft_check_digit(char *argv)
{
	int		i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] == '-' && ft_isdigit(argv[i + 1]) == 0)
			return (0);
		if (argv[i] == '+' && ft_isdigit(argv[i + 1]) == 0)
			return (0);
		if (ft_isdigit(argv[i]) == 0)
		{
			if (argv[i] != '-' && argv[i] != '+')
				return (0);
		}
		i++;
	}
	return (1);
}
