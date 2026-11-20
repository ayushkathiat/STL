// 30, 50, 70, 80
#include <bits/stdc++.h>
using namespace std;

int main(){

    list<int>l1;
    l1.push_back(30);
    l1.push_back(50);
    l1.push_back(70);
    l1.push_back(80);
    l1.push_front(10);

    //itrator use to print all ele
    for(auto it = l1.begin(); it != l1.end(); it++){
        cout<<*it<<" ";
    } cout <<"\n";
    

    cout<<"---In reverse order---"<<endl;

    for(auto it = l1.rbegin(); it != l1.rend(); it ++){
        cout << *it<<" ";
    } cout <<"\n";

    cout<<"front value : "<<l1.front()<<"\n";
    cout<<"Back value : "<<l1.back()<<"\n";
    cout<<"Total value : "<<l1.size()<<"\n";

    l1.pop_front();
    cout<<"Total value after POP_front : "<<l1.size();

}
