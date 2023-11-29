#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of given node
 * @tree: the node
 * Return: the depth, or 0 if node is null
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;
	if (!tree)
		return (0);

	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	
	return (depth);
}
