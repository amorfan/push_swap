/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 11:17:38 by amorfan           #+#    #+#             */
/*   Updated: 2013/12/04 17:21:02 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (i < n && *s1 != '\0')
	{
		if ((i + ft_strlen(s2)) > n)
			return (NULL);
		if (ft_strncmp(s1, s2, ft_strlen(s2)) == 0)
			return ((char *)s1);
		i++;
		s1++;
	}
	return (NULL);
}
