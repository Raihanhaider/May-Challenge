// Number Complement

class Solution {
public:
    int findComplement(int num) {
        
        //Using bitset
        /*bitset<32> b(num);
        int mxmi;
        for(int i=0;i<32;i++)
            if(b[i]==1)
                mxmi=i;
        for(int i=0;i<=mxmi;i++)
            if(b[i]==0)
                b[i]=1;
            else
                b[i]=0;
        
        int ans = (int) b.to_ulong();
        return ans;*/

        //Simple Approach
        if(num==0)
            return 1;
        long long int ans=0;
        long long int p=1;
        while(num)
        {
            long long int rem = num%2;
            rem = !(rem);
            ans += rem*p;
            p   = p*2;
            num = num/2;
        }
        return (int)ans;
    }
};