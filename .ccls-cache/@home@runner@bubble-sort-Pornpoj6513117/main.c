#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int Isprime(int num){
  if(num ==1) return 0;
  for(int i=2; i<num; i++){
    if(num%i==0) return 0;
}
  return 1;
  }
int main(int argc, char *argv[]) {
int *a,n,i,*prime;
  n=argc-1;
  a=(int*)malloc(sizeof(int)*n);
  prime=(int*)malloc(sizeof(int)*n);
  int j=0;
  for(i=0;i<n;i++) {
    a[i]=atoi(argv[i+1]);
    if(Isprime(a[i])){
      prime[j]=a[i];
      j++;
      }
  }
    if(j==0) printf("No prime\n");
    else{
    n=j;
    display(prime,n);
    bubbleSort(prime,n);

  
    //printf(“a[% d] = % d”, i, a[i]);
    //int a[N] = {1, 2, 6, 7, 9, 8};
    //{3,2,6,7,3,1};
    //int i, j, new_number;
    
    // insertion(a,N);

    // selectionSort(a,N);
    display(prime,n);
      }
    return 0;
  }
