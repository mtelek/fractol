/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <mtelek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 22:03:13 by mtelek            #+#    #+#             */
/*   Updated: 2024/03/05 14:09:21 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "minilibx-linux/mlx.h"
# include <X11/X.h>
# include <X11/keysym.h>
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define ERROR_MESSAGE "Please enter a valid input\n"

# define WIDTH 800
# define HEIGHT 800

# define BLACK 0x000000    // Black
# define WHITE 0xFFFFFF    // White
# define BROWN_1 0x8B4513  // Saddle Brown
# define BROWN_2 0xA52A2A  // Brown
# define BROWN_3 0xCD853F  // Peru
# define BROWN_4 0x8B7E66  // Rosy Brown
# define BROWN_5 0xD2691E  // Chocolate
# define BROWN_6 0xDEB887  // Burlywood
# define BROWN_7 0xF4A460  // Sandy Brown
# define BROWN_8 0xD2B48C  // Tan
# define BROWN_9 0xBC8F8F  // Dark Khaki
# define BROWN_10 0x6B8E23 // Olive Drab
# define RED 0xFF0000      // Red
# define WINE_RED 0x800020 // Wine Red

typedef struct s_complex
{
	double	x;
	double	y;
}			t_complex;

typedef struct s_numbers
{
	double	unscaled_num;
	double	new_min;
	double	new_max;
	double	old_min;
	double	old_max;
}			t_numbers;

typedef struct s_img
{
	void	*img_ptr;
	char	*pixels_ptr;
	int		bpp;
	int		endian;
	int		line_len;
}			t_img;

typedef struct s_fractal
{
	char	*name;
	void	*mlx_connection;
	void	*mlx_window;
	t_img	img;
	double	escape_value;
	int		iterations_definiton;
	double	shift_x;
	double	shift_y;
	double	zoom;
	double	julia_x;
	double	julia_y;
}			t_fractal;

void		fractal_init(t_fractal *fractal);
double		map(t_numbers numbers);
t_complex	sum_complex(t_complex z1, t_complex z2);
t_complex	square_complex(t_complex z);
void		fractal_render(t_fractal *fractal);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
int			key_handler(int keysym, t_fractal *fractal);
int			close_handler(t_fractal *fractal);
int			mouse_handler(int button, int x, int y, t_fractal *fractal);
double		atodbl(char *s);
int			julia_track(int x, int y, t_fractal *fractal);
double		combination_1(int x);
double		combination_2(int y);
double		combination_3(int i, t_fractal *fractal);
void		check_mandelbrot(int argc, char **argv);
void		check_julia(int argc, char **argv);
void		sending_error(void);
int			is_numeric(const char *str);
int			ft_strcmp(char *s1, char *s2);

#endif
