#include "binary_trees.h"

/**
 * binary_tree_insert_left- a function that inserts a node as the
 * left-child of another node
 * @parent: the parent node
 * @value: the vlue of the node
 * Return: Success.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;
    
    if (!parent)
    {
        return (NULL);
    }
    newNode = malloc(sizeof(binary_tree_t));
    if (!newNode)
    {
        return (NULL);
    }
    newNode->n = value;
    newNode->left = NULL;
    newNode->right = NULL;
    if (parent->left != NULL)
    {
        parent->left->parent = newNode;
        newNode->left = parent->left;
    }
    parent->left = newNode;
    newNode->parent = parent;
    return (newNode);
}
