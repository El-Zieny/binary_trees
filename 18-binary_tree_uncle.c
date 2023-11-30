#include "binary_trees.h"
/**
 * binary_tree_sibling - check code
 *
 * @node: binary_tree_t node
 *
 * Return: binary_tree_t node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
/**
 * binary_tree_uncle - finds an uncle of a node
 * @node: to find it's uncle
 * Return: pointer of the uncle, or NULL if there's not
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
