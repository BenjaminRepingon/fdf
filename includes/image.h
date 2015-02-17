/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 14:52:31 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/17 16:37:43 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_IMAGE_H
# define MLX_IMAGE_H
# include <mlx.h>
# include <libft.h>

# define Image		t_img

typedef struct		s_img
{
	void			*img;
	char			*data;
	int				endian;
	int				sizeline;
	int				bpp;
}					t_img;

Image				*new_image(void *mlx, int width, int height);

#endif
