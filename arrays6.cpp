/*Triplets with given sum*/
/*You are given an array arr consisting of n integers,your task is to find all the distinct triplets present in the array which adds upto given number k*/
vector<vector<int>> findTriplets(vector<int> arr,int n,int K){
for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
    for(int k=j-1;k<n;k++){
       if(i+j+k== K)
         cout<<i<<j<<k;
    }
  }
}
}
