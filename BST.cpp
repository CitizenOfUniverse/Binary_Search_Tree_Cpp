/*
* BST.cpp - Describes methods of the stack class
*/
#include "BST.h"
#include "stddef.h"
#include <iostream>

using std::cout;

// Binary search tree class constructor.
BST::BST(){
	size = 0;
	this->top = NULL;
}
// Binary search tree class destructor
BST::~BST(){
	if (this->top != NULL){
		this->delete_subtree(this->top);//Calling recursive function, deleting tree in Right-Left-Root order
	}
}
// Deletes tree in Right-Left-Root order
void BST::delete_subtree(node* top){
	if (top->get_right_son() == NULL){
		if (top->get_left_son() == NULL){
			delete top;
			this->size--;
			return;
		}
		else{
			delete_subtree(top->get_left_son());
			delete top;
			this->size--;
			return;
		}
	}
	else{
		delete_subtree(top->get_right_son());
		if (top->get_left_son() == NULL){
			delete top;
			this->size--;
			return;
		}
		else{
			delete_subtree(top->get_left_son());
			delete top;
			this->size--;
			return;
		}
	}
}
// Inserts one element in a BST saving order
void BST::insert(int data){
	if (this->top == NULL){
		this->top = new node(data);
	}
	else{
		insert_to_subtree(this->top, data);//Calling recursive function, that will find needed leaf and insert element there
	}
	this->size++;
	return;
}
// Finds position for a new element and insertes it to a tree
// "<" elements are becoming left sons, ">=" elements are becoming right sons
void BST::insert_to_subtree(node* now_node, int data){
	if (data < now_node->getData()){
		if (now_node->get_left_son() == NULL){
			now_node->create_left_son(data);
			return;
		}
		else{
			this->insert_to_subtree(now_node->get_left_son(), data);
		}
	}
	else{
		if (now_node->get_right_son() == NULL){
			now_node->create_right_son(data);
			return;
		}
		else{
			this->insert_to_subtree(now_node->get_right_son(), data);
		}
	}
}
// Returns size of a tree
int BST::get_size(){
	return this->size;
}
// Returns true on an empty tree and false on non-empty
bool BST::is_empty(){
	if (this->size == 0){
		return true;
	}
	else{
		return false;
	}
}
void BST::print_right_left_root(){
	this->print_subtree_right_left_root(this->top);
}
void BST::print_subtree_right_left_root(node* now_top){
	if (now_top->get_right_son() == NULL){
		if (now_top->get_left_son() == NULL){
			cout << now_top->getData() << " ";
			return;
		}
		else{
			this->print_subtree_right_left_root(now_top->get_left_son());
			cout << now_top->getData() << " ";
			return;
		}
	}
	else{
		this->print_subtree_right_left_root(now_top->get_right_son());
		if (now_top->get_left_son() == NULL){
			cout << now_top->getData() << " ";
			return;
		}
		else{
			this->print_subtree_right_left_root(now_top->get_left_son());
			cout << now_top->getData() << " ";
			return;
		}
	}
}
