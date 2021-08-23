//
// Created by 欧阳磊落 on 2021/5/21.
//
#include <iostream>

using namespace std;

template<class T>
T arithmean(T arr[], int size)
{
    T mean = 0;
    for(int i = 0; i < size; i++)
        mean += arr[i];
    return mean/size;
}

//int main()
//{
//    int a[] = {1,2,3,4,5,6,7,8,9,10};
//    long b[] = {2,4,6,8,10,12,14,16,18,20};
//    double c[] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,11};
//    cout << "mean of int is\t" << arithmean(a,sizeof(a)/sizeof(int)) << endl
//         << "mean of long is\t" << arithmean(b,sizeof(b)/sizeof(long)) << endl
//         << "mean of double is\t" << arithmean(c,sizeof(c)/sizeof(double)) << endl;
//    return 0;
//}