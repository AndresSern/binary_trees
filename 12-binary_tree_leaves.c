#include "binary_trees.h"

/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 *@tree: root node of the tree to count the number of leaves
 * Return: number of leaves; or 0 if tree is NULL
 * A NULL pointer is not a leave
**/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves = 0, right_leaves = 0;

	if (tree == NULL)
		return (0);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (left_leaves != 0 || right_leaves != 0)
		return (left_leaves + right_leaves);

	return (0);
}
