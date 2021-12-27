/*n=3
3 2 1 
3 2 1
3 2 1
*/
#include <iostream>
using namespace std;
int main(){
int i=1,n;
cin>>n;
while(i<=n){
    int j=0;
  while(j<n){
    cout<<n-j<<" ";
    j++;
  }
  cout<<"\n";
  i++;
}
}
