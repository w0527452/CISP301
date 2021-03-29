#include <iostream>

/*
Design a program that asks the user to enter 10 golf scores. The scores should be stored in an
Integer array. Sort the array in ascending order and display its contents.

 * OUTPUT
Enter score 1: 74
Enter score 2: 68
Enter score 3: 76
Enter score 4: 79
Enter score 5: 69
Enter score 6: 81
Enter score 7: 73
Enter score 8: 74
Enter score 9: 76
Enter score 10: 80

68 69 73 74 74 76 76 79 80 81

Process finished with exit code 0
 */

/**
 * Swap values of two variables
 *
 * @param a
 * @param b
 */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * Sort an array using bubble sort
 *
 * @param arr
 * @param n
 */
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

/**
 * Sort an array using selection sort
 * @param arr
 * @param n
 */
void selectionSort(int arr[], int n) {
    int i, j, minIndex;

    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;

        // Swap the new minimum element with the first element
        swap(&arr[minIndex], &arr[i]);
    }
}

/**
 * Sort an array using insertion sort
 *
 * @param arr
 * @param n
 */
void insertionSort(int arr[], int n) {
    int i, j, k;
    for (i = 1; i < n; i++) {
        k = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
}

/**
 * Populate array with user scores
 *
 * @param scores
 * @param n
 */
void getScores(int scores[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "Enter score " << i + 1 << ": ";
        std::cin >> scores[i];
    }
}

/**
 * Display sorted array
 *
 * @param arr
 * @param size
 */
void printScores(int arr[], int size) {
    std::cout << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int main() {
    int n = 10;
    int scores[n];
//    int scores[] = {4, 6, 3, 4, 7, 5, 8, 4, 33, 8};

    getScores(scores, n);

    bubbleSort(scores, n);
//    insertionSort(scores, n);
//    selectionSort(scores, n);

    // Output sorted array
    printScores(scores, n);

    return 0;
}
