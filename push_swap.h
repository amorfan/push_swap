/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 19:51:12 by amorfan           #+#    #+#             */
/*   Updated: 2015/01/28 17:28:03 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "libft/includes/libft.h"

typedef struct		s_lst
{
	int				value;
	struct s_lst	*prev;
	struct s_lst	*next;
}					t_lst;

typedef struct		s_flag
{
	int				a;
	int				b;
	int				ok;
}					t_flag;

int		ft_ascending(t_lst *l_a);
int		ft_descending(t_lst *l_b);
void	ft_init_flag(t_flag *flag);
void	ft_sort(t_lst *l_a);
void	ft_sort_b(t_lst **l_b, t_flag *flag);
t_lst	*ft_last_element(t_lst *l_tmp);
t_lst 	*ft_insert_element_end(t_lst *list, int value);
t_lst 	*ft_insert_element_first(t_lst *list, int value);
t_lst	*ft_rotate_a(t_lst *l_a, t_lst *l_b);
t_lst	*ft_rotate_b(t_lst *l_b);
t_lst	*ft_swap_a(t_lst *l_a, t_lst *l_b);
t_lst	*ft_swap_b(t_lst *l_b);
void	ft_push_a(t_lst **l_a, t_lst **l_b, t_flag *flag);
void 	ft_push_b(t_lst **l_a, t_lst **l_b, t_flag *flag);
void	ft_print_all(t_lst *l_a, t_lst *l_b);
int		ft_check_param(char *argv);

#endif
