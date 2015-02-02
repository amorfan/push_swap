/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 11:16:51 by amorfan           #+#    #+#             */
/*   Updated: 2013/12/01 19:00:07 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ret;

	i = ft_strlen(dst);
	if (i > size)
		ret = ft_strlen(src) + size;
	else
		ret = ft_strlen(dst) + ft_strlen(src);
	while (*src != '\0' && (i + 1) < size)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (ret);
}
