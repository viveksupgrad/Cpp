//code to find reverse of a number using pointer
#include <iostream>
using namespace std;

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}
 void reverse(int array[], int size)
 {


    int *ptr = array;
    int *ptr2 = array+size-1;
    while (ptr<ptr2){
        swap(ptr,ptr2);
        ptr++;
        ptr2--;
    }
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
    reverse(arr, size);

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
