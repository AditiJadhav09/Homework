/*You have been given an array of size n, where n is equal to 2m+1, now in the given array 'm' number are given twice and one number is given only once.
You need to find nd return that unique number*/
int findUnique (int *arr,int size){
int ans=0;
for(int i==0;i<size;i++){
ans=ans^arr[i];
}
  return ans;
}
