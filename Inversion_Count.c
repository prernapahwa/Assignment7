/*Inversion Count (n^2)
 *
 * @Prerna(1910990964)
 *
 * Assignment_7-SortingAlgorithms
 *
 */

#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    int inversions = 0;
    for(int i = 0;i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                inversions++;
            }
        }
    }
    printf("inversions : %d",inversions);
}
