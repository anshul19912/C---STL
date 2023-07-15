//it stores only unique elements
//elements can't be modified, they can only be deleted or added.
//elements sorted order mei aapko returned hote hain

#include <iostream>
#include <set>  
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(3);
    s.insert(5);
    s.insert(2);
    s.insert(7);
    s.insert(0);

    for(int i:s){
        cout<<i<<endl;
    }

    s.erase(s.begin());
    cout<<endl;
    for(int i:s){
        cout<<i<<endl;
    }

    cout<<"5 is present or not: "<<s.count(5)<<endl;


    
return 0;
}