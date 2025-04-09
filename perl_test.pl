BugfixingBisection
Find and correct bugs in the bisection algorithm.
You are given an implementation of a function:
int solution(int A[], int N, int X);
This function, when given an array A of N integers, sorted in non-decreasing order, and some integer X, looks for X in A. If X is present in A, then the function returns position of (some) occurrence of X in A. Otherwise, the function returns −1.
For example, given the following array:
A[0] = 1 A[1] = 2 A[2] = 5 A[3] = 9 A[4] = 9
and X = 5, the function should return 2, as A[2] = 5.
The attached code is still incorrect for some inputs. Despite the error(s), the code may produce a correct answer for the example test cases. The goal of the exercise is to find and fix the bug(s) in the implementation. You can modify at most three lines.
Assume that:
·        N is an integer within the range [0..100,000];
·        each element of array A is an integer within the range [−2,000,000,000..2,000,000,000];
·        array A is sorted in non-decreasing order;
·        X is an integer within the range [−2,000,000,000..2,000,000,000].
 
Answer:// hoantu answer

Initial code:
int solution(int A[], int N, int X) {
    int r, m, l;
    if (N == 0) {
        return -1;
    }
    l = 0;
    r = N - 1;
    while (l < r) {
        m = ((l + 1)  + r) / 2; // hoantu answer
        if (A[m] > X)  {
            r = m - 1;
        } else {
            l = m;
        }
    }
    if (A[l] == X) {
        return l;
    }
    return -1;
}



2.     CreateLongestSpike

Create the longest sequence of first increasing (strictly) then decreasing (strictly) integers using numbers from a given array. Return only its length.
 
We will call a sequence of integers a spike if they first increase (strictly) and then decrease (also strictly, including the last element of the increasing part). For example (4, 5, 7, 6, 3, 2) is a spike, but (1, 1, 5, 4, 3) and (1, 4, 3, 5) are not. Note that the increasing and decreasing parts always intersect, e.g.: for spike (3, 5, 2) sequence (3, 5) is an increasing part and sequence (5, 2) is a decreasing part, and for spike (2) sequence (2) is both an increasing and a decreasing part.
Your are given an array A of N integers. Your task is to calculate the length of the longest possible spike, which can be created from numbers from array A. Note that you are NOT supposed to find the longest spike as a sub-sequence of A, but rather choose some numbers from A and reorder them to create the longest spike.
Write a function:

int solution(int A[], int N);

which, given an array A of integers of length N, returns the length of the longest spike which can be created from the numbers from A.
Examples:
1. Given A = [1, 2], your function should return 2, because (1, 2) is already a spike.
2. Given A = [2, 5, 3, 2, 4, 1], your function should return 6, because we can create the following spike of length 6: (2, 4, 5, 3, 2, 1).
3. Given A = [2, 3, 3, 2, 2, 2, 1], your function should return 4, because we can create the following spike of length 4: (2, 3, 2, 1) and we cannot create any longer spike. Note that increasing and decreasing parts should be strictly increasing/decreasing and they always intersect.
Write an efficient algorithm for the following assumptions:
        N is an integer within the range [1..100,000];
        each element of array A is an integer within the range [1..1,000,000].

Answer: // hoantu answer
#include <stdio.h>
#include <stdio.h>
void bubbleSort(int arr[], int size) ;
int longestSpikeLength(int A[], int N) {
    if (N <= 0) {
        printf("Array length must be a positive integer.\n");
        return 0;
    }
    int SpikeLength = 1;
    int temp;
    int temp2 = 0;
    int rootSame = 0;
    int i;
    //Sort ascending 1st the array
    bubbleSort(A, N);
    //Count the maxSpikeLengh
    for (i = 1; i < N; i++) {
        if(A[i] > A[i - 1])
        {   
            SpikeLength++;
            rootSame = 0; // this is used to mark the root value for further ignore the same 
        }
        else if (A[i - 1]== A[i])
        {    
            if((A[i] != A[rootSame]) && (A[N -1] != A[i]))
            {
                SpikeLength++;
                rootSame = i - 1;
            }
        }
    }

    return SpikeLength;
}
void bubbleSort(int arr[], int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
        printf("Sorted array in ascending order: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int A[] = {1, 1, 2, 2 , 8, 3, 3, 3, 7 ,5 ,5};
    int N = sizeof(A) / sizeof(A[0]);

    int longestSpike = longestSpikeLength(A, N);
    printf("Longest spike length: %d\n", longestSpike);

    return 0;
}

3.     DivisibleByThree
Calculate how many numbers divisible by 3 can be obtained after changing at most one digit in a given string.
 
You are given a string S, consisting of N digits, that represents a number. You can change at most one digit in the string to any other digit. How many different numbers divisible by 3 can be obtained in this way?
Write a function:

int solution(char *S);

that, given a string S of length N, returns an integer specifying how many numbers divisible by 3 can be obtained with at most one change of a digit.
Examples:
1. Given S = "23", the function should return 7. All numbers divisible by 3 that can be obtained after at most one change are: "03", "21", "24", "27", "33", "63" and "93".
2. Given S = "0081", the function should return 11. All numbers divisible by 3 that can be obtained with at most one change are: "0021", "0051", "0081", "0084", "0087", "0381", "0681", "0981", "3081", "6081" and "9081".
3. Given S = "022", the function should return 9. All numbers divisible by 3 that can be obtained with at most one change are: "012", "021", "024", "027", "042", "072", "222", "522" and "822".
Write an efficient algorithm for the following assumptions:
·        N is an integer within the range [1..100,000];
·        string S consists only of digits (0-9).

answer: //hoantu

int solution(int arr[], int Len)
{
    
int count = 0;
int i, j , k;
int sum = 0;
int temp;
        for(i = 0 ; i < Len ; i++)
        {
            temp = arr[i];
            for (j = 0; j < 10 ; j ++) // change a digit
            {
                arr[i] = j;
                sum = 0;
                for(k = 0 ; k < Len ; k++)
                {
                    sum += arr[k];
                }
                if ((sum % 3) == 0 )
                {
                    count++;                
                } 
            }
            arr[i] = temp; //restone the begin digit
        }
    return count;
}

int main()
{
    int arr[] = {0,0,8,1};
    int count;
    int len = sizeof(arr)/sizeof(arr[0]);
    count = solution(arr, len);
    printf("%d", count);
}
