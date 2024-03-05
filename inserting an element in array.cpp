#include<iostream>
using namespace std;
int main(){

int array[4]={34,56,45,46};
int pos=2;
int value=90;
int j=4;
while(j>=pos){
	array[j+1]=array[j];
	j=j-1;
	
}
array[pos]=value;
for(int i=0;i<5;i++){
	cout<<" "<<array[i];
}

}



