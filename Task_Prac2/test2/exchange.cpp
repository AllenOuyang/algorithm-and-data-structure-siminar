//
// Created by 欧阳磊落 on 2021/5/27.
//

#include <iostream>

using namespace std;

template <class T>
void exchange(T& a,T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

//int main()
//{
//    int a = 10;
//    int b = 20;
//    cout << "a = " << a << " b = " << b << endl;
//    exchange(a, b);
//    cout << "a = " << a << " b = " << b << endl;
//
//    float c = 10.5;
//    float d = 20.5;
//    cout << "c = " << c << " d = " << d << endl;
//    exchange(a, b);
//    cout << "c = " << c << " d = " << d << endl;
//
//    char e = 'a';
//    char f = 'b';
//    cout << "e = " << e << " f = " << f << endl;
//    exchange(a, b);
//    cout << "e = " << e << " f = " << f << endl;
//
//    return 0;
//}
