#include "binary_trees.h"
/**
* height - cal height
* @tree: tree
* description - description
* Return: 0 if tree is null
*/
int height(const binary_tree_t *tree)
{
	int leftheight;

	int rightheight;

	leftheight = tree->left;
	rightheight = tree->right;
	if (!tree)
		return (0);

	return (1 + max(leftheight, rightheight));
}
/**
* binary_tree_balance - checks balance factor
* @tree: Pointer to the root node
* Return: 0 if tree is NULL.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int heightofleft;

	int heightofright;

	int checkbalance;

	if (!tree)
		return (0);
	heightofleft = height(tree->left);
	heightofright = height(tree->right);
	checkbalance = heightofleft - heightofright;

	return (checkbalance);
}

