#include<iostream>

using namespace std;

int main()
{
    int arr[4];
    int sum,x=0,y=0,i=0,key,j,n=4,num,a;
     cout<<"Please insert a value: ";
     cin>>num;

    while(num!=0){

        a=num%10;
        arr[i]=a;
        num=num/10;
        i++;
    }

    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];

            j = j - 1;
        }
        arr[j + 1] = key;
    }
        int f=0;
    while(f<n){

            if(f%2==0){
                x=x*10+arr[f];
            }
            else{
                y=y*10+arr[f];
            }

            f++;
    }

    sum=x+y;
    cout<<"Minimum sum is: "<<sum;

    return 0;
}
