#include <stdio.h>

// Insert element at specific position in array
int main() {
    int n, position, new_value;
    
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int numbers[n + 1];  // One extra spot for new element
    
    // Read the original array
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    printf("Enter position (1-based): ");
    scanf("%d", &position);
    printf("Enter value to insert: ");
    scanf("%d", &new_value);
    
    // Make room by shifting elements right
    // Start from end, work backwards to avoid overwriting
    for(int i = n; i >= position; i--) {
        numbers[i] = numbers[i - 1];
    }
    
    // Place new element
    numbers[position - 1] = new_value;
    
    // Show final array (now size n+1)
    printf("Array after insertion: ");
    for(int i = 0; i <= n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}



