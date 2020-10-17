#include <iostream>
#include <algorithm>
using namespace std;

int search(int a[], int n, int x)
{
  int low = 0;
  int high = n - 1;
  int mid;
    
  while (a[high] != a[low] && x >= a[low] && x <= a[high])
  {
    mid = low + ((x - a[low]) * (high - low) / (a[high] - a[low]));
    if (x == a[mid]) 
        return mid;
    else if (x < a[mid]) 
        high = mid - 1;
    else 
        low = mid + 1;
  }
  if (x == a[low]) 
      return low ;
  else 
      return -1;
}
int main(void)
{
  int z,target;
  cin >> z;
  int arr[z];
    
  for(int i = 0; i< z; i++) 
      cin >> arr[i];
    
  cin >> target;

  int n = sizeof(arr)/sizeof(arr[0]);
    
  int i = search(arr, n, target);

  if (i != -1)
    cout <<  i+1;
  else
    cout << "Element not found in the array";
  return 0;
}