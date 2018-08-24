#include<stdio.h>
struct comp{
    float real;
    float imag;
};
struct comp comp1,comp2;
struct comp sum_complex(struct comp complex1,struct comp complex2){
    struct comp temp;
    temp.real = complex1.real + complex2.real;
    temp.imag = complex1.imag + complex2.imag;
    return temp;
}
int main(){
    struct comp result;
    printf("Enter Complex Number 1: ");
    scanf("%f%f",&comp1.real, &comp1.imag);
    printf("Enter Complex Number 2: ");
    scanf("%f%f",&comp2.real,&comp2.imag);
    result = sum_complex(comp1,comp2);
    printf("The sum is %.2f +%.2f'i'\n\n", result.real,result.imag);
    return 0;
}
