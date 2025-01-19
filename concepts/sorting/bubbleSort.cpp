#include <iostream>
using namespace std;

void swap(int x, int y){
    
    int temp = x;
    x = y;
    y = temp;

}
void bubbleSort(int arr[], int n){
    bool swapped;

    for(int i=0; i<n-1; i++){
        swapped = false;

        for(int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }  
            }
         if(!swapped){
        break;
    }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        
    }
    
    }

int main(){
    int arr[] = {1,2,9, 11, 3};
    
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    bubbleSort(arr, 5);
}
