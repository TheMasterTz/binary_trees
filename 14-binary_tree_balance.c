#include "binary_trees.h"
/**
 * binary_tree_height - function that goes through a binary tree using
 * post-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: the height of the tree. If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height >= right_height)
		return (left_height + 1);
	return (right_height + 1);
}
/**
 * binary_tree_balance - function that measures the balance factor of a
 * binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
