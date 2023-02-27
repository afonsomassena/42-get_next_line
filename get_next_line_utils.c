/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <massenaafonso1@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:42:49 by afgoncal          #+#    #+#             */
/*   Updated: 2023/02/27 15:53:28 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *str1, char *str2)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	newstr = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!newstr)
		return (0);
	while (str1 && str1[j])
	{
		newstr[j] = str1[j];
		j++;
	}
	free(str1);
	while (str2[i])
	{	
		newstr[j++] = str2[i];
		if (str2[i++] == '\n')
			break ;
	}
	newstr[j] = '\0';
	return (newstr);
}

int	buffercleaner(char *s1)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	n = 0;
	if (!s1)
		return (0);
	while (s1[i])
	{
		if (n)
			s1[j++] = s1[i];
		if (s1[i] == '\n')
			n = 1;
		s1[i++] = '\0';
	}
	return (n);
}

char	*ft_bezero(char *buffer, size_t len)
{
	size_t	i;

	i = 0;
	if (!buffer)
		return (0);
	while (i < len)
	{
		buffer[i] = '\0';
		i++;
	}
	return (buffer);
}
