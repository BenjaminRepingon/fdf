/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3f.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/24 12:24:50 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/17 11:36:34 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

Vec3	*new_vector3f(float x, float y, float z)
{
	Vec3	*vec;

	if ((vec = (Vec3 *)ft_memalloc(sizeof(Vec3))) == NULL)
		return (NULL);
	vec->x = x;
	vec->y = y;
	vec->z = z;
	return (vec);
}

float	length3(Vec3 *vec)
{
	return ((float)sqrt(vec->x * vec->x + vec->y * vec->y + vec->z * vec->z));
}

float	dot3(Vec3 *vec1, Vec3 *vec2)
{
	return (vec1->x * vec2->x + vec1->y * vec2->y + vec1->z * vec2->z);
}

Vec3	*cross3(Vec3 *vec1, Vec3 *vec2)
{
	float	x_;
	float	y_;
	float	z_;

	x_ = vec1->y * vec2->z - vec1->z * vec2->y;
	y_ = vec1->z * vec2->x - vec1->x * vec2->z;
	z_ = vec1->x * vec2->y - vec1->y * vec2->x;
	vec1->x = x_;
	vec1->y = y_;
	vec1->z = z_;
	return (vec1);
}

Vec3	*normalized3(Vec3 *vec)
{
	float	length;

	length = length3(vec);
	vec->x /= length;
	vec->y /= length;
	vec->z /= length;
	return (vec);
}
