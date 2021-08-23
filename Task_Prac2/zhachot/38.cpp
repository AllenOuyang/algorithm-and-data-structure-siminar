//
// Created by 欧阳磊落 on 2021/7/1.
//

//#include <iostream>
//#include <string>
//#include <set>
//
//using namespace std;
//
//class employee
//{
//public:
//    int num_employee;
//    string first_name;
//    string last_name;
//    float salary;
//public:
//    employee()
//    {
//        num_employee = 0;
//        first_name = "Tim";
//        last_name = "ducan";
//        salary = 0;
//    }
//    void get_emp(int num, string first, string last, float sla);
//    void display_emp();
//    bool operator==(const employee& other) const;
//    bool operator<(const employee& other) const;
//};
//
//void employee::get_emp(int num, string first, string last, float sla)
//{
//    num_employee = num;
//    first_name = first;
//    last_name = last;
//    salary = sla;
//}
//
//void employee::display_emp()
//{
//    cout << "number : " << num_employee << "name : " << first_name << " " << last_name << "salary : " << salary << endl;
//}
//
//bool employee::operator==(const employee& other) const
//{
//    if( first_name.length() + last_name.length() == other.last_name.length() + other.first_name.length())
//        return true;
//    return false;
//}
//
//bool employee::operator<(const employee& other) const
//{
//    if( first_name.length() + last_name.length() < other.last_name.length() + other.first_name.length())
//        return true;
//    return false;
//}
//
//int main()
//{
//    set<employee> setofemp;
//    employee e1, e2;
//    e1.get_emp(1,"Mary","Beauty",1000);
//    e2.get_emp(2,"Tom","Hason",13000);
//
//    setofemp.insert(e1);
//    setofemp.insert(e2);
//
//
//    for(auto it = setofemp.begin(); it != setofemp.end(); it++)
//    {
//        cout << (*it).num_employee << " " << (*it).first_name << " " << (*it).last_name << " " << (*it).salary << endl;
//    }
//
//    string first,last;
////    cin >> first >> last;
//    first = "Mary";
//    last = "Beauty";
//
//    //Find;
//    for(auto it = setofemp.begin(); it != setofemp.end(); it++)
//    {
//        if((*it).first_name == first && (*it).last_name == last)
//        {
//            cout << (*it).num_employee << " " << (*it).first_name << " " << (*it).last_name << " " << (*it).salary << endl;
//        }
//    }
//
//    return 0;
//}