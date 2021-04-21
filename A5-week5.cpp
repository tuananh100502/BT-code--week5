#include <iostream>
using namespace std;
int main()
{
    int a;
    int* b = new int;
    cout << &a << " " << b << endl;
    *b = a;
    cout << &a << " " << b << endl;
    b = &a;
    cout << &a << " " << b << endl;
    // bien luon co dinh du con tro di dau .

    int c;
    b = &c;
    cout << &c << " " << b << endl;
    // Có the tham chieu toi mot bien khác vi dích ban dau cua no .
    return 0;
}
