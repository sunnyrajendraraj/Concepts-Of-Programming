// Find the smallest missing element in the sorted array of distinct Elements.

#include<bits/stdc++.h>
using namespace std;

int smallestMissing(vector<int>& nums){
    int n=nums.size();
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==mid) {
            low=mid+1;
        }
        else {
            ans=mid;
            high=mid-1;
        }
    }
    return ans;
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
    cout<<"Smallest Missing Element is : "<<smallestMissing(nums)<<endl;
}