#include <iostream>
using namespace std;
int main(){
int i=1,sum=0,n;
cin>>n;  
while(i!=n+1){
if(i%2==0){
sum+=i;
}
  i++;
}
cout<<sum;  
return 0;
}
