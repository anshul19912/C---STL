#include <iostream>
#include <stack>
using namespace std;

int main(){

    //creation of stack
    stack<int> s;

    //push operation
    s.push(5);
    s.push(75);
    s.push(7);

    
    //pop
    s.pop();
    
    cout<<"Printing top element of stack is: "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Size of stack is: "<<s.size();

    return 0;

}