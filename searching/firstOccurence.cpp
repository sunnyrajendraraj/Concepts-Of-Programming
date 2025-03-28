#include<bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> &nums, int x){
    int low=0, high=nums.size()-1;
    int first=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==x){
            first=mid;
            high=mid-1;
        }else if(nums[mid]<x){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return first;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int x;
    cin>>x;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int fo = firstOccurence(nums,x);
    cout<<"First Occurence of "<<x<<" is "<<fo<<endl;
}