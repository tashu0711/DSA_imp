#include<bits/stdc++.h>
using namespace std;
void inter(vector<int> &v1, vector<int> &v2){
        unordered_set<int> set(v1.begin(), v1.end());
        unordered_set<int> interSet;

        for(int i:v2){
            if(set.find(i) != set.end()){
                interSet.insert(i);
            }
        }

        //convert interSection to vector

        vector<int> v(interSet.begin(),interSet.end());

        cout<<"Answer::::::::"<<endl;
        for(int i: v){
            cout<<i<<" ";
        }   
}
int main(){
    vector<int> v1  = {1,2,3,4,5};
    vector<int> v2  = {6,1,7,3,8, 5};
    vector<int> v;

    inter(v1,v2);
}