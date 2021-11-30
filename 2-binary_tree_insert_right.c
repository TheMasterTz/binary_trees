#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as the right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value is the value to put in the new node
 * Return: binary tree insert right
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);

	right_child = binary_tree_node(parent, value);
	if (right_child == NULL)
		return (NULL);

	right_child->right = parent->right;
	if (right_child->right != NULL)
		right_child->right->parent = right_child;

	parent->right = right_child;
	return (right_child);
}
