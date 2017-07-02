/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gaguirre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 13:35:17 by gaguirre          #+#    #+#             */
/*   Updated: 2017/06/25 16:16:40 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr(int n)
{
	long count;

	count = n;
	if (count == -2147483648)
		ft_putstr("-2147483648");
	if (count < 0)
	{
		ft_putchar('-');
		count *= -1;
	}
	if (count >= 10)
	{
		ft_putnbr(count / 10);
		ft_putchar(count % 10 + '0');
	}
	else
		ft_putchar(count + '0');
}
