/*
* node.h - Contains descriptor of the "helper" class node
*/

// Status messages for creating a son of a node. Were made for possible future functionalities
enum son_create_status{
	OK,
	LEFT_SON_ALREADY_EXISTS,
	RIGHT_SON_ALREADY_EXISTS,
	ERR_ALLOCATING_MEMORY_FOR_NODE
};
// Descriptor of the "helper" class node. One node is one element of the stack
class node{
	node* left;//Pointer to the previous node
	node* right;//Pointer to the previous node
	int data;//Field for useful data of node
public:
	node* get_left_son();//"Get" method for "prev" field
	node* get_right_son();//"Get" method for "prev" field
	int getData();//"Get" method for "data" field
	node();//Class constructor. Initialises only address fields.
	node(int data);//Class constructor. Initialises all private fields.
	son_create_status create_left_son(int data);
	son_create_status create_right_son(int data);
	void set_left_son(node* new_left_son);
	void set_right_son(node* new_right_son);
};
