int power(int a,int b,int m)
{
    int ans = 1;
    while(b > 0)
    {
        if(b&1){ans *= a;ans %= m;}
        a *= a;
        a %= m;
        b >>= 1;
    }
    return ans;
}