#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node.
 *
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: a pointer to the newly created node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ret;

	if (parent == NULL)
		return (NULL);
	ret = malloc(sizeof(binary_tree_t));

	if (ret == NULL)
		return (NULL);
	ret->parent = parent;
	ret->n = value;
	ret->left = NULL;
	ret->right = NULL;

	if (parent->left == NULL)
		parent->left = ret;
	else
	{
		ret->left = parent->left;
		parent->left->parent = ret;
		parent->left = ret;
	}
	return (ret);
}
