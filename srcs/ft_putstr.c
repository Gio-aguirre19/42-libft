/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gaguirre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 13:32:54 by gaguirre          #+#    #+#             */
/*   Updated: 2017/06/25 13:33:20 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putstr(char const *s)
{
	if (s)
		write(1, s, ft_strlen(s));
}