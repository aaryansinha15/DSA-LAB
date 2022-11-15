// Two arrays are given. Write the C code to swap elements from each array such that after swapping, 
// sum of elements of array1=sum of elements of array2..
// Example:
// Array 1: 3, 2, 10, 12
// Array 2: 6, 4, 9, 10
// After swapping 3 (from Array 1) with 4 (from Array 2)
// Array1: 4, 2, 10, 12 Sum = 28
// Array2: 6, 3, 9, 10 Sum = 28

#include<stdio.h>

int arrSum(int arr[], int s){
    int sum = 0;
    for (int i=0 ; i<s ; i++){
        sum += arr[i];
    }
    return sum;
}

//a-b = (sum1-sum2)/2
int f1(int arr1[], int n, int arr2[], int m){
    int sum1 = arrSum(arr1, n);
    int sum2 = arrSum(arr2, m);
    if ((sum1 - sum2) % 2 != 0){
        return 0;
    }
    return ((sum1 - sum2)/2);
}

void findSwapNum(int arr1[], int n, int arr2[], int m){
    int t = f1(arr1, n, arr2, m);
    if (t == 0){
        return;
    }
    int a , b;
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            if (arr1[i] - arr2[j] == t){
                a = arr1[i];
                b = arr2[j];
            }
        }
    }
    printf("%d %d", a,b);
}

int main(){
    int n, m;
    printf("Enter the size of the 1st array : ");
    scanf("%d", &n);
    int arr1[n];
    printf ("Enter the elements in array 1 : ");
    for (int i=0 ; i<n ; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the 2nd array : ");
    scanf("%d", &m);
    int arr2[m];
    printf ("Enter the elements in array 2 : ");
    for (int i=0 ; i<m ; i++){
        scanf("%d", &arr2[i]);
    }


    printf("Swaped numbers are : ");
    findSwapNum(arr1, n, arr2, m);
    printf("\n");
    return 0;
}