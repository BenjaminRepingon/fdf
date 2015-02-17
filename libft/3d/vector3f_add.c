/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3f_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/24 16:29:18 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/17 11:33:55 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

Vec3	*add3f(Vec3 *vec1, float value)
{
	vec1->x += value;
	vec1->y += value;
	vec1->z += value;
	return (vec1);
}

Vec3	*add3v(Vec3 *vec1, Vec3 *vec2)
{
	vec1->x += vec2->x;
	vec1->y += vec2->y;
	vec1->z += vec2->z;
	return (vec1);
}
