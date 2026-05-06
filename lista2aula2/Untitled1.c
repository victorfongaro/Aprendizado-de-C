#include <stdio.h>

int main()
{
    int x,y,z;
    printf("Insira um n. ");
    scanf("%d",&x);
    printf("\nInsira um n. ");
    scanf("%d",&y);
    printf("\nInsira um n. ");
    scanf("%d",&z);
    printf("\n");
    if (x > y && x > z)
    {
        if (y > z)
        {
            printf("maior: %d, menor: %d",x,z);
        }
        else
        {
            printf("maior: %d, menor: %d",x,y);
        }

    }
    else
    {
       if (y > z)
    {
        if (x > z)
        {
            printf("maior: %d, menor: %d",y,z);
        }
        else
        {
            printf("maior: %d, menor: %d",y,x);
        }

    }
    else
    {
        if (y > x)
        {
            printf("maior: %d, menor: %d",z,x);
        }
        else
        {
            printf("maior: %d, menor: %d",z,y);
        }
    }
    }
}

