/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2f_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 11:52:40 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/18 10:38:10 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

VEC2	*add2f(VEC2 *vec1, float value)
{
	vec1->x += value;
	vec1->y += value;
	return (vec1);
}

VEC2	*add2v(VEC2 *vec1, VEC2 *vec2)
{
	vec1->x += vec2->x;
	vec1->y += vec2->y;
	return (vec1);
}
