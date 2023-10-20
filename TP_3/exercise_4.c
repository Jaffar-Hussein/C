#include <stdio.h>
void ajoute(int* v,int n);
int main(){
    int v = 1,n = 2;
    printf("v is stored in :%p\n",&v);
    printf("n is stored in :%p\n",&n);
    printf("v before ajoute is : %d\n",v);
    printf("n before ajoute is : %d\n",n);
    ajoute(&v,n);
    printf("v after ajoute is : %d\n",v);
    printf("n after ajoute is : %d\n",n);
}

void ajoute(int* v,int n){
    *v = 2;
    n = 3;
    printf("    **AJOUTE** n is stored in :%p\n",&n);
    printf("    **AJOUTE** v is stored in :%p\n",v);
}