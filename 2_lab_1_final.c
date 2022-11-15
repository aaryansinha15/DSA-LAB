
// Question 10 
// find the average,minimum and maximum


// #include <stdio.h>

// int main()
// {
//     int arr[50];
//     int i,j,n;
//     int large=0,small=0,sum=0;
//     float avg;
    
//     printf("Enter the limit of number you want to enter :");
//     scanf("%d",&n);
    
//     for(i=0;i<n;i++)
//     {
//     printf("Enter the numbers :");
//     scanf("%d",&arr[i]);
//     }
//     large=arr[0];
//     small=arr[1];
    
//     for(j=0;j<n;j++)
//     {
//         if(arr[j]>large)
//         large=arr[j];
//         if(arr[j]<small)
//         small=arr[j];
//     }
//     for(j=0;j<n;j++)
//     {
//         sum=sum+arr[j];
//     }
//     avg=(float)sum/n;
//    printf("%d is largest ",large);
//    printf("\n%d is smallest\n",small);
//    printf("Average is %f\n",avg);
//     return 0;
//     }










// question 7 

// Search an element in an array and count the number of times that element is present.

// #include <stdio.h>

// int main()
// {
//     int arr[50];
//     int i,pos,n;
//     int num,count=0;
    
//     printf("Enter the limit of number you want to enter :");
//     scanf("%d",&n);
    
//     for(i=0;i<n;i++)
//     {
//     printf("Enter the numbers :");
//     scanf("%d",&arr[i]);
//     }
   
//      printf("Enter the number of which you want to search\n");
//      scanf("%d",&num);
//      for(i=0;i<num;i++)
//      {
//          if(arr[i]==num){
//         count++;
//     } }
    
//      if(count>0)
//      {
//              printf("The element is present\n");
//      }
//      else
//      {
//          printf("Not present\n");
//      }
    
//     printf("The element is present %d times\n",count);

//     return 0;
//     }









// 
// Question 9

// Reverse the elements of an array without using a 2nd array. (Don’t print the original array in reverse order)



// #include <stdio.h>

// int main()
// {
//     int a[50],i,j,n,temp;
//     printf("Enter the number of elements\n");
//     scanf("%d",&n);
    
//     printf("Enter the values of the array :\n");
//     for(i=0;i<n;i++)
//     scanf("%d",&a[i]);
    
//     printf("The elements are : \n");
//     for(i=0;i<n;i++)
//     printf("%d\t",a[i]);
    
//     for(i=0,j=n-1;i<j;i++,j--)
//     {
//         temp=a[i];
//         a[i]=a[j];
//         a[j]=temp;
//     }
//     printf("The elements after reversing is \n");
//     for(i=0;i<n;i++)
//     printf("%d \t",a[i]);
    
//     return 0;
// }







// quetion 4

// Given two sorted arrays and a number x, find the pair whose sum is equal to x and the pair has an element from each array.
 
 
 
 
//  #include <stdio.h>

// int main()
// {
//    int arr1[100],arr2[100];
//    int i,j,limit,num,t,t2;
//    printf("Enter the limit of both the array\n");
//    scanf("%d",&limit);
//     printf("Enter the elements of the array1\n");
//    for(i=0;i<limit;i++)
//    {
//        scanf("%d",&arr1[i]);
//    }
//    printf("Enter the elements of the array2\n");
//    for(i=0;i<limit;i++)
//    {
//        scanf("%d",&arr2[i]);
//    }
//    printf("Enter the number you want to search \n");
//    scanf("%d",&num);
   
//    for(i=0;i<limit;i++)
//    {
//        for(j=0;j<limit;j++)

//        {
//        t=arr1[i];
//        t2=arr2[j];
//        if(t+t2==num)
//        {
//            printf("%d %d \n",t,t2);
//        }
//        else
//        arr2[j+1];
       
// }
// printf("The elements %d is present %d times",num,t,t2);
// }

//     return 0;
// }








 

// Question 1

//  Perform the union and intersection of two arrays. (In UNION, the common elements must come once)


// #include<stdio.h>

// void printUnion(int arr1[], int arr2[], int len1, int len2) {

//     int f, i, j, k = 0;
//     int arr3[100];

//     for (i = 0; i < len1; i++) {
//         arr3[k] = arr1[i];
//         k++;
//     }

