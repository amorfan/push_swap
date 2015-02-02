/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 11:13:24 by amorfan           #+#    #+#             */
/*   Updated: 2013/12/01 18:35:41 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s1;

	s1 = s;
	while (n > 0)
	{
		if (*s1 == (unsigned char)c)
		{
			return ((void *)s1);
		}
		s1++;
		n--;
	}
	return (NULL);
}
