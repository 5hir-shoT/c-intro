#include <stdio.h>
int main()
{
    int a,b, ch, add,sub,mul,div;
    printf("Enter 1st no.=");
    scanf("%d",&a);
    printf("Enter 2nd no.=");
    scanf("%d",&b);

    printf("Enter choice:\n1 : add\n2 : subtract\n3 : multiply\n4 : divide\n");
    scanf("%d",&ch);

    if(ch==1)
    {
        add=a+b;
        printf("Addition is = %d", add);
    }

    else if(ch==2)
    {
        sub=a-b;
        printf("Difference is = %d", sub);
    }

    else if(ch==3)
    {
        mul=a*b;
        printf("Product is = %d", mul);
    }

    else if(ch==4)
    {
        div=a/b;
        printf("Quotient is = %d", div);
    }

    else
    {
        printf("Incorrect choice");
    }

    return 0;

}

/*

Output:

Enter 1st no.=2
Enter 2nd no.=3
Enter choice:
1 : add
2 : subtract
3 : multiply
4 : divide
1
Addition is = 5

Enter 1st no.=2
Enter 2nd no.=3
Enter choice:
1 : add
2 : subtract
3 : multiply
4 : divide
2
Difference is = -1

Enter 1st no.=2
Enter 2nd no.=3
Enter choice:
1 : add
2 : subtract
3 : multiply
4 : divide
3
Product is = 6

Enter 1st no.=2
Enter 2nd no.=3
Enter choice:
1 : add
2 : subtract
3 : multiply
4 : divide
4
Quotient is = 0 
(because we are using integer datatype for div)

*/