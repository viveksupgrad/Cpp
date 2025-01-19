#include <iostream>
using namespace std;


void selectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int mi = i;

        for(int j= i+1; j<n; ++j){
            if(arr[j]<arr[mi]){
                mi = j;
            }

        }
        swap(arr[i], arr[mi]);
    }


}

int main()
{
   /* cout<<"enter array size"<<endl;
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
  cout<<endl;*/
  int arr2[] = {-1, 2, 5, 0, 7, 0};
  int n2 = 6;
  selectionSort(arr2, n2);
  cout<<endl;
  cout<<"sorted array"<<endl;  
  for(int i = 0; i<n2; i++){
        cout<<arr2[i]<<" ";
    }

}
