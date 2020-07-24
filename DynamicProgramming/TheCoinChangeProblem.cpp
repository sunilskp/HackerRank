long getWays(int n, vector<long> c) 
{
 long int m = c.size()+1;
 int t = n+1,i,j;
    long int A[m][t];
    for( j=0; j<t; j++)
        {
            A[0][j]=0;            
        }
    for(i=0; i<m; i++)
    {
        A[i][0]=1;
    }
    
    for(i=1; i<m; i++)
    {
        for(j=1; j<t; j++)
        {
            if(j>=c[i-1])
            {
                A[i][j]= A[i-1][j]+A[i][j-c[i-1]];
            }
            else 
            {
            A[i][j]= A[i-1][j];
            }
        }
    }

return A[m-1][t-1];
}
