#include "binary_trees.h"
/**
 * binary_tree_sibling - Function to find the sibling of a node
 *
 * @node: Finding the sibling
 * Return: true if they are siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
