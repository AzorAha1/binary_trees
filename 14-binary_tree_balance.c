#include "binary_trees.h"
/**
* binary_tree_balance - checks balance factor
* @tree: Pointer to the root node
* Return: 0 if tree is NULL.
*/
int height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	int heightofleft = height(tree->left);

	int heightofright = height(tree->right);

	int checkbalance = heightofleft - heightofright;

	return (checkbalance);
}
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

	return (1 + (leftheight > rightheight ? leftheight : rightheight));
}
