#include <iostream>
using namespace std;


//time complexity O(n^2)
void bubbleSort(int arr[], int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++ ){
            if(arr[j]>arr[j+1]){
                //int temp = arr[j];
                //arr[j] = arr[j+1];
                //arr[j+1] = temp;


                swap(arr[j], arr[j+1]);
            }

        }
    }

  
}
//optimisation



int main()
{
    cout<<"enter array size"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"raw array"<<endl;

     for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
  cout<<endl;
  bubbleSort(arr, n);
  cout<<endl;
  cout<<"sorted array"<<endl;  
  for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
