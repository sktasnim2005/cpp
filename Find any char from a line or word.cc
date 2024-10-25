// 1at way

#include<iostream>
using namespace std;

int main()
{
   char test[30]={"Akash's name is sex"};
   for(int i=0;i<30;i++){
        if(test[i]=='x'){
          cout<<i<<endl;
          break;
        }
   }
    return 0;
}


//2nd way

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "my name is x";
    string target = "x";

    size_t pos = a.find(target);


        cout <<pos;


    return 0;
}


//3rd way

#include <iostream>
using namespace std;

int main() {
    string s = "Mid Term examination";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'x') {
            cout << i << endl;
            break;
        }
    }
    return 0;
}

