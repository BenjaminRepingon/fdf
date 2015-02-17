/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2f_mul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 11:54:07 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/17 11:33:49 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

Vec2	*mul2f(Vec2 *vec1, float value)
{
	vec1->x *= value;
	vec1->y *= value;
	return (vec1);
}

Vec2	*mul2v(Vec2 *vec1, Vec2 *vec2)
{
	vec1->x *= vec2->x;
	vec1->y *= vec2->y;
	return (vec1);
}
