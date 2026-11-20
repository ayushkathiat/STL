#include <bits/stdc++.h>
using namespace std;
int main(){

    // // create vector , declare
    // vector<int>v;
    // vector<int>v1(5, 1);

    // //size and capacity
    // cout<<"The size is : "<<v.size()<<endl;
    // cout<<"The capacity is : "<<v.capacity()<<endl;

    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // cout<<"The size is : "<<v.size()<<endl; //3
    // cout<<"The capacity is : "<<v.capacity()<<endl;  //4
    // //update value
    // v[1] = 100;

    // cout<<"The size is : "<<v1.size()<<endl;
    // cout<<"The capacity is : "<<v1.capacity()<<endl;  // declared above
    // v1.push_back(10);
    // cout<<"The size is : "<<v1.size()<<endl;
    // cout<<"The capacity is : "<<v1.capacity()<<endl;

    // -------------------------------------------------------------
    // // DELETE value 
    // vector<int>v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // v.pop_back();
    // cout<<"The size is : "<<v.size()<<endl;
    // cout<<"The capacity is : "<<v.capacity()<<endl;

    // //to erase a particular index ele
    // v.erase(v.begin()+2);
    // cout<<"The size is : "<<v.size()<<endl;
    // cout<<"The capacity is : "<<v.capacity()<<endl;
    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    // //to insert as particular index
    // v.insert(v.begin()+2, 80);
    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout<<*it<<" ";
    // }cout<<endl;

    // // to update value
    // v[3] = 100;
    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout<<*it<<" ";
    // }

    // // to clear all ele 
    // v.clear();
    // cout<<"The size is : "<<v.size()<<endl;
    // cout<<"The capacity is : "<<v.capacity()<<endl;

    //-------------------------------------------------------------
    
    // vector<int>arr;
    // arr.push_back(10);
    // arr.push_back(90);
    // arr.push_back(30);
    // arr.push_back(410);
    // arr.push_back(9);
    // cout<<arr.front()<<endl;
    // cout<<arr.back()<<endl;


    // // copying arr values in a
    // vector<int>a;
    // a = arr;
    // for(auto it = a.begin(); it != a.end(); it++){
    //     cout<<*it<<" ";
    // }


    //--------------------------------------------------------
    // For sorting
    vector<int>s;
    s.push_back(23);
    s.push_back(13);
    s.push_back(223);
    s.push_back(93);
    s.push_back(53);
    s.push_back(3);
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;

    // in ascending order
    sort(s.begin(), s.end());
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;

    // // in decending order
    // sort(s.rbegin(), s.rend());
    // for(auto it = s.begin(); it != s.end(); it++){
    //     cout<<*it<<" ";
    // }

    //----
    //SEarch in BINARY SEARCH
    cout<<binary_search(s.begin(), s.end(), 53);

    
} 