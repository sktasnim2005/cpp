#include <iostream>
using namespace std;

int main() {
    int A[] = {12, 15, 25, 28, 35, 45, 52, 60};
    for (int i = 0; i < 8; i++) {
        cout << A[i] << " ";
    }
    cout<<endl;
    int x=99;


    for (int i = 0; i < 9; i++) {
           if(A[i]==x){
             A[i]=x;
             A[i+1]=A[i];
           }
    }


    cout << "After Insertion: " << endl;
    for (int i = 0; i < 9; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
