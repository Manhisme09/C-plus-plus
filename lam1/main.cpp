#include <iostream>
#include <math.h>
using namespace std;

bool check(int n){
  if(n > 1){
    double temp = sqrt(n);
    return temp == (int) temp;
  }

  return false;
}

int timMin(int arr[], int n){
  int min = arr[0];
  for(int i = 1 ; i < n; i++){
    if(min > arr[i]){
      min = arr[i];
    }
  }
  return min;
}
int main(){
  int n = 10;
  int *arr = new int [1000];
  int *temp = new int [1000];
  int iTemp = 0;

  cin >> n;

  for(int i = 0 ; i < n; i++){
    cin >> arr[i];
  }

  for(int i = 0 ; i < n; i++){
    if(check(arr[i])){
      temp[iTemp] = arr[i];
      iTemp++;
    }
  }

  int min = timMin(temp,iTemp);
  for(int i = 0 ; i < n; i++){
    if(min == arr[i])
      cout << "vi tri min = " << i << endl;
  }

  return 0;
}
