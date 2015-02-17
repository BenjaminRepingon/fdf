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

static double	getTime(void);

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
	w->start_frame = 0;
	w->dt = 1.0 / w->fps;
	w->render = NULL;
	w->update = NULL;
	mlx_loop_hook(w->mlx, &loop_hook, w);
	mlx_loop(w->mlx);
	return (w);
}

static void		swap_buffer(Window *w)
{
	(void)w;
}

void			set_render(Window *w, void (*render)(Window *w, double dt))
{
	w->render = render;
}

void			set_update(Window *w, void (*update)(double dt))
{
	w->update = update;
}

/*TODO: move it in time "object"*/
static double	getTime(void)
{
	struct timeval		tv;

	gettimeofday(&tv, NULL);
	return (tv.tv_sec + (double)tv.tv_usec / MICRO);
}

int				loop_hook(Window *w)
{
	unsigned int	sleep;

	if (w->update != NULL)
		w->update( w->dt );
	if (w->render != NULL)
		w->render( w, w->dt );
	swap_buffer(w);
	w->end_frame = getTime();
	w->dt = (w->end_frame - w->start_frame);
	w->start_frame = w->end_frame;
	sleep = (MICRO / w->fps) - ( 1.0 / w->dt );
	/*ft_putnbr_base(1.0 / w->dt, DECIMAL);
	ft_putchar('\n');*/
	usleep(sleep);
	return (0);
}
