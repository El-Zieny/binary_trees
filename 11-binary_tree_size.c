#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the root of the binary tree
 * Return: the size, or 0 if tree is null
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = 0;
	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size);
}
