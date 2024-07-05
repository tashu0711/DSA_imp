// #include <iostream>
// #include <vector>
// using namespace std;

// void sortColors(vector<int>& v) {
//     int low = 0;
//     int mid = 0;
//     int high = v.size() - 1;

//     while (mid <= high) {
//         if (v[mid] == 0) {
//             swap(v[low], v[mid]);
//             low++;
//             mid++;
//         } else if (v[mid] == 1) {
//             mid++;
//         } else { // nums[mid] == 2
//             swap(v[mid], v[high]);
//             high--;
//         }
//     }
// }

// int main() {
//     vector<int> v = {2, 0, 1, 2, 1, 0};
    
//     cout << "Original array: ";
//     for (int i : v) {
//         cout << i << " ";
//     }
//     cout << endl;

//     sortColors(v);

//     cout << "Sorted array: ";
//     for (int j : v) {
//         cout << j << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include<bits/stdc++.h>
using  namespace std;

void sortc(vector<int> &v){
    int low =0, mid =0, high = v.size() -1;

    while(mid <= high){
        if(v[mid] == 0){
            swap(v[mid], v[low]);
            mid++;
            low++;
        }
        else if(v[mid] == 1){
            mid++;
        }else{
            swap(v[mid], v[high]);
            high --;
        }
    }
}
int main(){
    int n;
    cout<<"enter size";
    cin>>n;
    vector<int> v(n);
    cout<<"enter array";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<"original array";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    sortc(v);
    
    cout<<"answre Array";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}