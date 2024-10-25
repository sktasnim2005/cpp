#include <iostream>
using namespace std;

int main() {
    int m=5,n=5;
    int A[m],B[n];
    cout<<"Input array A which has 5 elements "<<endl;
    for (int i = 0; i < m; i++) {
        cin>> A[i];
    }
    cout<<"Input array B which has 5 elements "<<endl;
   for (int i = 0; i < n; i++) {
        cin>> B[i];
    }
   cout<<"Array A  elements : "<<endl;
   for (int i = 0; i < m; i++) {
        cout<< A[i]<<" ";
    }
    cout<<endl;
    cout<<"Array B  elements : "<<endl;
   for (int i = 0; i < n; i++) {
        cout<< B[i]<<" ";
    }
    int M[m+n];
    for (int i = 0; i < m; i++) {
        M[i] = A[i];
    }
    cout<<endl;
   for (int i = 0; i < n; i++) {
        M[i+m] = B[i];
    }
    cout<<endl;
   cout<<"A rray M = ";
   for (int i = 0; i < m+n; i++) {
        cout<< M[i]<<" ";
    }

    return 0;
}
