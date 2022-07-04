#include<iostream>

using namespace std;

int main(){

    cout<<"Please insert a Number: ";
    int num;

    cin>>num;
    int i=0;


    while(num!=0){

        if(num%2==0){
            num=num/2;
            i++;
        }
        else{
            num=num-1;
            i++;
        }

    }

    cout<<"Total Step is: "<<i;

}
