/*Pair Sum*/
/*You are given an arr of size n and an integer s.Return the list of all pairs of elements such that each sum of elements of each pair is equal to s*/
/* 5 5
   1 2 3 4 5
   output
   1 4
   2 3
 */
vector<vector<int>> pairSum (vector<int> &arr,int s){
vector<vector<int>> ans;
  for(int i=0;i<arr.size();i++){
   for(int j=i+1;j<arr.size();j++)
      if(arr[i] + arr[j]==s){
      vector<int> temp;
         temp.push_back(min(arr[i],arr[j]));
         temp.push_back(max(arr[i],arr[j]));
         ans.push_back(temp);
      }
  }
   sort(arr.begin(),arr.end());
   return ans;
}
