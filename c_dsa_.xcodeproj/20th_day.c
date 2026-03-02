#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int prefixSum = 0;
    int count = 0;

    // Using large hash range (adjust if needed)
    int hash[2 * MAX + 1] = {0};

    for(int i = 0; i < n; i++) {
        prefixSum += arr[i];

        // If prefix sum is 0
        if(prefixSum == 0)
            count++;

        // If prefix sum seen before
        if(hash[prefixSum + MAX] > 0)
            count += hash[prefixSum + MAX];

        // Increase frequency
        hash[prefixSum + MAX]++;
    }

    printf("%d\n", count);

    return 0;
}