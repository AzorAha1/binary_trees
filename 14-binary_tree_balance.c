#include "binary_trees.h"
/**
* height - cal height
* @tree: tree
* description - description
* Return: 0 if tree is null
*/
int height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	int leftheight = height(tree->left);
	int rightheight = height(tree->right);

	return (1 + max(leftheight, rightheight));
}
/**
* binary_tree_balance - checks balance factor
* @tree: Pointer to the root node
* Return: 0 if tree is NULL.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	int heightofleft = height(tree->left);

	int heightofright = height(tree->right);

	int checkbalance = heightofleft - heightofright;

	return (checkbalance);
}
