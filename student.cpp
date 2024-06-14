#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    int roll_no;
    int age;
    char grade;
    public:
    void setname(string name)
    {
        this->name=name;
    }
    void setrollNo(int roll_no)
    {
        this->roll_no=roll_no;
    }
    void setage(int age)
    {
        this->age=age;
    }
    void setgrade(char grade)
    {
        this->grade=grade;
    }

    string getName()
    {
        return name;
    }
    int getrollNo()
    {
        return roll_no;
    }
    int getAge()
    {
        return age;
    }
    char getGrade()
    {
        return grade;
    }
     
};
int main()
{
    Student s1;
    s1.setname("sonal");
    s1.setrollNo(45);
    s1.setage(35);
    s1.setgrade('A');
    cout<<s1.getName()<<endl;
    cout<<s1.getrollNo()<<endl;
    cout<<s1.getAge()<<endl;
    cout<<s1.getGrade()<<endl;

}