/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 11:55:33 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/17 17:17:59 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		render(Window *w, double dt)
{
	(void)w;
	(void)dt;
}

int		main(int argc, char const *argv[])
{
	Window		*window;

	(void)argc;
	(void)argv;
	window = new_window(850, 550, "Test", 60);
	set_render(window, &render);
	return (0);
}
