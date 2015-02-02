/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 11:11:46 by amorfan           #+#    #+#             */
/*   Updated: 2013/11/25 21:22:25 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	str = str + i;
	i = 0;
	if (str[i] == '-')
	{
		i++;
		if (!(str[i] <= '9' && str[i] >= '0'))
			return (0);
	}
	if (str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		j = (j * 10) + (str[i] - 48);
		i++;
	}
	if (str[0] == '-')
		return (-j);
	return (j);
}
