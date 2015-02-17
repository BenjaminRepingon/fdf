/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3f_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/24 16:19:46 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/17 11:34:03 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

Vec3	*rotate3(Vec3 *vec, Vec3 *axis, float angle)
{
	float		sin_angle;
	float		cos_angle;

	sin_angle = (float)sin(-angle);
	cos_angle = (float)cos(-angle);
	vec = cross3(vec, mul3f(axis, sin_angle));
	vec = add3v(vec, mul3f(vec, cos_angle));
	vec = add3v(vec, mul3f(vec, dot3(vec, mul3f(axis, 1 - cos_angle))));
	return (vec);
}

Vec3	*rotate3q(Vec3 *vec, Quat *rotation)
{
	Quat	*conjugate;
	Quat	*w;

	conjugate = conjugate4(rotation);
	w = mul4q(mul4v(rotation, vec), conjugate);
	vec->x = w->x;
	vec->y = w->y;
	vec->z = w->z;
	ft_memdel((void **)&conjugate);
	ft_memdel((void **)&w);
	return (vec);
}
