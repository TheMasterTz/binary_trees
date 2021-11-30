#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 *
 * @node: pointer to the node to check
 * Return: int
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

	if (tree == NULL || binary_tree_is_leaf(tree))
        return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height >= right_height)
		return (left_height + 1);
	return (right_height + 1);
}
