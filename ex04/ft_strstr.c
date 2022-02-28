/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:41:57 by acardena          #+#    #+#             */
/*   Updated: 2022/02/28 15:50:12 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[x] != '\0')
	{
		y = 0;
		while (str[x + y] == to_find[y])
		{
			y++;
		}
		if (to_find[y] == '\0')
		{
			return (&str[x]);
		}
		x++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	y[250] = "Era";
	char	x[250] = "Erasé una vez en un lugar de la mancha";

	printf("%s \n", strstr(x,y));
	printf("%s \n", ft_strstr(x,y));
	return (0);
}*/