//     for (i = 0; i < len2; i++) {
//         f = 0;
//         for (j = 0; j < len1; j++) {
//             if (arr2[i] == arr1[j]) {
//                 f = 1;
//             }
//         }
               
//         if (f == 0) {
//             arr3[k] = arr2[i];
//             k++;
//         }
//     }
//     printf("Union of two array is:");
//     for (i = 0; i < k; i++) {
//         printf("%d ", arr3[i]);
//     }
// }

// void printIntersection(int arr1[], int arr2[], int len1, int len2) {

//     int arr3[100];
//     int i, j, k = 0;

//     for (i = 0; i < len1; i++) {
//         for (j = 0; j < len2; j++) {
//             if (arr1[i] == arr2[j]) {
//                 arr3[k] = arr1[i];
//                 k++;
//             }
//         }
//     }
//     printf("\nIntersection of two array is:");
//     for (i = 0; i < k; i++) {
//         printf("%d ", arr3[i]);
//     }
// }

// int main() {

//     int arr1[100];
//     int arr2[100];
//     int arr3[100];
//     int i, j, len1, len2;

//     printf("Enter size of 1st array:");
//     scanf("%d", &len1);

//     printf("Enter 1st array elements:");
//     for (i = 0; i < len1; i++) {
//         scanf("%d", &arr1[i]);
//     }

//     printf("Enter size of 2nd array:");
//     scanf("%d", &len2);

//     printf("Enter 2nd array elements:");
//     for (i = 0; i < len2; i++) {
//         scanf("%d", &arr2[i]);
//     }

//     printUnion(arr1, arr2, len1, len2);
//     printIntersection(arr1, arr2, len1, len2);

//     return 0;
// }






// question 5 
// Given three arrays sorted in non-decreasing order, print all common elements in these arrays.




// #include <stdio.h>
  
// /* Prints common elements of three sorted array */
// void printCommonElements(int *data1, int *data2, int *data3, int s1, int s2, int s3) {
//     int i, j, k;
//     /* Initialize i, j and k to point to the smallest 
//      element of array1, array2, and array3 respectively */
//     i = j = k = 0;
//     /* Iterate until any one array ends */
//     while (i < s1 && j < s2 && k < s3) {
//         /* Compare current element of all three arrays */
//         if(data1[i] == data2[j] && data2[j] == data3[k]) {
//      /* found one common element */
//             printf("%d ", data1[i]);   
//      /* Increment all three pointers */
//             i++; 
//             j++; 
//             k++; 
//  } else if ((data1[i] <= data2[j]) && (data1[i] <= data3[k])){
//      /* array1[i] is smallest, increment i*/
//             i++;
//         } else if ((data2[j] <= data3[k]) && (data2[j] <= data1[i])){
//             /* array2[j] is smallest, increment j*/
//             j++;
//         } else {
//             /* array3[k] is smallest, increment k*/
//             k++;
//         }
//     }
// }
  
// int main() {
//     int data1[7] = {1, 5, 10, 15, 20, 25, 30};
//     int data2[8] = {3, 4, 5, 10, 15, 25, 30, 38};
//     int data3[9] = {0, 2, 5, 13, 15, 16, 17, 45, 43};
  
//     printCommonElements(data1, data2, data3, 7, 8, 9);
     
//     return 0;
// }







// Question 3

// Given an array of positive integers of size n, find the maximum repeating number in this array. For example, let the array be arr[ ] = {1, 2, 2, 2, 2, 2, 3, 8, 9, 2, 3}, the maximum repeating number would be 2



// #include<stdio.h>
// int MaxRepeatingElement(int array[], int n) 
// {
//     int i, j, maxelement, count;
//      int maxCount = 0;
//     for(i = 0; i< n; i++)    
//     {
//         count = 1;
//         for(j = i+1; j < n; j++)  
//         {
//             if(array[j] == array[i])
//             {
//                 count++;     
//                 if(count > maxCount)
//                 {
//                     maxelement = array[j];
//                 }
//             }
//         }
//     }
//     return maxelement;
// }
// int main()
// {
//     int n;              
//     printf("Enter the number of elements ");
//     scanf("%d",&n);    
//     int array[n];      
//     printf("Enter the array elements ");
//     for(int i=0;i<n;i++)   
//     {
//         scanf("%d",&array[i]);
//     } 
//     int maxelement = MaxRepeatingElement(array, n);    
//     printf("\n Maximum Repeating Element : %d",maxelement);   
//     return 0;
// }





