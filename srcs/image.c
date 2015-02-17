/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 14:52:10 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/17 16:37:48 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "image.h"

Image	*new_image(void *mlx, int width, int height)
{
	Image	*i;

	if ((i = (Image *)ft_memalloc(sizeof(Image))) == NULL)
		return (NULL);

	i->img = mlx_new_image(mlx, width, height);
	i->data = mlx_get_data_addr(i->img, &i->bpp, &i->sizeline, &i->endian);
	return (i);
}
