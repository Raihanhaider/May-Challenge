// Valid Square or not

class Solution {
public:
    bool isPerfectSquare(int n) {
        if(n==1||n==0)
            return true;
        long long int low=1;
        long long int high=n/2;
        long long int t_n = n;
        
        while(low<=high)
        {
            long long int mid=low+(high-low)/2;
            long long int t = mid*mid;
            if( t==t_n )
                return true;
            if(  t<t_n )
                low=mid+1;
            else
                high=mid-1;
        }
        
        return false;
    }
};