#include<iostream>
using namespace std;
int main()
{
        cout<<"Select size of Array : ";
        int n;
        cin>>n;
        int a[n];
        cout<<"Enter value of Array : ";
        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        int k;
        cout<<"Value of k : ";
        cin>>k;

        for(int i=k;i<n-1;i++){
            a[i]=a[i+1];
        }

       /* for(int i=n-1;i>k;i--){
            a[i+1]=a[i];
        }
        */
        cout<<"Final Array : ";
        for(int i=0;i<n-1;i++){
          cout<<a[i]<<" ";
        }


}

