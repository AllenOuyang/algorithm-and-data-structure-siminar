//
// Created by 欧阳磊落 on 2021/7/1.
//

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class employee
//{
//private:
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
//    bool operator==(employee other);
//    bool operator<(employee other);
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
//bool employee::operator==(employee other)
//{
//    if( first_name.length() + last_name.length() == other.last_name.length() + other.first_name.length())
//        return true;
//    return false;
//}
//
//bool employee::operator<(employee other)
//{
//    if( first_name.length() + last_name.length() < other.last_name.length() + other.first_name.length())
//        return true;
//    return false;
//}

//int main()
//{
//    employee e1, e2, e3;
//    e1.get_emp(1,"Mary","Beauty",1000);
//    e2.get_emp(2,"Tom","Hason",13000);
//    e3.get_emp(3,"Lonsh","Bob",9999);
//
//    e1.display_emp();
//    e2.display_emp();
//    e3.display_emp();
//
//    if(e1 == e2)
//        cout << "e1 = e2" << endl;
//    else
//        cout << "e1 != e2" << endl;
//
//    if(e1 < e2)
//        cout << "e1 < e2" << endl;
//    else
//        cout << "e1 >= e2" << endl;
//}