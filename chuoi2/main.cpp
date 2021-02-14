#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main(){
  char a[100];
  fflush(stdin);
  gets(a);
  int na = strlen(a);


  while(a[na] == ' '){
    strcpy(&a[na], &a[na+1]);
  }
  for(int i = 0 ; i < na; i++){
    if(a[i] == ' ' && a[i+1] == ' '){
      strcpy(&a[i], &a[i+1]);
      --i;
    }
  }
  for(int i = 0 ; i < na; i++){
    if(a[i] >= 'A' && a[i] <= 'Z'){
      a[i] += 32;
    }
  }

  a[0] -= 32;
  for(int i = 0 ; i < na; i++){
    if(a[i] == ' ' && a[i+1] != ' '){
      a[i+1] -= 32;
    }
  };


  for(int i = 0 ; i < na; i++){
    cout << a[i];
  }


  return 0;

}
