/*3
A B C 
B C D  
C D E*/
#include <iostream>
using namespace std;
int main(){
int i=1,n;
char value='A';
cin>>n;
while(i<=n){
    int j=1;
    char tp=value;
  while(j<=n){
    cout<<tp<<" ";
    tp++;
    j++;
    
  }
   value++;
  cout<<"\n";
  i++;
}
}
