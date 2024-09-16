#include <iostream>
using namespace std;
template <class T> class info {
      public:
      info(T A){
            cout << "A = " << A<< " size of data in bytes:" << sizeof(A)<<endl;
            }
};
int main()
{
    info<char> p('x'); //here  p is object
    info<int> q(22); //here  q is object
    info<float> r(2.25); //here  r is object
    return 0;
}

