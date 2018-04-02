#include<stdio.h>

int main()
{
	
	int N,P,i ,t;
   	scanf("%d%d\n",&N,&P);
	int A[N] ; 
	for(i=0;i<N;i++)
	scanf("%d",&A[i]) ;
	quicksort(A,0,N-1) ;
	for(i=0;i<P;i++)
	{
	scanf("%d",&t) ;
	if(t>=A[0] && t<=A[N-1])
    printf("Yes") ;
    else 
	printf("No"); 
    }
}

void quicksort(int array[], int firstIndex, int lastIndex)
{
    //declaaring index variables
    int pivotIndex, temp, index1, index2;

    if(firstIndex < lastIndex)
    {
        //assigninh first element index as pivot element
        pivotIndex = firstIndex;
        index1 = firstIndex;
        index2 = lastIndex;

        //Sorting in Ascending order with quick sort
        while(index1 < index2)
        {
            while(array[index1] <= array[pivotIndex] && index1 < lastIndex)
            {
                index1++;
            }
            while(array[index2]>array[pivotIndex])
            {
                index2--;
            }

            if(index1<index2)
            {
                //Swapping opertation
                temp = array[index1];
                array[index1] = array[index2];
                array[index2] = temp;
            }
        }

        //At the end of first iteration, swap pivot element with index2 element
        temp = array[pivotIndex];
        array[pivotIndex] = array[index2];
        array[index2] = temp;

        //Recursive call for quick sort, with partiontioning
        quicksort(array, firstIndex, index2-1);
        quicksort(array, index2+1, lastIndex);
    }
}
