#include<stdlib.h>
#include<stdio.h>
#include <math.h>
#include "Sort.h"

void printAndResetCount(int n)
{
    printf("%d,\t%ld,\t%ld\t\t%f,\t%f\n",n,getCount(),getMaxMem(),(float)(sqrt(getCount())),(float)(sqrt(getCount())/n));
    resetAllCount();
}

void printArray(int *a,int n)
{
    int i = 0;
    while (i < n)
    {
        printf("%d ",a[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    int n = 8;

    while (n < 100000)
    {
        //scanf("%d",&n);
        int* a = (int*) malloc(sizeof(int)*n);
        int* b = (int*) malloc(sizeof(int)*n);
        int* c = (int*) malloc(sizeof(int)*n);
        int i = 0;
        while (i < n)
        {
	  //scanf("%d",&a[i]);
            a[i]= rand()%1000;
            b[i] = a[i];
            c[i] = a[i];
            i++;
        }
        printf("\n");
        insertionSort(a,n);
        printAndResetCount(n);
        bubbleSort(b,n);
        printAndResetCount(n);
        margSort(c,0,n-1);
        printAndResetCount(n);
        n *= 2;
    }
    return 0;
}
