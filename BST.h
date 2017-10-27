/*
* BST.h - Contains descriptor of the class BST
*/

#include "node.h"
#include "stddef.h"

// Descriptor of the class BST
class BST{
private:
	node* top;//Pointer to the top node
	int size;//Size of the tree
public:
	BST();//Class constructor
	~BST();//Class destructor
	void insert(int);// Inserts an integer to a tree
	int get_size();//Returns size of the tree
	bool is_empty();//Returns true, if tree is empty, and false otherwise
	void print_right_left_root();
	bool remove_one(int value);
private:
	bool find_with_parent(int value, node** value_node, node** parent = NULL);
	void insert_to_subtree(node* now_node, int data);
	void delete_subtree(node* top);
	void print_subtree_right_left_root(node* top);
};
