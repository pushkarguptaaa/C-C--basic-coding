#include <iostream>
#define LOG(x) std::cout<< x << std::endl

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int var = 8;
    int* ptr = &var;
    *ptr = 10;
    LOG(var);
    int** ptr1 = &ptr;
    LOG(*ptr1);
    LOG(**ptr1);

    int arr[] = {1,2,3};
    LOG(*arr);

    int *ptr2 = arr;
    LOG(ptr2);

for(int i=0; i<3; i++){
    LOG(*ptr2);
    ptr2++;
}
for(int i=0; i<3; i++){
    LOG(*(arr+i));
}

int a = 2;
int b = 4;

// int *aptr = &a;
// int *bptr = &b;

// swap(aptr,bptr);

swap(&a, &b);
LOG(a);
LOG(b);
}