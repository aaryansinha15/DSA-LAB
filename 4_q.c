
#include<stdio.h>
int main()
{
    int a=0,d=0,x=0,y=0,r,c,k=1;
    printf("Enter the no.of rows of the matrix\n");
    scanf("%d",&r);
    printf("Enter the no.of column of the matrix\n");
    scanf("%d",&c);
    
    int s[r][c],i,j,s1[r][c],nz=0;
    printf("Enter the elements of the sparse matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&s[i][j]);
        }
    }
    printf("The sparse matrix is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",s[i][j]);
            if(s[i][j]!=0)
            nz++;
        }
        printf("\n");
    }
    int r1=nz+1;
    int b[r1][3];
    b[0][0]=r;
    b[0][1]=c;
    b[0][2]=nz;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(s[i][j]!=0)
            {
                b[k][0]=i;
                b[k][1]=j;
                b[k][2]=s[i][j];
                k++;
            }
            
        }
    }
    printf("Three tuple matrix is\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s1[i][j]=s[i][j];
        }
    }
    for(i=r-1;i>=0;i--)
    {
        x=0;
        for(j=0;j<c;j++)
        {
            if(s1[i][j]==0)
            x++;
        }
        if(x==c)
        a++;
    }
    for(i=c-1;i>=0;i--)
    {
        y=0;
        for(j=0;j<r;j++)
        {
            if(s1[j][i]==0)
            y++;
        }
        if(y==r)
        d++;
    }
    int p=0,q=0;
    r=r-a;
    c=c-d;
    p=r;
    q=c;
    nz=0;
    printf("Reduced Matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",s1[i][j]);
            if(s1[i][j]!=0)
            nz++;
        }
        printf("\n");
    }
    k=1;
    r1=nz+1;
    int z[r1][3];
    z[0][0]=r;
    z[0][1]=c;
    z[0][2]=nz;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(s1[i][j]!=0)
            {
                z[k][0]=i;
                z[k][1]=j;
                z[k][2]=s1[i][j];
                k++;
            }
            
        }
    }
    printf("Reduced three tuple matrix is\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",z[i][j]);
        }
        printf("\n");
    }
    int e[r1][3];
    e[0][0]=z[0][0];
    e[0][1]=z[0][1];
    e[0][2]=z[0][2];
    for(i=1;i<r1;i++)
    {
        for(j=0;j<3;j++)
        {
            if(b[i][j]==z[i][j])
            e[i][j]=z[i][j];
            
        }
        e[i][2]=2*e[i][2];
    }
    printf("Addition of the two three tuple matrix is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",e[i][j]);
        }
        printf("\n");
    }
    return 0;
}