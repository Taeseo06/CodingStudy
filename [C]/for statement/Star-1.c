#include<stdio.h>

int main(void)
{
    int input1, input2;
    scanf("%d %d", &input1, &input2);
    for (int i = 0; i < input1; i++)
    {
        for (int j = 0; j < input2; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
