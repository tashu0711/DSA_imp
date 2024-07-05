#include<bits/stdc++.h>
using namespace std;
// Normal method
int missing(int n, int a[]){
    int sum1 = n*(n+1)/2;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    int p = sum1-sum;
    return p;
}
int main(){
    int n;
    cout<<"enter size, and array";
    cin>>n;
    int *a = new int[n -1];   ///one missing element
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    cout<<"\n";
    cout<<"Ans::"<<missing(n,a);

    delete[] a;
    return 0;
}
