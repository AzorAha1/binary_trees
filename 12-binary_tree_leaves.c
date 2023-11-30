#include "binary_trees.h"

/**
* binary_tree_leaves - a function that measures the count of leaves
* @tree: the pointerto the root node
* Return: 0 if tree is null and count of leaf
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
