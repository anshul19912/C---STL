#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<string> q;

    q.push("Love");
    q.push("babbar");
    q.push("Singh");
    q.push("kumar");

    cout<<"Size befire pop "<<q.size()<<endl;

    cout<<"First element "<<q.front()<<endl;
    q.pop();
    cout<<"First element "<<q.front()<<endl;

    cout<<"Size after pop "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty";
    }

 return 0;
}    