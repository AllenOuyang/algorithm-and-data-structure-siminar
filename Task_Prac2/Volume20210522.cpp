//
// Created by 欧阳磊落 on 2021/5/22.
//

#include<iostream>
using namespace std;

struct Distance
{
    int m;
    float cm;
};

class Volume
{
public:
    Distance length , width , height;
    float v;
public:
    Volume()
    {
        length.m = length.cm = 0;
        width.m = width.cm = 0;
        height.m = height.cm = 0;
    }
    Volume(Distance l , Distance w , Distance h)
    {
        length = l;
        width = w;
        height = h;
    }
    float calVolume();
};

float Volume::calVolume()
{
    float l = length.m + length.cm/100;
    float w = width.m + width.cm/100;
    float h = height.m + height.cm/100;
    return l*w*h;
}

//int main()
//{
//    Distance l{5,15.3};
//    Distance w{4,70.1};
//    Distance h{3,20};
//    Volume V(l,w,h);
//    cout << V.calVolume() << endl;
//    return 0;
//}