#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool check(vector<int>&v)
{
    int count =0;
    for(int i=1;i<v.size();i++)
    {
        if(v[i-1]>v[i])
        count++;
        
    }
    if(v.back()>v.front())
    {
        count++;
    }
    return count<=1;
}

int main()
 {
    int n;
    vector<int>v;
    cout<<"enter size of array"<<endl;

    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>n;
        v.push_back(n);

    }
    cout<<check(v);
  
 }
