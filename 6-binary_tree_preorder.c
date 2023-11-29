#include "binary_trees.h"

/**
 * binary_tree_preorder - travers a binary tree using pre-order
 * @tree: pointer to the root of the tree
 * @func: pointer to function to path the values to
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	
	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
