// We are defining the lower bound of x as 
// The number which is just smaller than x in the sorted array.

#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& nums, int x){
    int n=nums.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==x) {
            return nums[mid-1];
        }
        else if(nums[mid]<x) {
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    return nums[high];
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
    int lb=lowerBound(nums,x);
    cout<<"Lower Bound of "<<x<<" is "<<lb<<endl;
}