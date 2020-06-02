/*
Birthday Chocolate in cpp
*/

int birthday(vector<int> s, int d, int m)
{
    int sum = 0; // for storing the total no of ways
    int len = s.size();
    for (int i=0; i<len; i++)
    {   
        int sp = 0; // for storing the sum of the m digits
        /*
        if sum of current position and m is greater than size of s then there will be overflow
        so need to check just return the sum
        */
        if((i+m)>len) 
        {
            return sum;
        }
        for(int j=0; j<m; j++)
        {
            sp = sp+ s[i+j];     
        }
        if(sp==d)
        {
            sum++;
        }
        
    }

    return sum;
}
