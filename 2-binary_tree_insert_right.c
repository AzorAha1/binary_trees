#include "binary_trees.h"
/**
* binary_tree_insert_right - function name
* @parent: parent of the tree
* @value: value
* description - create a binary tree node
* Return: binary tree node pointer returned
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->right = NULL;
	newnode->left = NULL;
	if (parent->right != NULL)
	{
		parent->right->parent = newnode;
		newnode->right = parent->right;
	}
	parent->right = newnode;
	newnode->parent = parent;
	return (newnode);
}
