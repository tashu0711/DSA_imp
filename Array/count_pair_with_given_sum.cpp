#include<bits/stdc++.h>
using namespace std;

int count_pair(vector<int> &v,int sum){
    unordered_map<int, int> map;
    int count_sum = 0;
    for(int i: v){
        int target = sum - i; 
        if(map.find(target) != map.end()){
                count_sum += map[target];
        }
        map[i]++;
    }
    return count_sum;
}
int main(){
    vector<int> v1 = {1,1,1,1};
    int target_sum = 2;

    int ans = count_pair(v1, target_sum);
    cout<<"ans::::::"<<ans;
}