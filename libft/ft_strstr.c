/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 12:01:07 by amorfan           #+#    #+#             */
/*   Updated: 2013/11/26 00:22:10 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		test;
	size_t	size;

	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1 != '\0')
	{
		size = ft_strlen(s2);
		test = ft_strncmp(s1, s2, size);
		if (test == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
