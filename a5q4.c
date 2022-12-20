#include<stdio.h>
#include<math.h>
main()
{
    int num,i,z;
    printf("Enter the number=");
    scanf("%d", &num);
    printf("Enter the range=");
    scanf("%d", &z);
    
    for(i=1;i<=z;i++)
    {
        num*=i;
    printf("%d\n", num);
    }

}