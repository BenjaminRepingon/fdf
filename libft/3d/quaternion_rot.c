/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quaternion_rot.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/23 17:20:02 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/18 10:37:57 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

MAT4		*to_rotation_matrix(QUAT *q)
{
	MAT4	*mat;
	VEC3	*forward;
	VEC3	*up;
	VEC3	*right;
	float	xyz[3];

	xyz[0] = 2.0f * (q->x * q->z - q->w * q->y);
	xyz[1] = 2.0f * (q->y * q->z + q->w * q->x);
	xyz[2] = 1.0f - 2.0f * (q->x * q->x + q->y * q->y);
	forward = new_vector3f(xyz[0], xyz[1], xyz[2]);
	xyz[0] = 2.0f * (q->x * q->y + q->w * q->z);
	xyz[1] = 1.0f - 2.0f * (q->x * q->x + q->z * q->z);
	xyz[2] = 2.0f * (q->y * q->z - q->w * q->x);
	up = new_vector3f(xyz[0], xyz[1], xyz[2]);
	xyz[0] = 1.0f - 2.0f * (q->y * q->y + q->z * q->z);
	xyz[1] = 2.0f * (q->x * q->y - q->w * q->z);
	xyz[2] = 2.0f * (q->x * q->z + q->w * q->y);
	right = new_vector3f(xyz[0], xyz[1], xyz[2]);
	mat = init_rotation3v(forward, up, right);
	ft_memdel((void **)&forward);
	ft_memdel((void **)&up);
	ft_memdel((void **)&mat);
	return (mat);
}
