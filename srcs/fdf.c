/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 11:55:33 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/18 16:46:31 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "mesh.h"
#include "core_engine.h"

#include <stdio.h>

int			main(int argc, char const *argv[])
{
	CORE_ENGINE		*core;
	MESH			*mesh;

	if (argc != 2)
		return (error("usage: ./fdf <map>"));
	mesh = new_mesh();

	if (load_file_fdf(mesh, argv[1]) == FALSE)
		return (-1);

	core = new_core_engine(60);

	create_window(core, 65, 65, "Test");

	return (0);
}
