/*n=3
1
2 2 
3 3 3
*/
#include <iostream>
using namespace std;
int main(){
int i=1,n;
cin>>n;
while(i<=n){
    int j=1;
  while(j<=i){
    cout<<i<<" ";
    j++;
  }
  cout<<"\n";
 
  i++;
}
}
