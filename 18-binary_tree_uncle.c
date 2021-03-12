#include "binary_trees.h"
/**
 * binary_tree_uncle - Function that finds the uncle of a node
 * @node: node to find the uncle
 * Return: Pointer to the uncle of the node
**/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (node != NULL && node->parent != NULL)
	{
		if (node->parent->parent)
		{
			if (node->parent->parent->left == node->parent)
				uncle = node->parent->parent->right;
			else
				uncle = node->parent->parent->left;
		}
	}
	return (uncle);
}
