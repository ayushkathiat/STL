#include<bits/stdc++.h>
using namespace std;
int main(){

    // ASCENDING
    // set<int>s;
    // s.insert(10);
    // s.insert(20);
    // s.insert(30);
    // s.insert(40);
    // s.insert(60);
    // s.insert(50);

    // DESENDING
    set<int, greater<int> >s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(60);
    s.insert(50);


    //DELETE
    s.erase(10);

    //find
    if(s.find(60) != s.end()){
        cout<<"Present : \n";
    }
    // OR
    //count, count of that number
    if(s.count(60)){
        cout<<"present\n";
    }

    for(auto it = s.begin(); it!=s.end(); it++){
        cout<<*it<<endl;
    }

    return 0;
}