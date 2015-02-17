/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:41:38 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/17 17:16:57 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_H
# define WINDOW_H
# include <sys/time.h>
# include <mlx.h>
# include <libft.h>
# include "image.h"

# define MICRO		(1000000.0)
# define Window		t_window

typedef struct s_window		t_window;
struct				s_window
{
	void			*mlx;
	void			*win;
	int				width;
	int				height;
	char			*title;
	int				fps;
	Image			*color_buf;
	Image			*depth_buf;
	double			start_frame;
	double			end_frame;
	double			dt;
	void			(*update)(double dt);
	void			(*render)(Window *w, double dt);
};

Window				*new_window(int width, int height, char *title, int fps);
int					loop_hook(Window *w);
void				set_render(Window *w, void (*render)(Window *w, double dt));
void				set_update(Window *w, void (*update)(double dt));

#endif
