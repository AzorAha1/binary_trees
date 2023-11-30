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

	if (!tree)
		return (0);

	leftheight = height(tree->left);
	rightheight = height(tree->right);
	return (1 + max(leftheight, rightheight));
}
/**
* binary_tree_is_perfect - a function that checks if a binary tree is perfect
* @tree: pointer ot the root
* Return: 0 if tree is NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftheight, rightheight;

	if (!tree)
	{
		return (0);
	}
	leftheight = height(tree->left);
	rightheight = height(tree->right);
	if (leftheight != rightheight)
	{
		return (0);
	}
	if (tree->left && tree->right)
	{
		return (1);
	}
	return
		(binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}
