/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viniferr <viniferr@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:51:08 by viniferr          #+#    #+#             */
/*   Updated: 2023/11/03 21:50:16 by viniferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_len (const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] != c)
			i++;
		else
			j++;
	}
	return (i);
}

char	*words (char const *s, char c)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	word = (char *)malloc(word_len(s + i, c)* sizeof(char));
	
}
char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**arr;


	i = 0;
	j = 0;
	k = 0;
	arr = (char **)malloc(ft_strlen(s) + 1);
	if (!arr)
		return (NULL);
	while (s[i])
	{
	}
	return (arr);
}
