#include "binary_trees.h"

/**
* binary_tree_is_full - a function that checks if a binary tree is full
* @tree: pointer ot the root
* Return: 0 if tree is NULL
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if ((tree->left == NULL && tree->right == NULL) ||
		(tree->left != NULL && tree->right != NULL))
		{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
		}

	return (0);
}
