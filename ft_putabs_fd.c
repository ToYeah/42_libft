/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putabs_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totaisei <totaisei@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 16:51:16 by totaisei          #+#    #+#             */
/*   Updated: 2020/10/20 01:18:42 by totaisei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putabs_fd(int n, int fd)
{
	if (0 == n)
		write(fd, "0", 1);
	else if (-2147483648 == n)
		write(fd, "2147483648", 10);
	else
	{
		if (n < 0)
			n *= -1;
		if (n / 10 != 0)
		{
			ft_putabs_fd(n / 10, fd);
		}
		write(fd, &"0123456789"[n % 10], 1);
	}
}
