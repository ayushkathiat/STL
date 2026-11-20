#include<bits/stdc++.h>
using namespace std;
int main(){

    map<int, int>m;
    m.insert(make_pair(10,120));
    m.insert(make_pair(20,230));
    m.insert(make_pair(30,340));
    m.insert(make_pair(40,450));
    m.insert(make_pair(50,560));
    m[100] = 60; //insert kr sakta ho , or UBDATE bhe kr deta h 
    m[20] = 40;

    for(auto it = m.begin(); it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    cout<<endl;
    if(m.count(20))
    cout<<m[20]<<" ";

    m.erase(50);
    for(auto it = m.begin(); it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }



    //in multimap we can not use m[20] = 40 rest will be same as map

    return 0;
}