#include "headerfile.h"
struct node{
    int coff;
    int exp;
    struct node next;
};

int main(){
    struct node p1=NULL;
    struct node p3=NULL;
    struct node p2=NULL;
    insend(&p1,2);
    insend(&p1,3);
    insend(&p1,5);
    insend(&p1,7);
    insend(&p1,8);
    return 0;
}