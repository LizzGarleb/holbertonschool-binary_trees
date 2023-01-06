#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: is a pointer to the node of the tree to measure the height
 *
 * Return: Return 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	else
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);

		if (left > right)
			return (left + 1);
		else
			return (right + 1);
	}
}
