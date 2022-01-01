class Solution {
public:
    int reverse(int x) {
        //2 cases 1 normal range,2 the reverse of that number is out of range for integer data type
        int ans=0,digit=0;
        while(x!=0){
        digit=x%10;
        if((ans>(INT_MAX/10))||(ans<(INT_MIN/10))){
            return 0;
        }
        ans=ans*10+digit;
        x=x/10;
        }
        return ans;
    }
};
