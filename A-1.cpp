#include <iostream>
using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   cout << &x << endl;
}
void g(int yval)
{
   int y;
   cout << &y << endl;
}

int main()
{
   f(7);
   g(11);
   return 0;
}

// địa chỉ 2 biến giống nhau do stack frame khi gọi hàm f giống khi gọi hàm g
// khi thực hiện xong hàm f thì giá trị x tại địa chỉ đó biến mất, gọi hàm g thì giá trị của y thay vào chỗ đó
