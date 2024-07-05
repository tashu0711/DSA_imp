#include<bits/stdc++.h>
using namespace std;

void union_do(vector<int> &v1, vector<int> &v2){
    set<int> ans;

    for(int i: v1){
        ans.insert(i);
    }

    for(int i: v2){
        ans.insert(i);
    }

    cout<<"Union of the arrays::";
    for(int i: ans){
        cout<<i<<" ";
    }

}
int main(){
    vector<int> v1 = {1, 2, 3, 4, 5};
    
    vector<int> v2  = {6, 7, 8, 9, 10};

    union_do(v1,v2);
    return 0;
}


// 