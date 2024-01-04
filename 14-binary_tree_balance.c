#include "binary_trees.h"

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: pointer to the node of the tree to measure the height
 *
 * Return: if tree is NULL 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (!tree)
	return (0);

	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (height_left > height_right ? height_left : height_right);

}

/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: if tree is NULL, 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int i, j;

	if (!tree)
	return (0);

	i = binary_tree_height(tree->left);
	j = binary_tree_height(tree->right);

	return (i - j);
}
