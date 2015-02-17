/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2f_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 11:52:40 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/17 11:33:47 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

Vec2	*add2f(Vec2 *vec1, float value)
{
	vec1->x += value;
	vec1->y += value;
	return (vec1);
}

Vec2	*add2v(Vec2 *vec1, Vec2 *vec2)
{
	vec1->x += vec2->x;
	vec1->y += vec2->y;
	return (vec1);
}
