#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth.
 * Return: if binary tree is NULL, 0
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	while (tree-parent)
	{
		tree = tree->parent;
		counter++;
	}
	return (counter);
}
