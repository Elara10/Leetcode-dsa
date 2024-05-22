// Palindrome Number

// #include<iostream>
// using namespace std;
// void pallindrome(char a,int n)
// {
//     string a="racecar";
//     bool found=true;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=-1;j<-n;j--)
//         {
//             if(a[i]==a[j])
//             {
//                return true;
//                break;
//             }
//         }
//     }
// }
// #include <iostream> // Includes the standard input-output stream library
// #include <string>   // Includes the string library

// using namespace std; // Allows the use of standard library objects without the std:: prefix

// bool isPalindrome(const string& str) {
//     int left = 0; // Initialize the left pointer to the start of the string
//     int right = str.length() - 1; // Initialize the right pointer to the end of the string

//     while (left < right) { // Loop until the two pointers meet in the middle
//         if (str[left] != str[right]) { // Check if characters at left and right pointers are different
//             return false; // If they are different, the string is not a palindrome
//         }
//         left++; // Move the left pointer one step to the right
//         right--; // Move the right pointer one step to the left
//     }
//     return true; // If the loop completes, the string is a palindrome
// }

// int main() {
//     string input; // Declare a string to hold the user input

//     cout << "Enter a string: "; // Prompt the user to enter a string
//     getline(cin, input); // Read the entire line of input into the string

//     if (isPalindrome(input)) { // Call the isPalindrome function and check its return value
//         cout << "The string is a palindrome." << endl; // If true, print that the string is a palindrome
//     } else {
//         cout << "The string is not a palindrome." << endl; // If false, print that the string is not a palindrome
//     }

//     return 0; // Return 0 to indicate successful execution
// }





// #include <iostream> 
// #include <string>   

// using namespace std; 

// bool isPalindrome(const string& str) {
//     int left = 0;
//     int right = str.length() - 1; 

//     while (left < right) { 
//         if (str[left] != str[right]) { 
//             return false; 
//         }
//         left++; 
//         right--; 
//     }
//     return true; 
// }

// int main() {
//     string input = "121"; 

//     if (isPalindrome(input)) { 
//         cout << "The string \"" << input << "\" is a palindrome." << endl; 
//     } else {
//         cout << "The string \"" << input << "\" is not a palindrome." << endl; 
//     }

//     return 0; 
// }





// #include<iostream>
// #include<string>
// using namespace std;
// bool isPallindrome(string str)
// {
//     int left=0;
//     int right=str.length()-1;
//     while(left<right)
//     {
//        if(str[left]!=str[right])
//        {
//         return false;
//     }
//     left++;
//     right--;
//     }
//     return true;
// }
// int main()
// {
//     string str="121";
//       if (isPallindrome(str)) { 
//         cout << "The string \"" << str << "\" is a palindrome." << endl; 
//     } else {
//         cout << "The string \"" << str << "\" is not a palindrome." << endl; 
//     }

//     return 0; 
// }







#include<iostream>
using namespace std;
bool isPallindrome(string str)
{
    int left=0;
    int right=str.length()-1;
    while(left<right)
    {
        if(str[left]!=str[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main()
{
    string str="racwsewecar";
    if(isPallindrome(str))
    {
        cout<<"The string "<< str << " is a Pallindrome";
    }
    else{
    cout<<" The string "<< str << " is not a Pallindrome";
    }
}