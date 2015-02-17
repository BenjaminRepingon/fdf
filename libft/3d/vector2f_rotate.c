/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2f_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 11:56:13 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/17 11:33:51 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

Vec2	*rotate2(Vec2 *vec, float angle)
{
	float		rad;
	float		c;
	float		s;

	rad = to_radians(angle);
	c = cos(rad);
	s = sin(rad);
	vec->x = vec->x * c - vec->y * s;
	vec->y = vec->x * s + vec->y * c;
	return (vec);
}
