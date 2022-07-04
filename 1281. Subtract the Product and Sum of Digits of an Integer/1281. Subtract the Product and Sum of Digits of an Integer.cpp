#include<iostream>

using namespace std;

int main(){

        int num;
        int i=0, a,f=1,d=0,sum;
        int arr[100000];
        cout<<"Please enter a value: ";
        cin>>num;

        while(num!=0){

            a=num%10;
            arr[i]=a;
            num=num/10;
            i++;
        }
        for(int k=0; k<i;k++){
            cout<<" "<<arr[k]<<endl;
        }
        i=i-1;
        while(i>=0){

            f=f*arr[i];
            d=d+arr[i];
            i--;
        }

        cout<<"Multiplication Value  is : "<<f<<endl;
        cout<<"Sum value is: "<<d<<endl;

        sum=f+d;
        cout<<"total Sum is: "<<sum<<endl;
        int def;
        def=f-d;
        cout<<"Substraction is: "<<def;
}
