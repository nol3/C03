/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:03:28 by acardena          #+#    #+#             */
/*   Updated: 2022/02/25 13:17:03 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	x;

	x = 0;
	while (s1[x] != '\0' || s2[x] != '\0')
	{
		if (s1[x] < s2[x])
			return (-1);
		if (s1[x] > s2[x])
			return (1);
		x++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	int	y;

	y = ft_strcmp("po", "pep");
	printf("%d\n", strcmp("po", "pep"));
	printf("%d \n", y);
	return (0);
}*/
