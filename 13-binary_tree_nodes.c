#include "binary_trees.h"
/**
 * binary_tree_nodes - counts non-leaves nodes
 * @tree: pointer to the root of the binary tree
 * Return: number of non-leaves nodes, or 0 if tree is null
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (!tree)
		return (0);
	nodes = 0;
	if (tree->left || tree->right)
		nodes = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (nodes);
}
