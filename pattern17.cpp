/*3
C 
B C 
A B C*/
#include <iostream>
using namespace std;
int main(){
int i=1,n;
cin>>n;


while(i<=n){
    int j=1;
    char value='A'+n-i;
  while(j<=i){
    cout<<value<<" ";
   value++;
    j++;
    
  }
   
  cout<<"\n";
  i++;
}
}
