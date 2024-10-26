#include <stdio.h>
#include <stdlib.h>

void max_value(int *ptr);

int main()
{
    int a[] = {1,5,10,25,999,0};
    int *myptr = &a[0];

    printf("the memory address of a array is %p \nthe value of myptr is %p \nthe memory address of myptr is %p \n",&a,myptr,&myptr);

    max_value(myptr);

    system("pause");
    return 0;
}

void max_value(int *ptr){
    int max;
    for (int i = 0; i < 5 ; i++) {
        if (max < *(ptr+i)) {
            max = *(ptr+i);
        }
    }
    printf("the max value of array is %d \n", max);
}