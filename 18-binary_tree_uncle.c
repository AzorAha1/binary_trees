#include "binary_trees.h"

/**
* binary_tree_uncle - a function that finds the uncle of a node
* @node: pointer to the node ot find the sibling
* Return: Success.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *gparent;

	if (!node || !node->parent || !node->parent->parent)
	{
		return (NULL);
	}
	parent = node->parent;
	gparent = node->parent->parent;
	if (gparent->left == parent && gparent->right)
	{
		return (gparent->right);
	}
	if (gparent->right == parent && gparent->left)
	{
		return (gparent->left);
	}
	return (NULL);
}
