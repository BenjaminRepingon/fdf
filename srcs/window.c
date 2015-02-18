/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:41:26 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/18 16:55:55 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "window.h"

WINDOW			*new_window(int width, int height, char *title)
{
	WINDOW	*w;

	if ((w = (WINDOW *)ft_memalloc(sizeof(WINDOW))) == NULL)
		return (NULL);
	if ((w->mlx = mlx_init()) == NULL)
	{
		error("mlx init error: \n");
		return (NULL);
	}
	if ((w->win = mlx_new_window(w->mlx, width, height, title)) == NULL)
	{
		error("window error: \n");
		return (NULL);
	}
	if ((w->color_buf = new_image(w->mlx, width, height)) == NULL)
	{
		error("bit buffer error: \n");
		return (NULL);
	}
	w->depth_buf = (float *)ft_memalloc(sizeof(float) * width * height);
	w->width = width;
	w->height = height;
	w->title = title;
	return (w);
}

void			swap_buffer(WINDOW *w)
{

	// int i = 0;
	// int j = 0;
	// while(i < w->height)
	// {
	// 	j = 0;
	// 	while(j < w->width)
	// 	{
	// 		ft_putnbr_base(w->color_buf->data[(int)(i * w->color_buf->sizeline + j * (w->color_buf->bpp / 8)) + 2], 10);
	// 	// ft_putchar('\t');
	// 		j++;
	// 	}
	// 	ft_putchar('\n');
	// 	i++;
	// }
	// ft_putchar('\n');
	mlx_put_image_to_window(w->mlx, w->win, w->color_buf->img, 0, 0);
}

void			clear_window(WINDOW *w)
{
	mlx_clear_window(w->mlx, w->win);
}

void			put_vertex(WINDOW *w, VERT *v)
{
	int		index;
	int		x;
	int		y;

	x = v->pos->x;
	y = w->height - v->pos->y;
	if (x < 0 || x > w->width)
		return ;
	if (y < 0 || y > w->height)
		return ;
	if (v->pos->z >= 0)
	{
		index = (y * w->color_buf->sizeline + x * (w->color_buf->bpp / 8));
		w->color_buf->data[index] = (char)v->color->z;
		w->color_buf->data[index + 1] = (char)v->color->y;
		w->color_buf->data[index + 2] = (char)v->color->x;
		ft_putnbr_base((char)v->color->x, 2);
	}
	w->depth_buf[y * w->width + x] = v->pos->z;
}
