#include<bits/stdc++.h>
using namespace std;

void move(vector<int> &v){
    int n = v.size();
    int l = 0, r = n-1;

    while(l<=r){
        if(v[l]<0){
            l++;
        }else if(v[r]>=0){
            r--;
        }else{
            swap(v[l], v[r]);
            l--;
            r++;
        }
    }

}
int main(){
    vector<int> v  = {-1,2,-3,-4,5,6,-7};
    move(v);

    cout<<"final answer::::";
    for(int i:v){
        cout<<i<<" ";
    }
}