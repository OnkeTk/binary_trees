#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of a node
 *
 * @parent: Pointer to the node to insert right child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node otherwise NULL on failure or if parent
 *			is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	new_node->right = parent->right;

	if (new_node->right)
		parent->right->parent = new_node;

	parent->right = new_node;

	return (new_node);
}
