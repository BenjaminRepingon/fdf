/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3f_pow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 14:52:58 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/17 11:34:02 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

Vec3	*pow3f(Vec3 *vec1, float value)
{
	vec1->x = pow(vec1->x, value);
	vec1->y = pow(vec1->y, value);
	vec1->z = pow(vec1->z, value);
	return (vec1);
}

Vec3	*rt3(Vec3 *vec1)
{
	return (mul3v(vec1, vec1));
}
