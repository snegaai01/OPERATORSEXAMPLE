#include <stdio.h>

int main()
{
    int a=89;
    int b=67;
    float z;
    additionprogram(a,b);
    subtractionprogram(a,b);
    multiplicationprogram(a,b);
    divisionprogram(a,b);
    modulusprogram(a,b);
    ifelseprogram(a,b);
    forprogram(a,b);
    switchprogram(a,b);
    whileprogram1(a,b);
    logicalprogram(a,b);


    return 0;
}
int additionprogram(int a,int b)
{
    int Y=a+b;
    printf("Added value for z is: %d",Y);
}


int subtractionprogram(int a,int b)
{
    int z=a-b;
    printf("\nSubtracted value for z is:%d",z);
}

int multiplicationprogram(int x,int y)
{
    int z=x*y;
    printf("\nMultiplicated value for z is:%d",z);
}

int divisionprogram(int x,int y)
{
    float z=(float) x/y;
    printf("\nDivided value for z is:%f",z);
}

int modulusprogram(int x,int y)
{
    int z=x%y;
    printf("\nModulus value for z is:%d",z);
}
int ifelseprogram(int x,int y)
{
    if (x>y)
    {
        printf("\n x is greater than y");
    }
    else
    {
        printf("\n x is less than y");
    }
}
int forprogram(int x,int y)
{
    for (x=0;x<7;x++)
    {
        printf("\nEnter the value of x:%d",x);
    }
    for (y=10;y<3;y--)
    {
        printf("\nEnter the value of y:%d",y);
    }
}


int switchprogram(int x,int y)
{
    switch (x)
    {
    case 1:
        printf("\nMy location is Trichy");
        break;
    case 2:
        printf("\nMy location is Chennai");
        break;
    default:
        printf("\nNo available location");
    }
}
int whileprogram1(int x,int y)
{
    while (x<10)
    {
        printf("\nEnter the value of x:%d",x);
        x++;
    }
}

int logicalprogram(int x,int y)
{
    printf("\nThe output of  x is :%d",(x<30 && y<20));
    printf("\nThe output of x is :%d",(x<10 || y<10));
}

