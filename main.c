/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 19:59:12 by amorfan           #+#    #+#             */
/*   Updated: 2015/01/28 17:23:32 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			main(int argc, char **argv)
{
	t_lst	*l_a;
	int		i;

	l_a = NULL;
	i = 1;
	if (argc == 2 && ft_check_param(argv[i]) == 0)
		ft_putstr("error : wrong argument\n");
	if (argc > 2)
	{
		while (argv[i])
		{
			if (ft_check_param(argv[i]) == 0)
			{
				ft_putstr("error : wrong argument\n");
				return (0);
			}
			l_a = ft_insert_element_end(l_a, ft_atoi(argv[i]));
			i++;
		}
		ft_sort(l_a);
	}
	return (0);
}

int			ft_check_param(char *argv)
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
