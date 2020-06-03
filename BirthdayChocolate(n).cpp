 /*
 Efficient method to solve the Birthday Chocolate
 Take pen and paper and do whatever written in the code 
 */
 
 int birthday(vector<int> s, int d, int m) {
 int len = s.size();
 int ways = 0;
    for(int i=1; i<len; i++)
    {
        s[i] = s[i]+s[i-1];  
    }

    if(m>len)
    {
        return 0;
    }
    else
    {
        for(int i=m-1; i<len; i++)
        {
            if(s[i]- s[i-m]== d )
            {
                ways++;
            }
        }
    }
return ways;
}
