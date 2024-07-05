// #include<bits/stdc++.h>
// using namespace std;

// void merge_array(int n1, int n2, int a1[], int a2[]){
//           int n = n1 + n2;
//             int *a3 = new int[n]; // Dynamic allocation for merged array
//             int i = 0, j = 0, k = 0;
//                 // Merge arrays a1 and a2 into a3
//        // Merge arrays a1 and a2 into a3
    
//     // Merge arrays a1 and a2 into a3
//     while (i < n1 && j < n2) {
//         if (a1[i] < a2[j]) {
//             a3[k] = a1[i];
//             i++;
//         } else {
//             a3[k] = a2[j];
//             j++;
//         }
//         k++;
//     }

//      while (i < n1) {
//         a3[k] = a1[i];
//         i++;
//         k++;
//     }

//     while (j < n2) {
//         a3[k] = a2[j];
//         j++;
//         k++;
//     }


//      // Print merged array a3
//     cout << "Merged sorted array: ";
//     for (int m = 0; m < n; m++) {
//         cout << a3[m] << " ";
//     }
//     cout << endl;

//     // Free dynamically allocated memory
//     delete[] a3;

// }

// int main(){
//     int n1,n2;
//     cout<<"enter array 1::";
//     cin>>n1;
//     int *a1 = new int[n1];
    
//     for(int i = 0; i < n1 ; i++){
//         cin>>a1[i];
        
//     }

//     cout<<"enter array 2::";
//     cin>>n2;
//     int *a2 = new int[n2];
//     for(int i = 0; i < n1 ; i++){
//         cin>>a2[i];   
//     }
     
//     merge_array(n1,n1,a1, a2);

//     delete[] a1;
//     delete[] a2;
// }

#include<bits/stdc++.h>
using namespace std;
void merge(int n1,int n2, int a1[],int a2[]){
    int n= n1+n1;
    int *a3 = new int[n];
    int i=0, j=0,k=0;
    while (i<n1 && j<n2) 
    {
        if(a1[i] < a2[j]){
            a3[k] = a1[i];
            i++;

        }else{
            a3[k] = a2[j];
            j++;
        }
        
        k++;
    }
    
    while(i<n1){
        a3[k] = a1[i];
        k++;
        i++;
    }

    while(j<n2){
        a3[k] = a2[j];
        k++;
        j++;
    }

    cout<<"merged::::::::::";
    for(int p = 0;p<n;p++){
        cout<<a3[p]<<" ";
    }

    delete[] a3;
}
int main(){
    int n1,n2;
    cout<<"give size of array 1 and 2";
    cin>>n1>>n2;
    int *a1 = new int[n1];
    int *a2 = new int[n2];

    cout<<"enter array 1";
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }

    cout<<"enter array 2";
    for(int i=0;i<n1;i++){
        cin>>a2[i];
    }
    
    merge(n1,n2,a1,a2);
    delete[] a1;
    delete[] a2;

}