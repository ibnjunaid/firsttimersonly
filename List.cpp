//10-Oct-2019

#include<iostream>

template <class Type>
struct generic_node {
	Type data;
	generic_node<Type> * next;
};

template<class Type>
class singely_linked_list{
	public:
		generic_node<Type> *head;
		generic_node<Type> *tail;
		singely_linked_list();
		bool add_front(Type data);
		//bool add_end(Type data);
		void print_all(char);
		void print_all_starting_from_tail(char);
		int length;
};
template<class Type>
singely_linked_list<Type>::singely_linked_list(){
	length = 0;
	head = NULL;
	tail = NULL;
}

template <class Type>
bool singely_linked_list<Type>::add_front(Type data){
	generic_node<Type> * node = new generic_node<Type>();
	if (!node)
		return false;
	if (!tail){
		tail = node;
	}
	node->data = data;
	node->next = this->head;
	this->head = node;
	length++;
	return true;
}

// template<class Type>
// bool singely_linked_list<Type>::add_end(Type data){
// 	if (!head){
// 		head = new generic_node<Type>();
// 		head->data = data;
// 		head->next = NULL;
// 	}
// 	generic_node<Type> *node = new generic_node<Type>();
	
// }

template<class Type>
void singely_linked_list<Type>::print_all(char delimiter){
	generic_node<Type> * head = this->head;
	while(head){
		std::cout<< head->data<<delimiter;
		head = head->next; 
	}
}

template<class Type>
void singely_linked_list<Type>::print_all_starting_from_tail(char delimiter){
	generic_node<Type> *tail = this->tail;
	while(tail){
		std::cout<<"debug";
		std::cout<< tail->data<< delimiter;
		tail = tail->next;
	}
}

