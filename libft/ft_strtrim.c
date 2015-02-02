/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 20:35:53 by amorfan           #+#    #+#             */
/*   Updated: 2013/12/01 16:09:01 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	if ((str = ft_strnew(len + 1)) == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	while (*s != '\0')
	{
		str[i] = *s;
		s++;
		i++;
	}
	s--;
	i--;
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		str[i] = '\0';
		s--;
		i--;
	}
	return (str);
}
