//  Write a C code to add two polynomials using array.


// #include <stdio.h>
// int poly1[10][10],poly2[10][10];
// int t1,t2,same;

// void input()
// {
    
//     printf("Enter the number of terms in first polynomial\n");
//      scanf("%d",&t1);
//      printf("Enter the number of terms in second polynomial\n");
//      scanf("%d",&t2);
//      printf("Enter the coefficients and exponents of the first polynomial\n");
//      for(int i=0; i<t1; i++)
//      {
//          scanf("%d x^ %d",&poly1[i][0],&poly1[i][1]);
//      }
//      printf("\nEnter the coefficients and exponents of the second polynomial\n");
//      for(int i=0; i<t2; i++)
//      {
//      scanf("%d x^ %d",&poly2[i][0],&poly2[i][1]);
//      }
//     printf("Therefore the resultant polynomial is \n");
//     for(int i=0; i<t1; i++)
//     {
//         same=0;
//         for(int j=0; j<t2; j++)
//         {
//            if(same==0)
//            if (poly1[i][1] == poly2[j][1])
//            {
//              printf("\n %d")
//            }
           
//         }
//     }



// }



#include<stdio.h>
void main()
{
int poly1[6][2],poly2[6][2],term1,term2,match,proceed,i,j;
printf("Enter the number of terms in first polynomial : ");
scanf("%d",&term1);
printf("Enter the number of terms in second polynomial : ");
scanf("%d",&term2);
printf("Enter the coeff and expo of the first polynomial:\n");
for(i=0;i<term1;i++)
{
scanf("%d %d",&poly1[i][0],&poly1[i][1]);
}
printf("Enter the coeff and expo of the second polynomial:\n");
for(i=0;i<term2;i++)
{
scanf("%d %d",&poly2[i][0],&poly2[i][1]);
}
printf("The resultant polynomial after addition :\n");
for(i=0;i<term1;i++)
{
match=0;
for(j=0;j<term2;j++)
{
if(match==0)
if(poly1[i][1]==poly2[j][1])
{
printf("%dx^%d+",(poly1[i][0]+poly2[j][0]), poly1[i][1]);
match=1;
}
}
}
for(i=0;i<term1;i++)
{
proceed=1;
for(j=0;j<term2;j++)
{
if(proceed==1)
if(poly1[i][1]!=poly2[j][1])
proceed=1;
else
proceed=0;
}
if(proceed==1)
printf("%dx^%d+",poly1[i][0],poly1[i][1]);
}
for(i=0;i<term2;i++)
{
proceed=1;
for(j=0;j<term1;j++)
{
if(proceed==1)
if(poly2[i][1]!=poly1[j][1])
proceed=1;
else
proceed=0;
}
if(proceed==1)
printf("%dx^%d+",poly2[i][0],poly2[i][1]);
}
}












