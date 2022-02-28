/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:01:58 by acardena          #+#    #+#             */
/*   Updated: 2022/02/28 16:00:20 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	alma_d;
	unsigned int	alma_s;

	x = ft_strlen(dest);
	y = 0;
	alma_d = ft_strlen(dest);
	alma_s = ft_strlen(src);
	if (size < 1)
		return (alma_s + size);
	while (src[y] && x < size -1)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	if (size < alma_d)
	{
		return (alma_s + size);
	}
	else
		return (alma_d + alma_s);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	y[250] = "hola";
	char	x[250] = "mundo";

	printf("%lu \n", strlcat(x,y, 3));
	printf("%u \n", ft_strlcat(x,y, 3));
}*/
