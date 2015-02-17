/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2f.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/24 12:24:33 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/17 11:36:24 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

Vec2	*new_vector2f(float x, float y)
{
	Vec2 *vec;

	if ((vec = (Vec2 *)ft_memalloc(sizeof(Vec2))) == NULL)
		return (NULL);
	vec->x = x;
	vec->y = y;
	return (vec);
}

float	length2(Vec2 *vec)
{
	return ((float)sqrt(vec->x * vec->x + vec->y * vec->y));
}

float	dot2(Vec2 *vec1, Vec2 *vec2)
{
	return (vec1->x * vec2->x + vec1->y * vec2->y);
}

float	cross2(Vec2 *vec1, Vec2 *vec2)
{
	return (vec1->x * vec2->y - vec1->y * vec2->x);
}

Vec2	*normalized2(Vec2 *vec)
{
	float	length;

	length = length2(vec);
	vec->x /= length;
	vec->y /= length;
	return (vec);
}
