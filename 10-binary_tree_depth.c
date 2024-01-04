#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of a node in ab inary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: if tree is NULL, 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
	return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
