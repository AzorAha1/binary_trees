#include "binary_trees.h"

/**
* binary_tree_height - a function that measures the height of a binary tree
* @tree: a pointer to the root node
* Return: return 0.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (!tree)
		return (0);

	leftHeight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rightHeight = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (leftHeight < rightHeight ? leftHeight : rightHeight);
}
