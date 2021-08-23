//
// Created by 欧阳磊落 on 2021/5/21.
//

#include <iostream>
using namespace std;

int size = 10;
int a[10] = {0};

int getel(int j)
{
    try
    {
        if(j < 0 || j > size - 1)
            throw j;
        else
            return a[j];
    }
    catch (int j)
    {
        cout << j << endl;
    }
}

void putel(int j, int ElemVal)
{
    try
    {
        if(j < 0 || j > size - 1)
            throw "Error";
        else
            a[j] = ElemVal;
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }
}

//int main()
//{
//    putel(12,6);
//    cout << getel(12) << endl;
//    return 0;
//}
