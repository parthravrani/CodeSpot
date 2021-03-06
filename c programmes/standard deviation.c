#include <stdio.h>
#include <math.h>
 
float Standard_deviation(float data[], int n);
int main()
{
    int n, i;
    float data[100];
 
    printf("Enter number of datas( should be less than 100) : ");
    scanf("%d",&n);
 
    printf("Enter elements: ");
    for(i=0; i<n; ++i)
        scanf("%f",&data[i]);
 
    printf("\n");
    printf("Standard Deviation : %.2f", Standard_deviation(data,n));
    return 0;
}
 
float Standard_deviation(float data[], int n)
{
    float mean=0.0, sum_deviation=0.0;
    int i;
 
    for(i=0; i<n;++i)
    {
        mean+=data[i];
    }
 
    mean=mean/n;
 
    for(i=0; i<n;++i)
      sum_deviation+=(data[i]-mean)*(data[i]-mean);
 
    return sqrt(sum_deviation/n);           
}

========
 OUTPUT
========

Enter number of datas( should be less than 100) : 3
Enter elements: 2 7 5
Standard Deviation : 2.05
