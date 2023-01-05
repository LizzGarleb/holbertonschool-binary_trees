#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a given node is root
 *
 * @node: is a pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0, NULL 0
 *
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL || node->right != NULL)
		return (1);
	else if (node->left != NULL && node->right == NULL)
		return (0);
	else if (node->left == NULL && node->right != NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (1);
}
