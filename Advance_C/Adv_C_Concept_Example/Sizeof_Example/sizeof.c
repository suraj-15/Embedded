#include<stdio.h>

int main()
{
    int age = 26;
    float attd = 85.5;
    char option = 'y';
    double avg = 88.98;

    printf("Integer :%zu\n", sizeof(age));
    printf("Integer :%zu\n", sizeof(int));
  
    printf("attd :%zu\n", sizeof(attd));
    printf("attd :%zu\n", sizeof(float));

    printf("option :%zu\n", sizeof(option));
    printf("option :%zu\n", sizeof(char));

    printf("avg :%zu\n", sizeof(avg));
    printf("avg :%zu\n", sizeof(double));
    
    return 0;
}
