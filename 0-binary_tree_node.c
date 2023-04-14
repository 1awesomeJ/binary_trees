#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *ret = malloc(sizeof(binary_tree_t));
if (ret == NULL)
	return (NULL);
ret->parent = parent;
ret->n = value;
return (ret);
}
