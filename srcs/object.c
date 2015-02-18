/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 13:10:54 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/18 13:16:14 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "object.h"

OBJECT				*new_object(void)
{
	OBJECT	*o;

	if ((o = (OBJECT *)ft_memalloc(sizeof(OBJECT))) == NULL)
		return (NULL);
	o->update = NULL;
	o->render = NULL;
	return (o);
}
