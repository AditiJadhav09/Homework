/*n=3
1
2 3 
4 5 6 
*/
#include <iostream>
using namespace std;
int main(){
int i=1,c=1,n;
cin>>n;
while(i<=n){
    int j=1;
  while(j<=i){
    cout<<c<<" ";
    j++;
    c++;
  }
  cout<<"\n";
  
  i++;
}
}
