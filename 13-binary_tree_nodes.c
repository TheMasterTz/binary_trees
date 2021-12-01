#include "binary_trees.h"
/**
 * binary_tree_nodes - function to know how many leaf nodes there are
 *
 * @tree: Tree to find the leaf node
 * Return: Returns the sum of the left and right sides.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	return (binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right) + 1);
}
