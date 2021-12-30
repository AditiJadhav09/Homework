/*
3
A
B B
C C C*/
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
   
    j++;
    
  }
   value++;
  cout<<"\n";
  i++;
}
}
