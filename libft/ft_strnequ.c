/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 18:17:37 by amorfan           #+#    #+#             */
/*   Updated: 2015/01/26 19:21:24 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if ((((s1 == NULL) && (s2 == NULL))) || n == 0)
		return (1);
	else if ((*s1 == '\0') && (*s2 == '\0'))
		return (1);
	while ((*s1 == *s2) && (n > 0) && *s1 && *s2)
	{
		s1++;
		s2++;
		n--;
		if (n == 0)
			return (1);
	}
	if (*s1 == *s2)
		return (1);
	return (0);
}
