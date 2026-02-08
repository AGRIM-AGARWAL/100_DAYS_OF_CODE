#include <stdio.h>

int main()
{
    int i=0;
    
    int n=0;
    
    printf("enter size of array : ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("enter elements for array : ");
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        printf("\n");
    }
    
    for(i=0 ; i<n ; i++)
    {
        printf("the input array is");
        printf("%d", arr[i]);
        printf("\n");
        
    }
    
    return 0;
}
