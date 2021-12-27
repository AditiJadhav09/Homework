/*n=3
1 2 3
4 5 6
7 8 9
*/
#include <iostream>
using namespace std;
int main(){
int i=1,c=1,n;
cin>>n;
while(i<=n){
    int j=0;
  while(j<n){
    cout<<c<<" ";
    c++;
    j++;
  }
  cout<<"\n";
  i++;
}
}
