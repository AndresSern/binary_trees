#include "binary_trees.h"
int isperfectrec(const binary_tree_t *tree, int d, int level);
int findadepth(const binary_tree_t *node);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: if tree is NULL, return 0
**/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = findadepth(tree);

	if (tree == NULL)
		return (0);

	return (isperfectrec(tree, d, 0));
}

/**
 * isperfectrec - recursive function that checks if a binary tree
 * is perfect or not
 * @tree: pointer to the root node of the tree to check
 * @d: counter
 * @level: level of the tree
 * Return: if tree is NULL, return 0
**/
int isperfectrec(const binary_tree_t *tree, int d, int level)
{

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (isperfectrec(tree->left, d, level + 1) &&
			isperfectrec(tree->right, d, level + 1));
}

/**
 * findadepth - check depth of leftmost leaf
 * @node: pointer to the leaf od the tree to check
 * Return: depth of leftmost leaf
**/
int findadepth(const binary_tree_t *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}
