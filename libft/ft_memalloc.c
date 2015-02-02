/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 11:16:12 by amorfan           #+#    #+#             */
/*   Updated: 2013/11/29 13:33:33 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	if ((ptr = (char *)malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	ft_bzero(ptr, size);
	return ((void *)ptr);
}
