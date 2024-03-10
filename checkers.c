/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <mtelek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 23:13:27 by mtelek            #+#    #+#             */
/*   Updated: 2024/03/05 14:12:29 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <stdlib.h>

void	sending_error(void)
{
	ft_putstr_fd(ERROR_MESSAGE, STDERR_FILENO);
	exit(EXIT_FAILURE);
}

void	check_mandelbrot(int argc, char **argv)
{
	if (argc != 2)
		sending_error();
	else if (!ft_strcmp(argv[1], "mandelbrot"))
		sending_error();
}

void	check_julia(int argc, char **argv)
{
	if (argc != 4)
		sending_error();
	else if (!ft_strcmp(argv[1], "julia"))
		sending_error();
	else if (!is_numeric(argv[2]) || !is_numeric(argv[3]))
		sending_error();
}
