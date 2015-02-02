/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 12:00:25 by amorfan           #+#    #+#             */
/*   Updated: 2013/11/27 17:21:20 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	size_t	len;

	a = (char)c;
	len = ft_strlen(s);
	while (s[len] != a && s[len] != s[0])
		len--;
	if (s[len] == c)
	{
		s = s + len;
		return ((char *)s);
	}
	return (NULL);
}
