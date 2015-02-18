/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2f_mul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 11:54:07 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/18 10:38:13 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

VEC2	*mul2f(VEC2 *vec1, float value)
{
	vec1->x *= value;
	vec1->y *= value;
	return (vec1);
}

VEC2	*mul2v(VEC2 *vec1, VEC2 *vec2)
{
	vec1->x *= vec2->x;
	vec1->y *= vec2->y;
	return (vec1);
}
