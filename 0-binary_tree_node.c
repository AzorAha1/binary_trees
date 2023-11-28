#include "binary_trees.h"
/**
* binary_tree_node - function name
* @parent: parent of the tree
* @value: value
* description - create a binary tree node
* Return: binary tree node pointer returned
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->parent = parent;
	if (parent == NULL)
	{
		newnode->n = value;
		return (newnode);
	}
	newnode->n = value;
	return (newnode);
}
