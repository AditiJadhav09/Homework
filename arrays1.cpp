/*Swap Alternate*/
/* input arr[5]={1,2,3,4,5} then output arr[5]={2,1,4,3,5}*/
#include <iostream>
using namespace std;
int main()
{
    int arr[5]={2,4,1,7,8};
    for(int i=0;i<5;i+=2){
        if(i+1 < 5){
            int temp;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
