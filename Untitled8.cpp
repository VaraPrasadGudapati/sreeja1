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


    for (i = 0; i < 10; i++){
        if (largest < arr[i]){
            largest = arr[i];
        }
    }

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
    
    for (int i = 0; i < num; ++i){
        if (arr[0] < arr[i]){
            arr[0] = arr[i];
        }
    }
    printf("Largest element of the array is: %.2lf", arr[0]);
    return 0;
}


