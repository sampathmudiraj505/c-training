#include <stdio.h> 
int main() 
{ 
  
    int n; 
    printf("Enter the size of the array: "); 
    scanf("%d", &n); 
    
    int arr[n]; 
  
    printf("Enter elements: "); 
  
    for (int i = 0; i < n; ++i)
     { 
  
        scanf("%d", &arr[i]); 
    } 
      
    for (int i = 0; i < n; ++i)
    { 
  
        printf("%d ", arr[i]); 
    } 
    int maximum=arr[0],minimum=arr[0];
    for(int i=0;i<n;++i)
    {
        if(maximum<arr[i])
        {
            maximum=arr[i];
        }
    for(int i=0;i<n;++i)
    {
        if(minimum>arr[i])
        {
            minimum=arr[i];
        }
    }
    }
    printf("%d",maximum);
    printf("%d",minimum);
    

}