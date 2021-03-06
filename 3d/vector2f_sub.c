/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2f_sub.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 11:53:30 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/18 10:38:19 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

VEC2	*sub2f(VEC2 *vec1, float value)
{
	vec1->x -= value;
	vec1->y -= value;
	return (vec1);
}

VEC2	*sub2v(VEC2 *vec1, VEC2 *vec2)
{
	vec1->x -= vec2->x;
	vec1->y -= vec2->y;
	return (vec1);
}

VEC2	*inv2(VEC2 *vec)
{
	vec->x = -vec->x;
	vec->y = -vec->y;
	return (vec);
}
