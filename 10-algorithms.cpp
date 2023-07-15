#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
 int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(5);
    v.push_back(8);
    v.push_back(10);

    cout<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"index of  8: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=3,b=32;

    cout<<"Max : "<<max(a,b)<<endl;
    cout<<"Min : "<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    string str="abcde";
    reverse(str.begin(),str.end());
    cout<<"After reversing : "<<str<<endl;

    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"After rotating"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());
    cout<<"After sorting"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    
 }