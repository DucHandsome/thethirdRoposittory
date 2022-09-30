#include <stdio.h>
#include <conio.h>
int main()
{
    int ia[50], i, in, isum = 0;
    printf("Nhap vao gia tri n: ");
    scanf("%d", &in);
    //Tinh tong gia tri cac phan tu
    for(i = 0; i < in; i++)
        isum += ia[i]; //cong don tung phan tu vao isum
    printf("Trung binh cong: %.2fn", (float) isum/in);
    getch();
}