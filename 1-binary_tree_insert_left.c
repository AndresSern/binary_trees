#include "binary_trees.h"

/*
 * binary_tree_insert_left - function that inserts a node
 *                           as the left-child of another node
 *
 * @pointer: pointer to the node to insert the left-child in
 * @value:  value to store in the new node
 *
 * Return: return a pointer to the created node,
 *         or NULL on failure or if parent is NULL
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->right = NULL;
	newNode->left = NULL;

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
		parent->left = newNode;
	}
	else
		parent->left = newNode;

	return (newNode);
}
