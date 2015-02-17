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

# define MICRO		(1000000)
# define Window		t_window

typedef struct		s_window
{
	void			*mlx;
	void			*win;
	int				width;
	int				height;
	char			*title;
	int				fps;
	Image			*color_buf;
	Image			*depth_buf;
}					t_window;

Window				*new_window(int width, int height, char *title, int fps);
void				swap_buffer(Window *w);
int					loop_hook(Window *w);

#endif
