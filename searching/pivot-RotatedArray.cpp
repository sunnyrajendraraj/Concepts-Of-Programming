// Find the pivot element in the rotated sorted array.
#include<bits/stdc++.h>
using namespace std;

int findPivot(vector<int>& nums){
    int n=nums.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
            return nums[mid+1];
        }else if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
            return nums[mid];
        }else if(nums[mid]>nums[high]){
            low=mid+1;
        }else if(nums[mid]<nums[high]){
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
    cout<<"Pivot Element is : "<<findPivot(nums)<<endl;
}