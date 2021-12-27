#include <iostream>
using namespace std;
int main(){
char ch;
cin>>ch;
if(ch>='a' && ch<='z'){
  cout<<"Lower case";
}
if(ch>='A' && ch<='Z'){
  cout<<"Upper case";
}
if(ch>='0' && ch<='9'){
  cout<<"Numeric";
}

return 0;
}
