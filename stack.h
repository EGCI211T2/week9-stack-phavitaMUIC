
#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack();
    ~Stack();
};


void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node){
            new_node->set_next(top);
            top = new_node;
            size++;

   }
 
         // change the top

         // 
    
}

int Stack::pop(){
    if(size>0){
        NodePtr t=top;
        int value;
        value=t->get_value();
        topt->get_next();

    
        
    // Left missing part for exercises
        delete t;
        size--;
        return value;
    }

	//be careful of the empty stack!!!
    else{
        cout<<"Empty Stack"<<endl;
        return -1;
    }
    }

Stack::Stack(){
    //initialize stack
    
}
Stack::~Stack(){
    //delete all remaning stack (i.e. pop all) 
    cout<<"clearing all nodes"<<endl;
    while(size>0) pop();
    
}


#endif
