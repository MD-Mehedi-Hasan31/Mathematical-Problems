#include<iostream>

using namespace std;

int main(){

        int n, start;

        cout<<"Please take input for n: ";
        cin>>n;
        cout<<"Please take input for start: ";
        cin>>start;
        int sum, i=0, value=0;
        while(i<n){
            sum=start+(2*i);
            value=value^sum;
            i++;
        }
        cout<<value;

        return 0;
}
