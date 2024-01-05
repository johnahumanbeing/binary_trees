#include "binary_trees.h"

/**
 * dif_height_lr_nodes - Finds the height difference of left and right nodes
 * and number of nodes in a binary tree
 * @tree: pointer to the root node of the tree to check
 * @num_nodes: pointer to number of nodes
 * Return: height difference of left and right nodes
 */
int dif_height_lr_nodes(const binary_tree_t *tree, int *num_nodes)
{
	int lht, rht;

	if (!tree)
		return (0);

	(*num_nodes)++;
	lht = tree->left ? 1 + dif_height_lr_nodes(tree->left, num_nodes) : 0;
	rht = tree->right ? 1 + dif_height_lr_nodes(tree->right, num_nodes) : 0;

	return (lht - rht);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the node of the tree to check
 *
 * Return: if tree is NULL, 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lht, rht, l_num_nodes = 0, r_num_nodes = 0;

	if (!tree)
		return (0);

	/* ht means height*/
	lht = dif_height_lr_nodes(tree->left, &l_num_nodes);
	rht = dif_height_lr_nodes(tree->right, &r_num_nodes);

	if (lht == rht && l_num_nodes == r_num_nodes)
		return (1);
	return (0);
}

