//make a structure to strore bank account information of a customer of ABC bank . also , make an alias for it.
#include<stdio.h>
typedef struct ABCbankDEtails{
    char name[100];
    int account_no;
} info;

int main(){
    info acc1 = {"rahul agarwal",1234};
    info acc2 = {"megha singhal",4567};

    printf("name is %s\naccount number is %d\n",acc1.name,acc1.account_no);
    printf("name is %s\naccount number is %d\n",acc2.name,acc2.account_no);

    return 0;
}