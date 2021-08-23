//
// Created by 欧阳磊落 on 2021/7/1.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class employee
{
public:
    int num_employee;
    string first_name;
    string last_name;
    float salary;
public:
    employee()
    {
        num_employee = 0;
        first_name = "Tim";
        last_name = "ducan";
        salary = 0;
    }
    void get_emp(int num, string first, string last, float sla);
    void display_emp();
    bool operator==(const employee& other) const;
    bool operator<(const employee& other) const;
};

void employee::get_emp(int num, string first, string last, float sla)
{
    num_employee = num;
    first_name = first;
    last_name = last;
    salary = sla;
}

void employee::display_emp()
{
    cout << "number : " << num_employee << " name : " << first_name << " " << last_name << "salary : " << salary << endl;
}

bool employee::operator==(const employee& other) const
{
    if( first_name.length() + last_name.length() == other.last_name.length() + other.first_name.length())
        return true;
    return false;
}

bool employee::operator<(const employee& other) const
{
    if( first_name.length() + last_name.length() < other.last_name.length() + other.first_name.length())
        return true;
    return false;
}

int main()
{
    vector<employee> vctofemp;
    employee e1, e2, e3;
    e1.get_emp(1,"Mary","Beauty",1000);
    e2.get_emp(2,"Tom","Hason",13000);
    e3.get_emp(3,"Lonsh","Bob",9999);

    vctofemp.push_back(e1);
    vctofemp.push_back(e2);
    vctofemp.push_back(e3);

    auto it1 = vctofemp.begin();
    auto it2 = vctofemp.end();

    for(auto it = vctofemp.begin(); it != vctofemp.end(); it++)
    {
        (*it).display_emp();
    }

    sort(it1, it2);

    cout << "------------------------" << endl;

    for(auto it = vctofemp.begin(); it != vctofemp.end(); it++)
    {
        (*it).display_emp();
    }


    return 0;
}