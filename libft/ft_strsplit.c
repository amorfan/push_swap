/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 19:56:01 by amorfan           #+#    #+#             */
/*   Updated: 2014/01/26 19:56:02 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_len_word(char const *s, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		j;
	int		len;
	int		word;

	j = -1;
	if (s == NULL)
		return (NULL);
	word = ft_count_word(s, c);
	if ((tab = (char **)malloc(sizeof(char *) * (word + 1))) == NULL)
		return (NULL);
	while (++j < word)
	{
		while (*s != '\0' && *s == c)
			s++;
		len = ft_len_word(s, c);
		if ((tab[j] = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
			return (NULL);
		tab[j] = ft_strndup(s, len);
		while (*s != '\0' && *s != c)
			s++;
	}
	tab[j] = '\0';
	return (tab);
}
