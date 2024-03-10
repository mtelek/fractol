/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_combinations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <mtelek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 19:20:22 by mtelek            #+#    #+#             */
/*   Updated: 2024/02/09 19:23:20 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

double	combination_1(int x)
{
	t_numbers	numbers1;

	numbers1.unscaled_num = x;
	numbers1.new_min = -2;
	numbers1.new_max = +2;
	numbers1.old_min = 0;
	numbers1.old_max = WIDTH;
	return (map(numbers1));
}

double	combination_2(int y)
{
	t_numbers	numbers2;

	numbers2.unscaled_num = y;
	numbers2.new_min = +2;
	numbers2.new_max = -2;
	numbers2.old_min = 0;
	numbers2.old_max = HEIGHT;
	return (map(numbers2));
}

double	combination_3(int i, t_fractal *fractal)
{
	t_numbers	numbers3;

	numbers3.unscaled_num = i;
	numbers3.new_min = BROWN_3;
	numbers3.new_max = BLACK;
	numbers3.old_min = 0;
	numbers3.old_max = fractal->iterations_definiton;
	return (map(numbers3));
}
