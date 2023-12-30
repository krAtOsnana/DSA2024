
#include<iostream>
using namespace std;
 int binarySearch(int arr[],int size,int key)
 {
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;  //OPTMISATION OF int mid=(start+end)/2;
    while (start<=end)
    {
        if (arr[mid] == key)
        return mid;
        else if(key > arr[mid] )
        {
            start = mid + 1;
        }
        else if (key < arr[mid] )
        {
            end = mid - 1;
        }
        mid =start + (end - start )/2;

    }
    return -1;
 }
int main()

{
    int arr[7]={2,3,4,5,6,7,8};
     int x=binarySearch(arr,7,100);
     cout<<x<<endl;
    

}