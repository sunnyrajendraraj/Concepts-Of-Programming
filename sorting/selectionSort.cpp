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

    //Applying Selection Sort
    for(int i=0;i<n-1;i++){
        int mindx=-1;
        int min=INT_MAX;
        for(int j=i;j<n;j++){
            if(a[j]<min){
                min=a[j];
                mindx=j;
            }
        }
        swap(a[i],a[mindx]);
    }

    // Array After sorting 
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // 1. Best Case : O(n^2)
    // 2. Average Case : O(n^2)
    // 3. Worst Case : O(n^2)
    // 4. Selection Sort is Unstable Sorting Technique.
    // If the cost of swapping is high then selection sort is used.
    // Maximum number of swaps : n-1
}