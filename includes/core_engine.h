/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_engine.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 12:26:14 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/18 13:56:23 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_ENGINE_H
# define CORE_ENGINE_H
# include <sys/time.h>
# include "window.h"

# define CORE_ENGINE	t_core_engine

typedef struct		s_core_engine
{
	WINDOW			*window;
	t_list			*objects;
	int				fps;
	double			start_frame;
	double			end_frame;
	double			dt;
	// void			(*update)(CORE_ENGINE *c, double dt);
	// void			(*render)(CORE_ENGINE *c, double dt);
}					t_core_engine;

# include "object.h"
struct		s_object;

CORE_ENGINE			*new_core_engine(int fps);
void				create_window(CORE_ENGINE *c, int w, int h, char *title);
void				add_object(struct s_object *o);

#endif
