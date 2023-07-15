#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<int> v;

    vector<int> a(5,1);      // size is 5 and initialize all element with 1
    
    vector<int> last(a);     // copy all elements of vector a
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity-> "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity-> "<<v.capacity()<<endl;         // capicity means elements ke liye kitna space assign hua pdta hai
    cout<<"Size-> "<<v.size()<<endl;            // size means kitne elements pde hain
    

    cout<<"Element at 2nd index"<<v.at(2)<<endl;

    cout<<"Starting element is "<<v.front()<<endl;
    cout<<"last element is "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
       
    }cout<<endl;

    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
 cout<<"before clear size "<<v.size()<<endl;
    return 0;
}