/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_engine.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 12:26:02 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/18 16:45:27 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core_engine.h"

static double	get_time(void);

CORE_ENGINE		*new_core_engine(int fps)
{
	CORE_ENGINE	*c;

	if ((c = (CORE_ENGINE *)ft_memalloc(sizeof(CORE_ENGINE))) == NULL)
		return (NULL);
	c->window = NULL;
	c->objects = new_list();
	c->fps = fps;
	c->start_frame = get_time();
	c->dt = 1.0 / c->fps;
	return (c);
}

static void		update(CORE_ENGINE *c, double dt)
{
	(void)c;
	(void)dt;
}

static void		render(CORE_ENGINE *c, double dt)
{
	(void)c;
	(void)dt;
	put_vertex(c->window, new_vertexpc(new_vector3f(5, 5, 5), new_vector3f(255, 255, 0)));
}

static double	get_time(void)
{
	struct timeval		tv;

	gettimeofday(&tv, NULL);
	return (tv.tv_sec + (double)tv.tv_usec / SECOND);
}

static int		loop_hook(CORE_ENGINE *c)
{
	int	sleep;

	c->start_frame = get_time();
	clear_window(c->window);
	update( c, c->dt );
	render( c, c->dt );
	swap_buffer(c->window);
	c->end_frame = get_time();
	c->dt = (c->end_frame - c->start_frame);
	sleep = (SECOND / c->fps) - (c->dt * SECOND);
	if (sleep > 0)
		usleep(sleep);
	// printf("FPS: %f\n", 1.0 / (get_time() - c->start_frame));
	return (0);
}

void			create_window(CORE_ENGINE *c, int w, int h, char *title)
{
	c->window = new_window(w, h, title);
	mlx_loop_hook(c->window->mlx, &loop_hook, c);
	mlx_loop(c->window->mlx);
}
