/*Sort 0s and 1s
ip 011001
op 000111
*/
#include<iostream>
using namespace std;
void sortarray( int arr[],int n){
int left=0,right=n-1;
  while(left<right){
    while(arr[i]==0){
      left++;
    }
   while(arr[j]==1){
     right--;
    }
    if(arr[left]==1 && arr[right]==0 && left<right){
      swap(arr[left],arr[right]);
      left++;
      right--;
    }  
  }
}
  
  
int printArray(int arr[],int n){
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
cout<<"\n";
}


int main(){
int arr[8]={0,1,1,1,0,0,0,1};
sortarray(arr,8);
printArray(arr,8);

return 0;
}



