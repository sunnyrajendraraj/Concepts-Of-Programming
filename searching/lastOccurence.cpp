#include<bits/stdc++.h>
using namespace std;

int lastOccurence(vector<int> &nums, int x){
    int low=0, high=nums.size()-1;
    int last=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==x){
            last=mid;
            low=mid+1;
        }else if(nums[mid]<x){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return last;
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
    int lo = lastOccurence(nums,x);
    cout<<"Last Occurence of "<<x<<" is "<<lo<<endl;
}