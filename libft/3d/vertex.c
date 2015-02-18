/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vertex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 10:26:16 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/18 10:38:23 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

VERT		*new_vertex3f(float x, float y, float z)
{
	VERT	*vertex;

	if ((vertex = (VERT *)ft_memalloc(sizeof(VERT))) == NULL)
		return (NULL);
	vertex->pos = new_vector3f(x, y, z);
	vertex->color = new_vector3f(1, 1, 1);
	return (vertex);
}

VERT		*new_vertexp(VEC3 *pos)
{
	VERT	*vertex;

	if ((vertex = (VERT *)ft_memalloc(sizeof(VERT))) == NULL)
		return (NULL);
	vertex->pos = pos;
	vertex->color = new_vector3f(1, 1, 1);
	return (vertex);
}

VERT		*new_vertexpc(VEC3 *pos, VEC3 *color)
{
	VERT	*vertex;

	if ((vertex = (VERT *)ft_memalloc(sizeof(VERT))) == NULL)
		return (NULL);
	vertex->pos = pos;
	vertex->color = color;
	return (vertex);
}
