/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 14:41:02 by amorfan           #+#    #+#             */
/*   Updated: 2013/11/29 15:09:15 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	i;
	size_t			size;

	size = ft_strlen(s);
	s2 = (char *)malloc(sizeof(char) * size);
	i = 0;
	ft_bzero((void *)s2, size);
	while (s[i] != '\0')
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	return (s2);
}
