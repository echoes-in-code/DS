#include <iostream>
using namespace std;

int binary(int arr[], int mid, int n , int target ) {
   

   if (arr[mid] == target)
{
    return mid ;}
    else if(arr[mid] <= target)
    {
    return binary(arr, mid-1, n,target  );
}
    else(arr[mid] >= target);
    {
    return binary(arr, mid +1, n , target);
    }
}


int main() {
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int target;
     int first = 0;
    int last= n - 1;

    cout << "Enter number to search: ";
    int mid =(last + first) /2;

    int result = binary(arr,mid , n, target);

    if (result != -1)
        cout << "Number found at index " << result << endl;
    else
        cout << "Number not found" << endl;

    return 0;
}
