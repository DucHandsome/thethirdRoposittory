#include <stdio.h>
#include <conio.h>
int main()
{
    int ia[50], i, in, isum = 0;
    printf("Nhap vao gia tri n: ");
    scanf("%d", &in);
    //Nhap du lieu vao mang
    for(i = 0; i < in; i++)
    {
    printf("Nhap vao phan tu thu %d: ", i + 1);
    scanf("%d", &ia[i]); //Nhap gia tri cho phan tu thu i
    }
}

// Phat trien xong feature 3