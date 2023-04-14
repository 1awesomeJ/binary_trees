#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: a pointer to the newly created node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ret = malloc(sizeof(binary_tree_t));

	if (ret == NULL)
		return (NULL);
	ret->parent = parent;
	ret->n = value;
	ret->left = NULL;
	ret->right = NULL;

	return (ret);
}
