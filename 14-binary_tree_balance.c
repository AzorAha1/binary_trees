#include "binary_trees.h"

/**
* binary_tree_balance - checks balance factor
* @tree: Pointer to the root node
* Return: 0 if tree is NULL.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	int heightofleft = binary_tree_height(tree->left);
	int heightofright = binary_tree_height(tree->right);
	int checkbalance = heightofleft - heightofright;

	return (checkbalance);
}
