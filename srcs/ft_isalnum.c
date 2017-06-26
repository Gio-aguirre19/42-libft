/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 21:22:44 by gaguirre          #+#    #+#             */
/*   Updated: 2017/06/25 16:24:14 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int x)
{
	if ((x >= '0' && x <= '9')
			|| (x >= 'A' && x <= 'Z')
			|| (x >= 'a' && x <= 'z'))
		return (1);
	else
		return (0);
}
