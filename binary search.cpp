#include <iostream>

using namespace std;
 int binarySearch(int array[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
     return -1;
}
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
     int key;
     cout<<"enter the value of key:";
     cin>>key;
     cout<<binarySearch(array,n,key);
    return 0;
}
