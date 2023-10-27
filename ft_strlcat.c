/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viniferr <viniferr@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:59:15 by viniferr          #+#    #+#             */
/*   Updated: 2023/10/27 07:11:02 by viniferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (destlen);
	while (size - 1 > 0)
	{
		dest[destlen + i] = *src;
		i++;
		src++;
		size--;
	}
	dest[i] = '\0';
	return (srclen + destlen);
}
