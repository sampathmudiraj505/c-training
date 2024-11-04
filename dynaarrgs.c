#include <stdio.h> 
int main() 
{ 
  
    int n,max=0,min=0; 
    printf("Enter the size of the array: "); 
    scanf("%d", &n); 
    
    int arr[n]; 
  
    printf("Enter elements: "); 
  
    for (int i = 0; i < n; ++i)
     { 
  
        scanf("%d", &arr[i]); 
    } 
      
    for (int i = 0; i < n; ++i) { 
  
        printf("%d ", arr[i]); 
    } 
    return 0; 
}