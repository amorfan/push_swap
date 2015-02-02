/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 11:12:52 by amorfan           #+#    #+#             */
/*   Updated: 2015/01/26 15:15:27 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	const char	*src;
	char		*dest;

	dest = s1;
	src = s2;
	while (n > 0)
	{
		*dest = *src;
		if (*src == c)
		{
			dest++;
			return ((void *)dest);
		}
		src++;
		dest++;
		n--;
	}
	return (NULL);
}
