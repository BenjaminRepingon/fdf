/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:21:39 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/18 10:39:11 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

BOOL			ft_islower(int c)
{
	return ((c >= 'a') && (c <= 'z'));
}

BOOL			ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

BOOL			ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
