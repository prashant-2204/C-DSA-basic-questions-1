#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
void rotate(vector<int>&nums, int k) {
      
    // just to practice the modulus approach
    /*
 When you pass vector<int> then function gets a copy of that vector.
 You can do anything you want with it in the function and 
 your original data would not change.
 When you pass vector<int>& then function
 gets the reference which means that any changes in the function would 
 modify the original data.
 */
      int n = nums.size();
      vector<int> temp(n);
      
      
      for(int i =0;i<n;i++) {
        
        temp[(i+k)%n] = nums[i];
        
      }
      
      
      nums=temp;
      
    }

 int main()
 {
    int n;
    vector<int>v;
    cout<<"enter size of array"<<endl;

    int size;
    cin>>size;
    cout<<"enter digit from where to rotate"<<endl;
    int k;
    cin>>k;
    for(int i=0;i<size;i++)
    {
        cin>>n;
        v.push_back(n);

    }
    rotate(v,k);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
        cout<<endl;
    }
 }
