#include<stdio.h>


// time complexity is o(n^2) solution
int sumOddLengthSubarrays(int* arr, int arrSize)
{

    int sum=0;

    for(int i=0; i<arrSize; i++)
    {

        for(int j=i; j<arrSize; j+=2)
        {
            for(int k=i; k<=j; k++)
            {
                sum+=arr[k];

            }
        }

    }

    return sum;

}

// time complexity o(n) solution;
int sumOddLengthSubarrays1(int* arr, int arrSize)
{
    int sum=0, count;

    int n=arrSize;

    for(int i=0;i<n;i++){

            count=((i+1)*(n-i)+1)/2;
            sum+=count*arr[i];
    }

    return sum;

}



int main()
{

    int arr[]= {1,4,2,5,3};

    int sizeOfArray= sizeof(arr)/sizeof(int);

    printf("The size of the Array is: %d\n",sizeOfArray);

    int returnValue;
    returnValue=sumOddLengthSubarrays1(arr,sizeOfArray);
    printf("Total Sum is: %d\n",returnValue);


    return 0;
}
