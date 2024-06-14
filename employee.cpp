#include<iostream>
using namespace std;
class Employee
{
public:
int id;
string name;
double salary;
 void details(int id,string name,double salary){
    cout<<name<<salary<<id;
 }
 };
int main(){
    Employee e1;


    
    // e1.name="sonal";
    // e1.salary=300000;
    // e1.id=12310511;
    e1.details(12310511,"sonal",123400.00);
    return 0;
}
    

