#include<bits/stdc++.h>
using namespace std;
// Normal method
void reverse(int n, int a[]){
    for(int i=n-1; i>=0; i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter size, and array";
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(n,a);

    delete[] a;
    return 0;
}

/// using swap

// #include<bits/stdc++.h>
// using namespace std;

 


// }
// int main(){
//     int n;
//     cout<<"enter size and array";
//     cin>>n;
//     int *a = new int[n];

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }cout<<endl;

//     reverse(n,a);

//     delete[] a;
// }

// #include <iostream>
// using namespace std;

// void reverse(int n, int a[]) {
//     for (int i = n - 1; i >= 0; i--) {
//         cout << a[i];
//         // if (i > 0) {
//         //     cout << " ";
//         // }
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cout << "Give array size, then the array:\n";
//     cin >> n;
//     int a[n]; // Dynamic memory allocation

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     reverse(n, a);

//     //delete[] a; // Free dynamically allocated memory

//     return 0;
// }
