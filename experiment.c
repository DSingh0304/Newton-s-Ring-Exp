#include <stdio.h>
int main()
{
    float arr[10] , temp;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %d element: ",i);
        scanf("%f", &temp);
        arr[i] = temp*temp;
        printf("sex/n" );
    }
    
    float diff , cal , sum =0;
    for (int i = 0; i < 9; i++)
    {;
        diff = arr[i+1]-arr[i];
        cal = diff/340;
        sum += cal;
    }
    float avg = sum/9;
    printf("The wavelenght of sodium light is: %f ",avg);
    return 0;
}
