/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quaternion_mul.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 16:47:31 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/18 10:37:55 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

QUAT	*mul4q(QUAT *q, QUAT *r)
{
	float	w_;
	float	x_;
	float	y_;
	float	z_;

	w_ = q->w * r->w - q->x * r->x - q->y * r->y - q->z * r->z;
	x_ = q->x * r->w + q->w * r->x + q->y * r->z - q->z * r->y;
	y_ = q->y * r->w + q->w * r->y + q->z * r->x - q->x * r->z;
	z_ = q->z * r->w + q->w * r->z + q->x * r->y - q->y * r->x;
	q->w = w_;
	q->x = x_;
	q->y = y_;
	q->z = z_;
	return (q);
}

QUAT	*mul4v(QUAT *q, VEC3 *r)
{
	float	w_;
	float	x_;
	float	y_;
	float	z_;

	w_ = -q->x * r->x - q->y * r->y - q->z * r->z;
	x_ = q->w * r->x + q->y * r->z - q->z * r->y;
	y_ = q->w * r->y + q->z * r->x - q->x * r->z;
	z_ = q->w * r->z + q->x * r->y - q->y * r->x;
	q->w = w_;
	q->x = x_;
	q->y = y_;
	q->z = z_;
	return (q);
}
