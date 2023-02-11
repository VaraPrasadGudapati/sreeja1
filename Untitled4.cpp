// C Program To Find Largest Element of an Array
#include <stdio.h>
int main(){
    int i, largest;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    
    largest = arr[0];
    
    for (i = 0; i < 10; i++){
        if (largest < arr[i]){
            largest = arr[i];
        }
    }
    printf("Largest Element of the array is: %d", largest);
    return 0;
}
Output

Largest Element of the array is: 9
How Does This Program Work ?
    int i, largest;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
In this program, we have declared two int data type variables named as i and largest. We have also defined an array of size 10 elements.


  largest = arr[0];
Now, we declare the first element of the array as the largest element.

    for (i = 0; i < 10; i++){
        if (largest < arr[i]){
            largest = arr[i];
        }
    }
Now, we check the first and the second elements of the array, and the largest of them get stored in the largest named variable.

This process is continued until all the elements of the array are checked. After checking all the elements, the largest element gets stored in the largest variable.

    printf("Largest Element of the array is: %d", largest);
Finally, the largest element of the array is printed using printf() function. 

C Program To Find Largest Element in an Array Using User Input
// C Program To Find Largest Element in an Array
#include <stdio.h>
int main(){
    int num;
    double arr[25];
    
    // Asking for input
    printf("Please enter total no. of elements[1 to 25]: ");
    scanf("%d", &num);
    for (int i = 0; i < num; ++i){
        printf("%d.Enter the number: ", i + 1);
        scanf("%lf", &arr[i]);
    }
    
