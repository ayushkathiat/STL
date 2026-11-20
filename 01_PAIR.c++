#include <bits/stdc++.h>
using namespace std;

int main(){
    // pair<string, int>p;
    // //p = make_pair("Ayush", 90);
    // p.first = "AYUSH";
    // p.second = 90;
    // cout <<p.first<<" "<<p.second<<endl;


    // FOR ADDING MORE
    // name, age, weight

    // pair<string, pair<int,int> >p;
    // pair< pair<string,int>, int>p;
    // p.first = "KATHAIT";
    // p.second.first = 25;
    // p.second.second = 80;
    // cout <<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
    // // cout <<p.first.first<<" "<<p.first.second<<" "<<p.second<<endl;

    pair< pair<string,string>, pair<int,int> >p; // 👌
    // pair<string, pair<int, int>, pair<string, int> >p;  // 😒
    p.first.first = "KATHAIT";
    p.first.second = "AYUSH";
    p.second.first = 100;
    p.second.second = 1000;
    cout<<"Name : "<<p.first.first<<" "<<p.first.second<<"\nNumber : "<<p.second.first<<"\nNumber : "<<p.second.second<<"\n"<<endl;

    return 0;
}
