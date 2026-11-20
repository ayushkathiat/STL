#include<bits/stdc++.h>
using namespace std;
int main(){

    unordered_map<int, int>m;
    m.insert(make_pair(10,120));
    m.insert(make_pair(20,230));
    m.insert(make_pair(30,340));
    m.insert(make_pair(60,450));
    m.insert(make_pair(50,560));

    for(auto it = m.begin(); it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}