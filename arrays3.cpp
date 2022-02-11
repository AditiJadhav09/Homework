/*Find Duplicates*/
/*Array from 1 to n-1,out of wich one is repeated,find that number*/
int FindDuplicate (vector<int> &arr){
int ans=0;
  for(int i=0;i<arr.size();i++){
  ans=ans^arr[i];
  }
  for(int i=1;i<arr.size();i++){
  ans=ans^i;
  }
  return ans;
}
