//
// Created by 欧阳磊落 on 2021/5/22.
//

#include <iostream>
using  namespace std;

void zSmall(int& a, int& b)
{
    a > b ? b : a = 0;
    cout << "a = " << a << " " << "b = " << b << endl;
    cout << &a << " " << &b << endl;
}

//int main()
//{
//    int a = 10 , b =100;
//    cout << "a = " << a << " " << "b = " << b << endl;
//    cout << &a << " " << &b << endl;
//    zSmall(a,b);
//    return 0;
//}