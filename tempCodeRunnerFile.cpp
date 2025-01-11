#include<iostream>
#include<string>
using namespace std;

            class Employee
            {
                public:
                    string name;
                    string company;
                    int age;
            };

int main()
{
    Employee e1;
    e1.name="arsh";
    cout<<e1.name;
    return 0;
}