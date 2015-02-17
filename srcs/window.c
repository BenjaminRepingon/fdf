/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:41:26 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/17 17:32:37 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "window.h"

Window			*new_window(int width, int height, char *title, int fps)
{
	Window	*w;

	if ((w = (Window *)ft_memalloc(sizeof(Window))) == NULL)
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
	w->width = width;
	w->height = height;
	w->title = title;
	w->fps = fps;
	mlx_loop_hook(w->mlx, &loop_hook, w);
	mlx_loop(w->mlx);
	return (w);
}

void			swap_buffer(Window *w)
{
	(void)w;
}

static double	getTime(void)
{
	struct timeval		tv;

	gettimeofday(&tv, NULL);
	return (tv.tv_sec + (double)tv.tv_usec / MICRO);
}

# include <stdio.h>

int				loop_hook(Window *w)
{
	double	start_time;
	double	end_time;
	double	dt;

	start_time = getTime();

	usleep(1000);

	end_time = getTime();

	dt = (end_time - start_time);
	printf("dt:%lf\n", 1.0 / dt);

	usleep(((1.0 / w->fps) - dt) * MICRO);
	return (0);
}
