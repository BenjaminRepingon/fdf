/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3f_sub.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 11:29:27 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/17 11:34:04 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

Vec3	*sub3f(Vec3 *vec1, float value)
{
	vec1->x -= value;
	vec1->y -= value;
	vec1->z -= value;
	return (vec1);
}

Vec3	*sub3v(Vec3 *vec1, Vec3 *vec2)
{
	vec1->x -= vec2->x;
	vec1->y -= vec2->y;
	vec1->z -= vec2->z;
	return (vec1);
}

Vec3	*inv3(Vec3 *vec)
{
	vec->x = -vec->x;
	vec->y = -vec->y;
	vec->z = -vec->z;
	return (vec);
}
