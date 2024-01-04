#include "binary_trees.h"

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