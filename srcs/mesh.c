/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mesh.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 10:47:58 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/18 12:04:54 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "mesh.h"

MESH				*new_mesh(void)
{
	MESH	*m;

	if ((m = (MESH *)ft_memalloc(sizeof(MESH))) == NULL)
		return (NULL);
	m->points = new_list();
	return (m);
}
#include <stdio.h>
int					load_file_fdf(MESH *m, char const *file_name)
{
	int		fd;
	char	*ext;
	char	*line;
	char	**coords;
	VEC2	v;

	ext = ft_strrchr(file_name, '.');
	if (ft_strcmp(ext, ".fdf"))
		return (error("Ivalide file extension"));
	if ((fd = open(file_name, O_RDONLY)) == -1)
		return (error("Open error"));
	v.y = 0;
	while(get_next_line(fd, &line) != 0)
	{
		v.x = 0;
		coords = ft_strsplit(line, ' ');
		while (coords[(int)v.x] != NULL)
		{
			add_elem(m->points, new_vertex3f(v.x, coords[(int)v.x][0], v.y));
			v.x++;
		}
		free(line);
		v.y++;
	}
	return (TRUE);
}
