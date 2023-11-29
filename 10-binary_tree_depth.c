#include "binary_trees.h"

/**
* binary_tree_depth -  a function that finds tree depth
* @tree: a pointer to struct
* description - description
* Return: depth size
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t leftdepth, rightdepth;

	if (!tree)
	{
		return (0);
	}
	leftdepth = binary_tree_depth(tree->left);
	rightdepth = binary_tree_depth(tree->right);
	return (1 + max(leftdepth, rightdepth));
}
