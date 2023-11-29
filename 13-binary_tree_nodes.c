#include "binary_trees.h"
/**
 * binary_tree_nodes - counts non-leaves nodes
 * @tree: pointer to the root of the binary tree
 * Return: number of non-leaves nodes, or 0 if tree is null
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
