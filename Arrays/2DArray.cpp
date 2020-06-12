int hourglassSum(vector<vector<int>> arr) 
{
int max = INT_MIN ;
vector<vector<int>> sum(4,vector<int>(4,0));
for (int i=0; i<=3; i++)
{
for (int j=0; j<=3; j++)
    {
        sum[i][j]= arr[i][j]+sum[i][j]+arr[i][j+1]+arr[i][j+2];
        sum[i][j]= arr[i+1][j+1]+sum[i][j];
        sum[i][j]= arr[i+2][j]+sum[i][j]+arr[i+2][j+1]+arr[i+2][j+2];
    }

}
for (int i=0; i<=3; i++)
{
for (int j=0; j<=3; j++)
    {
        if(sum[i][j]>=max)
        {
            max = sum[i][j];
        }

    }

}

return max;
}
