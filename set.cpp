#include<iostream>
#include<set>
#include<string>
#include<functional>
using namespace std;
class Person
{
    public:
    float age;
    string name;
    bool operator < (const Person& rhs) const{return age<rhs.age;}
    bool operator>(const Person& ss) const{return age>ss.age;}
};
int main()
{
    multiset<Person,std::greater<Person>>Set={{19,"chandu"},{21,"srinu"},{21,"kesava"}};
    for(const auto &e: Set)
    {
        cout<<e.age<<" "<<e.name<<"\n";
    }
}
