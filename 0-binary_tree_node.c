#include "binary_trees.h"
/**
 * binary_tree_node - Function that creates a binary tree node
 *
 * @parent: parent is a pointer to the parent node of the node to create
 * @value: value is the value to put in the new node
 * Return: binary tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return NULL;

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
