// Find the floor value square root of an element in log(n).

#include<bits/stdc++.h>
using namespace std;

int sqrt(long long x){
    long long low=0;
    long long high=x;
    while(low<=high){
        long long mid=low+(high-low)/2;
        long long sq=mid*mid;
        if(sq==x){
            return mid;
        }else if(sq>x){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return high;
}

int main(){
    long long x;
    cin>>x;
    cout<<"Square Root of "<<x<<" is : "<<sqrt(x)<<endl;
}