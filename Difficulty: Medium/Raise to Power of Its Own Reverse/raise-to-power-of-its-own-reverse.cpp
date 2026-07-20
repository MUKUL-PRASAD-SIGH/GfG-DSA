class Solution {
  public:
    int reverseExponentiation(int n) {
        // code here
        long long N=(long long)n;
        int x=rev(N);
        if(N<0)
        {
            x=1/x;
            N=-N;
        }
        return power(N,x);
    }
    double power(double x, long long n) {
    if (n == 0)
        return 1;

    double half = power(x, n / 2);

    if (n % 2 == 0)
        return half * half;

    return half * half * x;
}
    int rev(int x){
          
          int temp=0;
        while(x>0){
            int rem;
            rem=x%10;
            temp=temp*10+rem;
            x=x/10;
            
        }
        return temp;
    }
};