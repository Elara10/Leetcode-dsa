
// 1. Two Sum
// Attempted
// Easy
// Topics
// Companies
// Hint
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

//  Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// #include <iostream>
// using namespace std;

// void findIndices(int arr[], int n, int target) {
//     bool found = false; // Flag to track if a pair is found
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) { // Start j from i + 1 to avoid duplicates
//             if (arr[i] + arr[j] == target) {
//                 cout << "[" << i << "," << j << "]";
//                 found = true; // Set found flag to true
//                 break; // Exit the inner loop since we found a pair
//             }
//         }
//         if (found) break; // Exit the outer loop if a pair is found
//     }
//     if (!found) cout << "No such pair found!";
// }

// int main() {
//     int arr[] = {3, 2, 4};
//     int target = 6;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     findIndices(arr, n, target);
//     return 0;
// }



// #include<iostream>
// using namespace std;
// void findIndices(int arr[],int n,int target)
// {
//     bool found=false;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]+arr[j]==target)
//             {
//             cout<<"["<< i << "," << j<<"]";
//             found=true;
//             break;
//             }

//         }
//         if(found) break;
//     }
//     if(!found) cout<<"No such pair found";
// }
// int main()
// {
//     int arr[]={2,7,5,3};
//     int n=4;
//     int target=5;
//     findIndices(arr,n,target);
// }






// #include<iostream>
// using namespace std;
// void findIndices(int arr[],int n,int target)
// {
//     bool found=false;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]+arr[j]==target)
//             {
//                 cout<<"[" << i << "," << j << "]";
//                 found= true;
//                 break;

//             }
//         }
//         if(found) break;

//     }
//     if(! found) cout<<"No such pairs found";
// }
// int main()
// {
//     int arr[]={3,2,4};
//     int n=3;
//     int target=6;
//     findIndices(arr,n,target);
// }






#include<iostream>
using namespace std;
void findIndices(int arr[],int n,int target)
{
    bool found=false;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<"[" << i << ","<< j <<"]";
                found=true;
                break;
            }
        }
        if(found) break;
    }
    if(!found) cout<<"No such pairs found";
}
int main()
{
    int arr[]={7,3,1,5,9};
    int n=5;
    int target=15;
    findIndices(arr,n,target);
}