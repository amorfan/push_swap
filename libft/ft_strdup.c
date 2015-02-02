/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 11:14:30 by amorfan           #+#    #+#             */
/*   Updated: 2013/12/04 17:19:45 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	n;
	char	*s2;

	n = ft_strlen(s1) + 1;
	if ((s2 = malloc(n)) == NULL)
		return (NULL);
	ft_memcpy(s2, s1, n);
	return (s2);
}
