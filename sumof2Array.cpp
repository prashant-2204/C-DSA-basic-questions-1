#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int>&v3)
{
    int s=0;
    int e= v3.size()-1;
    while(s<=e)
    {
        swap(v3[s++],v3[e--]); 
    }
}
void sum(vector<int>&v1,vector<int>&v2,vector<int>&v3)
{
int sum;
int carry=0;
int ans;
int i=v1.size()-1;
int j=v2.size()-1;
while(i>=0 && j>=0)
{
    ans=v1[i]+v2[j]+carry;
    sum=ans%10;
    carry=ans/10;
    v3.push_back(sum);
    i--;
    j--;
    
}
while(i>=0)
{
    ans=v1[i]+carry;
    sum=ans%10;
    carry=ans/10;
    v3.push_back(sum);
    i--;
}
while(j>=0)
{
    ans=v2[j]+carry;
    sum=ans%10;
    carry=ans/10;
    v3.push_back(sum);
    j--;
}
while(carry!=0)
{
        ans = carry;
        carry = sum/10;
        sum = sum%10;
        v3.push_back(sum);
}
reverse(v3);
}
int main()
 {
    int n;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    cout<<"enter size of 1 array"<<endl;

    int size1;
    cin>>size1;
    cout<<"enter size of 2 array"<<endl;
    int size2;
    cin>>size2;

    cout<<"enter elements of 1 array"<<endl;
    for(int i=0;i<size1;i++)
    {
        cin>>n;
        v1.push_back(n);

    }
    cout<<"enter elements of 2 array"<<endl;
     for(int i=0;i<size2;i++)
    {
        cin>>n;
        v2.push_back(n);

    }
  
    sum(v1,v2,v3);
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i];
        cout<<endl;
    }
 }
