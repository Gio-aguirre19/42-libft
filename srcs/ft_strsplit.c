/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 22:33:26 by gaguirre          #+#    #+#             */
/*   Updated: 2017/07/01 14:19:40 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int wd(const char *s, char c)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			i++;
		num++;
	}
	return (num);
}

static int ltrs(const char *s, char c)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (s[i] != c && s[i] !='\0')
	{
		i++;
		num++;
	}
	return (num);
}

char	**ft_strsplit(char const *s, char c)
{
	char **array;
	int i;
	int j;
	int k;

	k = -1;
	i = 0;
	if (!s || !(array = (char **)malloc
				((wd(s, c))*sizeof(*array))))
		return (NULL);
	while (++k < wd(s ,c))
	{
		j = 0;
		while (s[i] == c && s[i])
			i++;
		if (!(array[k] = ft_strnew(ltrs(&s[i], c))))
			array[k] = NULL;
		while (s[i] != c && s[i])
			array[k][j++] = (char)s[i++];
		if (array[k] == 0)
			return (0);
		array[k][j++] = '\0';
	}
	array[k] = 0;
	return (array);
}
