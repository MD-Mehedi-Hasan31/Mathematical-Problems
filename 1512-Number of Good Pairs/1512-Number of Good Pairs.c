#include<stdio.h>




int numIdenticalPairs(int* nums, int numsSize){

        int count=0, i, j;

        for(i=0;i<numsSize-1; i++){

                for(j=i+1; j<numsSize; j++){
                    if(nums[i]==nums[j]){
                        count++;
                    }
                }

        }

        return count;
}


int main(){

        int a[]={1,2,3,1,1,3};
        int d;
        d= sizeof(a)/sizeof(a[0]);

        int nm;

        nm= numIdenticalPairs(a,d);
        printf("the count  number  is: %d\n", nm);
    return 0;
}
