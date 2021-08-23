//
// Created by 欧阳磊落 on 2021/6/17.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

//int main()
//{
//    set<int> odd;
//    vector<int> even;
//    even.push_back(0);
//    even.push_back(2);
//    even.push_back(4);
//    even.push_back(6);
//    even.push_back(8);
//    odd.insert(1);
//    odd.insert(3);
//    odd.insert(5);
//    odd.insert(7);
//    odd.insert(9);
//
//    set<int>::iterator it1 = odd.begin();
//    set<int>::iterator it2 = odd.end();
//    vector<int>::iterator it3;
//    it3 = copy(it1,it2,even.end());
//
//    cout << "size of 'even' is " << even.size() << endl;
//    cout << "size of 'odd' is " << odd.size() << endl;
//    for(vector<int>::iterator it = even.begin(); it != it3; it++)
//    {
//        cout << *it << endl;
//    }
//    return 0;
//}