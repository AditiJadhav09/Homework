class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1,sum=0,value;
        while(n!=0){
            value= n%10;
            product= product*value;
            sum= sum+value;
            n=n/10;
        }
        return product-sum;
    }
};
