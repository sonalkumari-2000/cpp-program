#include<iostream>
using namespace std;
#include<stack>
using namespace std;
int main(){

stack<int>newstack;
for(int i=0;i<5;i++)
newstack.push(i);
cout<<"elements are using :";
while(!newstack.empty())
{
	cout<<" "<<newstack.top();
	newstack.pop();
	
}
}
