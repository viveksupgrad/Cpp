#include <iostream>
using namespace std;
//function to determine longest subarray that equals sum k, the size of subarray needs to be returned
int subArraySumK(int arr[], int size, int k)
{
    int len = 0;
    for(int i=0; i<size; i++)
    {   int sum = 0;
        for(int j=i; j<size; j++)
        {   

            sum += arr[j];
            if(sum==k)
                {len = max(len, j-i+1);}
            
            
        }

    }
return len;

}

int main()
{   
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<subArraySumK(arr, size, k);

    
    return 0;
}
