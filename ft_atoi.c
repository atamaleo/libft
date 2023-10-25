/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viniferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:14:31 by viniferr          #+#    #+#             */
/*   Updated: 2023/10/25 16:27:47 by viniferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	if (s[i] == '-')
		sign *= -1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while(s[i] >= '0' && s[i] <= '9')
	{
		res = (s[i] - 48) + (res * 10);
		i++;
	}
	return (res * sign);
}
#include <stdio.h>
int main(void)
{
	char *c = "    -1235asbc";

	
	printf("%d",ft_atoi(c));
}
