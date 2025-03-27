// We are defining the upper bound of x as 
// The number which is just greater than x in the sorted array.

#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int>& nums, int x){
    int n=nums.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==x) {
            return nums[mid+1];
        }
        else if(nums[mid]<x) {
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    return nums[low];
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
    int ub=upperBound(nums,x);
    cout<<"Lower Bound of "<<x<<" is "<<ub<<endl;
}