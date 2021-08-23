//
// Created by Ouyang Leiluo on 2021/5/27.
//
#include <iostream>
#include <string>

using namespace std;
const int MAX_SIZE = 10;

class safearray
{
private:
    int arr [MAX_SIZE];
public:
    void putel(int n,int elemval)
    {
        try
        {
            if (n < 0 || n >= MAX_SIZE)
            {
                throw n;
                exit(1);
            }
            else
                arr[n] = elemval;
        }
        catch(int n)
        {
            cout << "Ошибочный индекс! : " << n << endl;
        }
    }

    int getel(int n)
    {
        try
        {
            if (n < 0 || n >= MAX_SIZE)
            {
                throw n;
                exit(1);
            }
            else
                return arr[n];
        }
        catch(int n)
        {
            cout << "Ошибочный индекс! : " << n << endl;
        }
    }
};

//int main()
//{
//    safearray mySafeArr;
//    for ( int i = 0; i < MAX_SIZE; i++)
//        mySafeArr.putel( i , i );
//    for ( int i = 0; i < MAX_SIZE; i++ )
//    {
//        cout << "Array[" << i << "] = " << mySafeArr.getel(i) << endl;
//    }
//
//    // test putel
//    mySafeArr.putel(12,12);
//    //test getel
//    cout << mySafeArr.getel(12);
//    return 0;
//}
