#include<bits/stdc++.h>
using namespace std;

int min(int n, int a[]){
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
    
        if(a[i] < mini){
            mini = a[i];
        }
    }
    return mini;
}
int max(int n, int a[]){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
    
        if(a[i] > maxi){
            maxi = a[i];
        }
    }
    return maxi;
}

int main(){
    int n;
    cout<<"enter";
    cin>>n;

    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int m1 = min(n,a);
    cout<<m1;
    int m2 = max(n,a);
    cout<<m2;
    

    delete[] a;
}