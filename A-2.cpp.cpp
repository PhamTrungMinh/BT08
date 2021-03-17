#include <iostream>
using namespace std;

//a mỗi phần tử của a có địa chỉ cách nhau 1 bit

/*b*/int main( )
{
   int a[4] = {1,2,3,4};
   int* cp=a;
   for (int i = 0; i<4; i++) {
      cout << (void*) (cp+i) << " : " << *(cp+i) << endl;
   }
   return 0;
}

/*c*/int main( )
{
   double a[4] = {1,2,3,4};
   double* cp=a;
   for (int i = 0; i<4; i++) {
      cout << (void*) (cp+i) << " : " << *(cp+i) << endl;
   }
   return 0;
}

//d chỉ in ra phần tử thứ nhất và thứ 3
