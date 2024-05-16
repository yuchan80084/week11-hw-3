#include<iostream>
#include"store.h"
using namespace std;

int main()
{
    store A[5], *B;
    
    cout  << sizeof(A) << endl;
    for (int i = 0; i < 5; i++)
    {
        A[i] = store(1000 + 100 * i, 500, 600, 1000 * (i + 1) + 500, i + 2, 3, 4, i + 5);
    }

    cout << A[2].mango.many << " " << A[2].mango.price << endl;
    cout << (A + 4)->mango.many << " " << (A + 4)->mango.price << endl;

    B = A + 2;
    
    cout << B[0].mango.many << " " << B[0].mango.price << endl;
    cout << (B + 2)->mango.many << " " << (B + 2)->mango.price << endl;

    return 123;
}