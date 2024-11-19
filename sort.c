// #include<stdio.h>
// #define LEN 5


// 10 11 4 6 8 2 5
// 10 4 6 8 2 5 11 
// 4 6 8 2 5 10 11
// 4 6 2 5 8 10 11
// 4 2 5 6 8 10 11 
//BUBBLE sort

// int main(){
//     int arr[LEN];
//     printf("enter 10 num-- ");
//     int i=0;
//     for(i=0; i<LEN;i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for(i=0  ; i < LEN-1; i++)
//     {
//         for(int j = 0 ; j < LEN - i ; j++)
//         { 
//             if(arr[j] > arr[j+1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }        
//     }

//     for(i=0; i<LEN;i++)
//     {
//         printf("%d\n", arr[i]);
  
//     }

// }



#include<stdio.h>
#define LEN 5


// 10 11 4 6 8 2 5
// 10 4 6 8 2 5 11 
// 4 6 8 2 5 10 11
// 4 6 2 5 8 10 11
// 4 2 5 6 8 10 11
// 2 4 5 6 8 10 11
// 7 
// low = 0 high= 7 mid = 3
// low 4 high = 6  

//BUBBLE sort

int main(){
    int arr[LEN];
    printf("enter 10 num-- ");
    int i=0;
    for(i=0; i<LEN;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0  ; i < LEN-1; i++)
    {
        for(int j = 0 ; j < LEN - i ; j++)
        { 
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }        
    }

    for(i=0; i<LEN;i++)
    {
        printf("%d\n", arr[i]);
  
    }
    int num;
    printf("what num u want to search -");
    scanf("%d",&num);
    int mid;

    int low=0,high=LEN;
    int position=-1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == num) {
        position =  mid;
        break;
        } else if (arr[mid] < num) {
        low = mid + 1;
        } else {
        high = mid - 1;
        }
    }

    if(position == -1)
    {
        printf("Element not in list");
    }
    else{
        printf("Element found at position %d",position);
    }

}

