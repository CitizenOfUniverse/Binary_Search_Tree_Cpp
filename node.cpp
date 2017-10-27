/*
* node.cpp - Describes methods of the node class
*/

#include "BST.h"
// Here "stddef.h" is needed to define NULL constant
//#include "stddef.h"

// node class constructor
node::node(){
	this->left = NULL;
	this->right = NULL;
}
node::node(int data){
	this->left = NULL;
	this->right = NULL;
	this->data = data;
}
// "Get" method for field prev of class node
node* node::get_left_son(){
	return this->left;
}
node* node::get_right_son(){
	return this->right;
}
// "Get" method for field data of class node
int node::getData(){
	return this->data;
}
son_create_status node::create_left_son(int data){
	if (this->left == NULL){
		this->left = new node(data);
		return OK;
	}
	else{
		return LEFT_SON_ALREADY_EXISTS;
	}
}
son_create_status node::create_right_son(int data){
	if (this->right == NULL){
		this->right = new node(data);
		return OK;
	}
	else{
		return LEFT_SON_ALREADY_EXISTS;
	}
}
void node::set_left_son(node* new_left_son){
	this->left = new_left_son;
	return;
}
void node::set_right_son(node* new_right_son){
	this->right = new_right_son;
	return;
}
