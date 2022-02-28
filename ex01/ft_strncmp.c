/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:31:33 by acardena          #+#    #+#             */
/*   Updated: 2022/02/28 19:12:37 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while ((s1[x] != '\0' || s2[x] != '\0') && x < n)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	if (x != n)
	{
		return (s1[x] - s2[x]);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	x[250] = "Alejandro";
	char	y[250] = "cardenas";

	printf("%d\n", strncmp(x,y, 2));
	printf("%d \n", ft_strncmp(x,y, 2));
	return (0);
}*/
