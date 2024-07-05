#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &v1, vector<int> &v2){
    int n = v1.size() ;
    int i = n- 1;
    int j = 0;

    while(i>=0 && j<n){
        if(v1[i] > v2[j]){
            swap(v1[i], v2[j]);
            i--;j++;
        }else{
            break;
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());


}
int main(){
    vector<int> v1,v2;

    v1 = {1,2,4,5};
    v2 = {6,8,10};

    merge(v1,v2);

    cout<<"meged::<<endl";
    for(int i: v1){
        cout<<i<<" ";
    }

    for(int i: v2){
        cout<<i<<" ";
    }


}