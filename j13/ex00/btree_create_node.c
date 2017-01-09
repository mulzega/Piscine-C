/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <mulzega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 14:08:12 by mulzega           #+#    #+#             */
/*   Updated: 2016/05/10 14:12:32 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*leaf;

	if (!(leaf = (t_btree *)malloc(sizeof(t_btree))))
		return (NULL);
	leaf->left = NULL;
	leaf->right = NULL;
	leaf->item = item;
	return (leaf);
}
