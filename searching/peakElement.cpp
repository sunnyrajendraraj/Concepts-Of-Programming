// Find the peak element from the Mountain Array if it always exists.

#include<bits/stdc++.h>
using namespace std;

int peakElement(vector<int>& nums){
    int n=nums.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]){
            return nums[mid];
        }else if(nums[mid]>nums[mid-1]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<"Peak Element is : "<<peakElement(nums)<<endl;
}