#include <bits/stdc++.h>
using namespace std;
  
int main()
   {
        int siz,op; 
        cin>>siz>>op;
        long int arr[siz],arr1[siz]; // two array of same size 
        for(int i=0; i<siz; i++)
            { 
                cin>>arr[i]; // taking input
            } 
        for(int i=0; i<siz; i++) 
            { 
                // if (index - number of operations) is negative 
                if(i-op<0) 
                { 
                    int k = op-i;
                    arr1[siz-k]=arr[i];
                } 
                else   // if (index - number of operations) is positive 
                { 
                    int k = i-op; 
                    arr1[k] = arr[i]; 
                } 
            } 
        for(int i=0; i<siz; i++) 
        { 
            cout<<arr1[i]<<" "; // printing the array
        }

    return 0; 
    }
