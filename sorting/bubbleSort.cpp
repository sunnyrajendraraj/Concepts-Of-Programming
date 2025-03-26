#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    // Inputting Elements in the array
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // Array before sorting 
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // // Applying Bubble sort TC=O((n-1)*(n-1))
    // for(int i=0;i<n-1;i++){ // n-1 pass 
    //     for(int j=0;j<n-1;j++){ // n-1 pass
    //         if(a[j]>a[j+1]){
    //             swap(a[j],a[j+1]);
    //         }
    //     }
    // }

    // // Better Bubble sort TC=O((n)*(n-1)/2)
    // for(int i=0;i<n-1;i++){ // n-1 pass 
    //     for(int j=0;j<n-i-1;j++){ // n-i-1 pass
    //         if(a[j]>a[j+1]){
    //             swap(a[j],a[j+1]);
    //         }
    //     }
    // }

    
    // Most Optimal Bubble sort 
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                flag=false;
            }
        }
        if(flag){ // swap didn't happen
            break;
        }
    }
    // Array After sorting 
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    // 1. Worst case : O(n^2)
    // 2. Avg Case : O(n^2)
    // 3. Best Case : O(n)
    // 4. Bubble Sort is a Stable Soring Algorithm
    // 5. Maximum Number of Swaps : n*(n-1)/2 [In case of Array sorted in Descending Order]
}