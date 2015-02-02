/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 15:14:27 by amorfan           #+#    #+#             */
/*   Updated: 2013/11/29 17:58:17 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sample;
	int		i;

	i = 0;
	if ((sample = ft_strnew(len + 1)) == NULL)
		return (NULL);
	while (len > 0 && s[start] != '\0')
	{
		sample[i] = s[start];
		i++;
		start++;
		len--;
	}
	return (sample);
}
