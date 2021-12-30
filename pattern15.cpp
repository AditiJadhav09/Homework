/*3
A 
B C 
D E F */
#include <iostream>
using namespace std;
int main(){
int i=1,n;
char value='A';
cin>>n;
while(i<=n){
    int j=1;
  while(j<=i){
    cout<<value<<" ";
   value++;
    j++;
    
  }
   
  cout<<"\n";
  i++;
}
}
