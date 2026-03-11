
#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(char);
    char pop();
    Stack();
    ~Stack();
    bool isEmpty();
};


void Stack::push(char x){
  NodePtr new_node=new NODE(x);
  if(new_node){
            new_node->set_next(top);
            top = new_node;
            size++;
   }
         // change the top
}

char Stack::pop(){
    if(size>0){
        NodePtr t=top;
        char value;
        value=t->get_value();
        top = t->get_next();

    
        
    // Left missing part for exercises
        delete t;
        size--;
        return value;
    }

	//be careful of the empty stack!!!
    else{
        return '\0';
    }
    }

bool Stack::isEmpty(){
    return size == 0;
}

Stack::Stack(){
    //initialize stack
    top = NULL;
    size = 0;
    
}
Stack::~Stack(){
    //delete all remaning stack (i.e. pop all) 
    while(size>0) {
    pop();
    }

    
}


#endif
