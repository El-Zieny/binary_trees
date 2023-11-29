#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree)
		return (0);

	left_h = 0;
	right_h = 0;

	if (tree->left)
		left_h = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_h = 1 + binary_tree_height(tree->right);

	if (left_h > right_h)
		return (left_h);

	return (right_h);
}

/**
 * binary_tree_balance - measures the balance of a node
 * @tree: pointer to the node
 * Return: the balance or, 0 if tree is null or balanced
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_child_h, r_child_h;

	if (!tree)
		return (0);

	l_child_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r_child_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (l_child_h - r_child_h);
}
