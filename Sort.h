#include "counter.h"

int* swap(int* a,int i,int j)
{
    a[i] = a[i]^a[j];
    a[j] = a[i]^a[j];
    a[i] = a[i]^a[j];
    inc(4);//3 for swap 1 for return;
    return a;
}


int* bubbleSort(int *a,int n)
{
    while(n > 0)
    {
        ic();//for while
        int i = 1;
        ic();im();//for i
        while (i < n)
        {
            ic();//for while
            if(a[i-1]>a[i])
            {
                ic();//for if
                swap(a,i-1,i);
                ic();//for func call
            }
            i++;
            ic();//for i++
        }
        ic();//for while exit condition
        dm();//for i
        n--;
        ic();//for n--
    }
    ic();//for while exit condition
    ic();//for return
    return a;
}

int* insertionSort(int* a,int n)
{
    int i = 1; ic(); im(); //for i
    while (i < n)
    {
        ic();//for while
        int j = i;
        im();//for j
        ic();//for j = i;
        while (j > 0)
        {
            ic();//for while
            if(a[j-1] > a[j])
            {
                ic();//for if
                swap(a,j-1,j);
                count ++;//for swap func call
            }
            else
            {
                ic();//for else
                ic();//for break
                break;
            }
            j--;
            ic();//for j--
        }
        ic();//for while exit condition
        i++;
        dm();//free j
        ic();//for i++
    }
    ic();//for while exit condition
    dm();//free i
    ic();//for return
    return a;
}


void marg(int* a,int left,int mid,int right)
{
    int p = mid + 1 - left;
    int q = right - mid;
    int A[p];
    int B[q];
    int i = 0;
    inc(5);//for all above instructions
    inm(p+q+3);//for A, B, p, q, i
    while(i < p)
    {
        ic();//for while
        A[i] = a[left + i];
        i++;
        inc(2);//for above two instructions
    }
    ic();//for while exit check
    i = 0;
    ic();//for i = 0
    while(i < q)
    {
        ic();//for while
        B[i] = a[mid + i + 1];
        i++;
        inc(2);//for above two instruction
    }
    ic();//for while exit
    i = 0;
    int j = 0;
    int k = 0;
    inc(3);//for above 3 instruction
    inm(2);//for j and k
    while (i < p && j < q)
    {
        ic();//for while
        if(A[i] >= B[j] )
        {
            ic();//for if
            a[left + k] = B[j];
            j++;
            inc(2);//for above 2 
        }  
        else
        {
            ic();//for else
            a[left + k] = A[i];
            i++;
            ic();//for above 2 instrictions
        }
        k++;
        ic();//for k++
    }
    ic();//for while exit
    while (i < p)
    {
        ic();//for while
        a[left + k] = A[i];
        k++;
        i++;
        inc(3);//for above 3
    }
    ic();//for while exit check
    while (j < q)
    {
        ic();//for while
        a[left + k] = B[j];
        k++;
        j++;
        inc(3);//for above 3
    }
    ic();//for while exit check
    inm(p+q+5);//free all veriables
}

void margSort(int* a,int left,int right)
{
    if(left < right)
    {
        ic();//for if
        int mid = (right + left) / 2;
        ic();im();//for mid
        margSort(a,left,mid);
        ic();//for func call
        margSort(a,mid+1,right);
        ic();//for funnc call
        marg(a,left,mid,right);
        ic();//for func call
    }
    ic();//for if exit check
}
