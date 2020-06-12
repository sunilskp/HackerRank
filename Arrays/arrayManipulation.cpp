/*

For this we will make an array in which we will enter only two value per iteration
1. A[Start_Index] += k
2. A[End_index+1] -= k 
and then we will calculate max prefix sum of the array A. 

You can have a look on this example:
5 3 
1 2 100 |  100    0   -100    0     0         
2 5 100 |  100   100  -100    0     0   
3 4 100 |  100   100    0     0    -100   this is the modified array

Now we will calculate the max prefix sum of this array which will be answer.
As in this case it is 200.

NOTE:In this algo,I have taken 1 as a first index but in program it will be from 0.
*/



long arrayManipulation(int n, vector<vector<int>> queries) {
   
    vector<long int> A(n,0); // for storing the sum or difference of K's value in the vector
    long len = queries.size();
    for(long i=0; i<len; i++)
    {
        A[(queries[i][0])-1] = A[(queries[i][0])-1]+queries[i][2]; // step 1 as described above.
        if(queries[i][1]<n) // checking for segmentation fault
        {
            A[(queries[i][1])] = A[(queries[i][1])]-queries[i][2]; // step 2 as described above.
        }
       
    }
    long sum =0,x=0;
    // to calculate maximum prefix array sum
    for(long i=0; i<n; i++)
        {
            x = x + A[i];
            if(x>sum)
            {
                sum = x;
            }
        }
    return sum;
}
