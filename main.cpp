/*
* main.cpp - Main project file. Contains only main function 
*/

#include "BST.h"
#include <iostream>

using std::cout;
using std::endl;

int main(){
	//Debug code
	BST int_tree;
	int_tree.insert(10);
	int_tree.insert(15);
	int_tree.insert(2);
	int_tree.insert(8);
	int_tree.insert(6);
	int_tree.insert(9);
	int_tree.insert(12);
	int_tree.insert(13);
	int_tree.insert(19);
	int_tree.insert(18);
	int_tree.insert(23);
	int_tree.insert(1);
	int_tree.insert(11);
	int_tree.insert(25);
	int_tree.insert(24);
	int_tree.insert(30);
	int_tree.print_right_left_root();
	cout << endl;
	int_tree.remove_one(10);
	int_tree.print_right_left_root();
	return 0;
}
