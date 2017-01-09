/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <mulzega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 18:07:54 by mulzega           #+#    #+#             */
/*   Updated: 2015/10/23 15:44:48 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int h;

	h = hour;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if ((h > 10 && h < 12) || h < 0)
		printf("%d.00 A.M. AND %d.00 P.M.\n", h, h + 1);
	else if (h < 22 || (h > 12 && h < 23))
		printf("%d.00 P.M. AND %d.00 P.M.\n", h, h + 1);
	else if (h == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	else if (h == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (h == 24)
		printf("12.00 A.M. AND 1.00 A.M.\n");
}
