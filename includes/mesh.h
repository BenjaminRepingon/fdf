/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mesh.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 10:48:08 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/18 11:49:57 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MESH_H
# define MESH_H
# include <libft.h>

# define MESH		t_mesh

typedef struct		s_mesh
{
	t_list			*points;
}					t_mesh;

MESH				*new_mesh(void);
int					load_file_fdf(MESH *m, char const *file_name);

#endif
