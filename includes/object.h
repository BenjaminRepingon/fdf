/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 13:11:02 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/18 13:37:17 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECT_H
# define OBJECT_H
# include "core_engine.h"

# define OBJECT		t_object

typedef struct		s_object
{
	int				(*update)(CORE_ENGINE *c, double dt);
	int				(*render)(CORE_ENGINE *c, double dt);
}					t_object;

OBJECT				*new_object(void);

#endif
