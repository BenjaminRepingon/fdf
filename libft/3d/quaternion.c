/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quaternion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 13:09:33 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/17 11:36:11 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

Quat	*new_quaternion4f(float x, float y, float z, float w)
{
	Quat	*q;

	if ((q = (Quat *)ft_memalloc(sizeof(Quat))) == NULL)
		return (NULL);
	q->x = x;
	q->y = y;
	q->z = z;
	q->w = w;
	return (q);
}

Quat	*new_quaternion4vf(Vec3 *axis, float angle)
{
	Quat			*q;
	float			sin_half_angle;
	float			cos_half_angle;

	if ((q = (Quat *)ft_memalloc(sizeof(Quat))) == NULL)
		return (NULL);
	sin_half_angle = (float)sin(to_radians(angle) / 2);
	cos_half_angle = (float)cos(to_radians(angle) / 2);
	q->x = axis->x * sin_half_angle;
	q->y = axis->y * sin_half_angle;
	q->z = axis->z * sin_half_angle;
	q->w = cos_half_angle;
	return (q);
}

float	length4(Quat *q)
{
	return ((float)sqrt(q->x * q->x + q->y * q->y + q->z * q->z + q->w * q->w));
}

Quat	*normalized4(Quat *q)
{
	float	l;

	l = length4(q);
	q->x /= l;
	q->y /= l;
	q->z /= l;
	q->w /= l;
	return (q);
}

Quat	*conjugate4(Quat *q)
{
	q->x = -q->x;
	q->y = -q->y;
	q->z = -q->z;
	return (q);
}
