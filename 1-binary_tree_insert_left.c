#include "binary_trees.h"

/**
 * binary_tree_insert_left- a function that inserts a node as the
 * left-child of another node
 * parent: the parent node
 * value: the vlue of the node
 * Return: Success.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));

    newNode->n = value;
    newNode->left = NULL;
    newNode->right = NULL;

    if (parent == NULL)
    {
        return NULL;
    }
    
    if (newNode == NULL)
    {
        return NULL;
    }

    if (parent->left != NULL)
    {
        newNode->left = parent->left;
    }
    parent->left = newNode;
    return (newNode);
}