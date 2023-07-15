#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l;

    list<int> n(4,100);        // 4 elements and initialize every element with 100

    list<int> p(n);           //copy every element of list n in p

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"Afer erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size of list "<<l.size()<<endl;

return 0;
}