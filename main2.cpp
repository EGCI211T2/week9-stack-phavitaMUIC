#include<iostream>
using namespace std;

#include "stack.h"

int main(int argc, char *argv[]) {

    for(int i=1;i<argc;i++){

        Stack s;
        bool correct = true;

        for(int j=0; argv[i][j] != '\0'; j++){

            if(argv[i][j]=='[' || argv[i][j]=='{'){
                s.push(argv[i][j]);
            }

            else if(argv[i][j]==']' || argv[i][j]=='}'){

                char x = s.pop();

                if((argv[i][j]==']' && x!='[') ||
                   (argv[i][j]=='}' && x!='{')){
                    correct = false;
                    break;
                }
            }
        }

        if(!correct)
            cout<<"argv "<<i<<" incorrect"<<endl;

        else if(!s.isEmpty())
            cout<<"argv "<<i<<" incorrect: too many open parenthesis"<<endl;

        else
            cout<<"argv "<<i<<" correct"<<endl;
    }
}