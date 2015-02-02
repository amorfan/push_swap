/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 12:15:56 by amorfan           #+#    #+#             */
/*   Updated: 2013/11/29 15:05:09 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*s2;
	size_t		size;

	size = ft_strlen(s);
	s2 = (char *)malloc(sizeof(char) * size);
	ft_bzero((void *)s2, size);
	size = 0;
	while (s[size] != '\0')
	{
		s2[size] = f(s[size]);
		size++;
	}
	return (s2);
}
