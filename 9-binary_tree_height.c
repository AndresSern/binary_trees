#include  "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);

	if (tree->right != NULL && tree->left != NULL)
		return (2);
	return (1);
}
