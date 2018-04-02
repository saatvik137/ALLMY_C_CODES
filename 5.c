#include<stdio.h>
int main()
#define SIZE 10 
{
int t , c, n , i , arr[SIZE] , j = 1 ;
scanf("%d" ,&t) ;
while(t--)
{
	scanf("%d" , &n) ;
	
	for(i=0 ; i<n; i++) 
	{
	scanf ("%d",&arr[i]) ;
    }
    quicksort(arr,0,n-1);
    c = arr[j] - arr[j-1] ;
    printf("%d",c) ;
}
return 0 ;
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
