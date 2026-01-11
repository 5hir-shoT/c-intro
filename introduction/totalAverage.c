#include<stdio.h>
int main()
{
    int b,u,m,s,c,sum;
    float avg;
    printf("\nEnter mark of 5 subjects: \n");
    scanf("%d",&b);
    scanf("%d",&u);
    scanf("%d",&m);
    scanf("%d",&s);
    scanf("%d",&c);
    sum=b+u+m+s+c;
    avg=sum/5.0;
    printf("\nTotal marks= %d",sum);
    printf("\nAverage marks= %.2f",avg);
    return 0;
}

/*

Output:

Enter mark of 5 subjects: 
22
33
44
55
66

Total marks= 220
Average marks= 44.00

NOTE: "%f" gives 6 decimal places.
      "%.2f" gives 2 decimal places.

NOTE: use int main() and not main(), 
using main() is outdated because specifying int keyword 
ensures return 0 sends success status back to the OS.

*/