int main()
{
    int num, N[10], x, y, z,temp;
 
    printf("How many number you like to sort : ");
    scanf("%d",&num);
    printf("Enter %d numbers :\n",num);
 
    for(x=0;x<num;x++)
        scanf("%d",&N[x]);
 
    for(x=0;x<num;x++)
    {
        for(y=0;y<num-x;y++)
        {
            if(N[x] > N[x+y])
            {
                temp=N[x];
                N[x] =N[x+y];
                N[x+y]=temp;
            }
        }
 
        printf("%d : ",x+1);
        for(z=0;z<num;z++)
        {
            printf("%3d",N[z]);
        }
        printf("\n");
    }
}

========
 OUTPUT
========

How many number you like to sort : 5                                                                                        
Enter 5 numbers :                                                                                                           
3                                                                                                                           
6                                                                                                                           
5                                                                                                                           
8                                                                                                                           
1
                                                                                                                           
1 :   1  6  5  8  3                                                                                                         
2 :   1  3  6  8  5                                                                                                         
3 :   1  3  5  8  6                                                                                                         
4 :   1  3  5  6  8                                                                                                         
5 :   1  3  5  6  8
