/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 20:03:18 by gaguirre          #+#    #+#             */
/*   Updated: 2017/06/08 20:55:30 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int i;
	char *result;

	i = 0;
	while (s1[i])
	{
		i++;
	}
	result = (char*)malloc((i + 1) * sizeof(char));
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}

	result[i] = '\0';
	return(result);
}
