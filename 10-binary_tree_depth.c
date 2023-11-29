#include "binary_trees.h"

/**
* binary_tree_depth -  a function that finds tree depth
* @tree: a pointer to struct
* description - description
* Return: depth size
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	depth = 0;
	if (!tree)
	{
		return (0);
	}
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);

}
