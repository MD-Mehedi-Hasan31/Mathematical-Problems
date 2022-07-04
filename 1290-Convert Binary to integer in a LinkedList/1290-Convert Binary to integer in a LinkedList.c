#include<stdio.h>
#include<math.h>

typedef struct Node
{
    int val;
    struct Node *next;
} ListNode;

ListNode *createList(int a[], int s)
{

    ListNode *head= NULL;
    ListNode *temp;
    ListNode *run;


    for(int i=0; i<s; i++)
    {

        temp= (ListNode*)malloc(sizeof(ListNode));

        temp->val= a[i];
        temp->next= NULL;

        if(head== NULL)
        {

            head= temp;
            run= temp;
        }
        else
        {
            run->next= temp;
            run=run->next;
        }

    }

    return head;
}

int getDecimalValue(ListNode* head){

    ListNode* temp;
    temp= head;
    int i=0, s=0;
    while(temp!=NULL){
        temp=temp->next;
        i++;
    }
    i--;
    int k,f;
    while(head!=NULL){
        k= pow(2,i);
        f= head->val * k;
        s=s+f;
        i--;
        head=head->next;
    }
return s;
}

int main(){

    int a[]={1,0,1};
    int sizeA;
    sizeA= sizeof(a)/sizeof(a[0]);
    ListNode  *retValue;
    retValue= createList(a,sizeA);
    int d;
    d= getDecimalValue(retValue);
    printf("The Decimal Value Is: %d\n", d);

    return 0;

}
