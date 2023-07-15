#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(14);
    d.push_front(2);
    d.push_front(34);
    d.push_front(76);

    //d.popfront(1);    

    cout<<"print first index element- "<<d.at(1)<<endl;

    cout<<"Starting element "<<d.front()<<endl;
    cout<<"last element "<<d.back()<<endl;

    cout<<"empty or not  "<<d.empty()<<endl;

    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<endl;
    }

return 0;
}

