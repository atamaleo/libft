/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viniferr <viniferr@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:51:08 by viniferr          #+#    #+#             */
/*   Updated: 2023/11/01 21:26:19 by viniferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	splitter_count(char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if(s[i] == c)
			j++;
		i++;
	}
	return (j);
}
char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**arr;


	i = 0;
	count = splitter_count(s, c);
	arr = (char **)malloc(sizeof(char **) * ft_strlen(s) - count);

}