// Question 2
// #include <stdio.h>

// int main()
// {
//    int arr1[1000];
//    int i,j,limit,t;
//    printf("Enter the limit of both the array\n");
//    scanf("%d",&limit);
//     printf("Enter the elements of the array\n");
//    for(i=0;i<limit;i++)
//    {
//        scanf("%d",&arr1[i]);
//    }

//    for(i=0;i<limit;i++)
//    {
//       for(j=i+1;j<limit;j++)
//        {  
         
//        if(arr1[i]>arr1[j]){
//            t=arr1[i];
//            arr1[i]=arr1[j];
//            arr1[j]=t;
//        }
// }
// }
// for(i=2;i<limit;i++)
// {
//     printf("%d ",arr1[i]);
// }
//     return 0;
// }








// question 6
// Add, subtract, and multiply the elements of two arrays. (The size of the two arrays are same)




// #include<stdio.h>
// #define MAX 20 
 
// /*  function    :   readArray() 
//     to read array elements. 
// */
 
// void    readArray(int a[],int size) 
// { 
//     int i; 
//     for(i=0;i< size;i++) 
//     { 
//         printf("Enter %d element :",i+1); 
//         scanf("%d",&a[i]); 
//     } 
// } 
 
// /*  function    : printArray() 
//     to print array elements. 
// */
// void printArray(int a[],int size) 
// { 
//     int i; 
//     for(i=0;i < size; i++) 
//         printf("%5d",a[i]); 
// } 
 
// /*  function    : addArray(), 
//     to add elements of two arrays. 
// */
// void addArray(int a[],int b[],int c[],int size) 
// { 
//     int i; 
//     for(i=0; i< size;i++) 
//         c[i]=a[i]+b[i]; 
// } 
  
// /*  function    : subArray(), 
//     to subtract elements of two arrays. 
// */
// void subArray(int a[],int b[],int c[],int size) 
// { 
//         int i; 
//         for(i=0; i< size;i++) 
//                 c[i]=a[i]-b[i]; 
// } 
 
// int main() 
// { 
//     int A[MAX],B[MAX],ADD[MAX],SUB[MAX]; 
//     int i,n; 
 
 
//     printf("\nEnter size of an Array :"); 
//     scanf("%d",&n); 
 
//     printf("\nEnter elements of Array 1:\n"); 
//     readArray(A,n); 
//     printf("\nEnter elements of Array 2:\n"); 
//     readArray(B,n); 
 
//     /* add Arrays*/
//     addArray(A,B,ADD,n); 
//     /* subtract two Arrays*/
//     subArray(A,B,SUB,n); 
 
//     printf("\nArray elements after adding :\n"); 
//     printArray(ADD,n); 
 
//     printf("\nArray elements after subtracting :\n"); 
//     printArray(SUB,n); 
 
//     printf("\n\n"); 
//     return 0; 
// }










// question 8 
// Sort the elements of an array both in ascending and descending order. (Use any sorting algorithm you know)






// #include <stdio.h>
// int main () {

// int n, array[100];
// int i,j,x,y,temp,temp1;

// printf("Enter the size of array\n");
// scanf("%d",&n);

// printf("Enter the elements of the array\n");
// for (i=0; i<n; i++) 
// {
//     printf("Enter the %d element :",i+1);
//     scanf("%d",&array[i]);
// }
// // for ascending part
// for(i=0;i<n;i++)  
// {
//     for(j=i+1;j<n;j++)
//     {
//         if(array[i]>array[j])
//         {
//             temp=array[i];
//             array[i]=array[j];
//             array[j]=temp;
//         }
//     }
// }
// printf("Ascending order of an array :\n");
// for(i=0;i<n;i++) 
// {
//     printf("%d ",array[i]);
// }


// // for descending part
// for(x=0;x<n;x++)
// {
//     for(y=x+1;y<n;y++)
//     {
//         if(array[x]<array[y])
//         {
//             temp1=array[x];
//             array[x]=array[y];
//             array[y]=temp1;
//         }
//     }
// }
// printf("\nDescending order of an array :\n");

// for(x=0;x<n;x++)
// {
//     printf("%d ",array[x]);
// }

// return 0;
// }





















