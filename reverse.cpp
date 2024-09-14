#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  char str[100],ch;
  int i,j;
  cout<<"Enter a number : ";
  cin>>str;
  int length=strlen(str);
  for(i=0,j=length-1;i<=length/2,j>=length/2;i++,j--){
          ch=str[i];
          str[i]=str[j];
         str[j]=ch;
  }
  cout<<"Reversed number = "<<str;
}
