#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node to the left of the tree
 *
 * @parent: Pointer to the node to insert the left child
 * @value: Value to store the new node
 *
 * Return: Pointer to the created node, otherwise NULL on failure or
 *			parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
