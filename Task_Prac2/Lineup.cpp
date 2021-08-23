//
// Created by 欧阳磊落 on 2021/5/15.
//

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<set>
#include<list>
using namespace std;

class client
{
public:
    int arr_time;
    int serve_time;
public:
    client()
    {
        arr_time = rand()%20+1;
        serve_time = rand()%10+1;
    }
};

struct cmp2
{
    bool operator()(client a,client b)
    {//<为大顶堆，>为小顶堆
        return (a.serve_time + a.arr_time) < (b.serve_time + b.arr_time);
    }
};

struct cmp1
{
    bool operator()(client a,client b)
    {//<为大顶堆，>为小顶堆
        return a.arr_time < b.arr_time;
    }
};

int test01()
{
    int num_manager = 5;
    int wait_time = 0;
    set<client,cmp1> myset1;
    set<client,cmp2> myset2;
    list<client> mylist;

    srand((unsigned)time(0));
    client c0;
    client c1;
    client c2;
    client c3;
    client c4;
    client c5;
    client c6;
    client c7;
    client c8;
    client c9;

    myset1.insert(c0);
    myset1.insert(c1);
    myset1.insert(c2);
    myset1.insert(c3);
    myset1.insert(c4);
    myset1.insert(c5);
    myset1.insert(c6);
    myset1.insert(c7);
    myset1.insert(c8);
    myset1.insert(c9);

    for(int i = 0; i < num_manager; i++)
    {
        myset2.insert(*(myset1.cbegin()));
        myset1.erase(myset1.cbegin());
    }

    for(int i = 0; i < num_manager; i++)
    {
        mylist.push_back(*(myset2.cbegin()));
        myset2.erase(myset2.cbegin());
    }

    while(mylist.size())
    {
        wait_time++;
        for(auto it = mylist.begin(); it != mylist.end(); it++)
        {
            if(it->arr_time == wait_time)
            {
                it->arr_time ++;
                it->serve_time --;
                if(it->serve_time == 0)
                {
                    mylist.pop_front();
                    if(!myset1.empty())
                    {
                        mylist.push_back(*(myset1.cbegin()));
                        myset1.erase(myset1.cbegin());
                        it = mylist.begin();
                    }
                }
            }
        }
    }

    return wait_time;
}

//int main()
//{
//    test01();
//    return 0;
//}