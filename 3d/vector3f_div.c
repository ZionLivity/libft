/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3f_div.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 11:30:46 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/17 11:33:56 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

Vec3	*div3f(Vec3 *vec1, float value)
{
	vec1->x /= value;
	vec1->y /= value;
	vec1->z /= value;
	return (vec1);
}

Vec3	*div3v(Vec3 *vec1, Vec3 *vec2)
{
	vec1->x /= vec2->x;
	vec1->y /= vec2->y;
	vec1->z /= vec2->z;
	return (vec1);
}
