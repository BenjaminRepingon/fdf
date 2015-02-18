/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3f_div.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 11:30:46 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/18 10:38:02 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

VEC3	*div3f(VEC3 *vec1, float value)
{
	vec1->x /= value;
	vec1->y /= value;
	vec1->z /= value;
	return (vec1);
}

VEC3	*div3v(VEC3 *vec1, VEC3 *vec2)
{
	vec1->x /= vec2->x;
	vec1->y /= vec2->y;
	vec1->z /= vec2->z;
	return (vec1);
}
