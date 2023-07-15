#include <iostream>
#include <map>  
using namespace std;

int main(){

    map<int,string> m;

    m[1]="Babbar";
    m[13]="kumar";
    m[2]="love";

    m.insert({5,"bheem"});
    
    cout<<"Before erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    cout<<"Finding 12 "<<m.count(12)<<endl;
   
    m.erase(13);
    cout<<"After erase "<<endl;
     for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    return 0;
}    