/*n=3
1
2 3 
3 4 5 
*/
#include <iostream>
using namespace std;
int main(){
int i=1,n;
cin>>n;
while(i<=n){
    int j=1,value=i;
  while(j<=i){
    cout<<value<<" ";
    value++;
    j++;
    
  }
  cout<<"\n";
  
  i++;
}
}
