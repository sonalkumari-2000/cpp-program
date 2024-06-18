#include<iostream>
using namespace std;
template <class T>
class Add
{
    public:
    Add(T a,T b)
    {
        cout<<a+b;
    }
};
int main(){
    Add <float> a1(5,9.34);
    return 0;
}