vector<int> findArrayIntersection(vector<int> &arr1,n,vector<int> &arr2,m){
  vector<int> ans;
for(int i=0;i<n;i++){
int element = arr1[i];
  for(int j=0;j<m;j++){
  if(element==arr2[j]){
   ans.push_back(element);
    arr2[j]=INT_MIN;
    break;
  }
  }
}
  return ans;
} 

OPTIMISATION 1
  class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        int i = 0, j = 0;
        vector<int> v;
        sort(a, a + n);
        sort(b, b + m);
        while(i < n && j < m)
        {
            if(i > 0 && a[i] == a[i-1])
            {
                i++; 
                continue;
            }
            if(a[i] < b[j])
                i++;
            else if(a[i] > b[j])
                j++;
            else if(a[i] == b[j])
            {
                v.push_back(a[i]);
                i++;  j++;
            }
        }
        return v.size();
    }
};
