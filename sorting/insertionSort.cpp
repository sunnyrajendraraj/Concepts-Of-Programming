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

    //Applying Insertion Sort
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && a[j]<a[j-1]){
            swap(a[j],a[j-1]);
            j--;
        }
    }

    // Array After sorting 
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // 1. Best Case : O(n)
    // 2. Average Case : O(n^2)
    // 3. Worst Case : O(n^2)
    // 4. Insertion Sort is Stable sorting Technique
}