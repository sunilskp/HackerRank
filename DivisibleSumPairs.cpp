/*
Divisible Sum Pairs in C++
*/

int divisibleSumPairs(int n, int k, vector<int> ar) {
   int sum = 0 ; // to count the total number of ways
   for(int i=0; i<n-1; i++)
   {
       for(int j=i+1; j<n; j++ )
       {
           int s = ar[i]+ar[j]; // to store the sum of two pairs
           if(s%k==0)
           {
               sum++;
           }
       }
   }
return sum;
}
