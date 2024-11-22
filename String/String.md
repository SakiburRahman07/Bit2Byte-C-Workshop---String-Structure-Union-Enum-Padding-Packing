
# 🌟 C Strings: A Complete Guide with Example Code 🌟

This document explains the **C program** demonstrating various string manipulations, including declarations, input/output, and string functions. Let's dive in! 🚀

---

## 📜 Code Overview
```c
#include<stdio.h>
#include<string.h>

int main()
{
    // String declaration using a character array
    char str[100] =  {'H', 'e', 'l', 'l', 'o', '\0'}; // Explicit initialization with characters

    char str1[100] = "Hello"; // Direct string initialization

    // Demonstrating valid and invalid string declarations

    // char str2[]; // Error: size must be specified or initialized directly
    char str3[30]; // Valid declaration, but uninitialized
    char str4[] = "Hello"; // Valid declaration with implicit size

    // Printing a string
    printf("String: %s\n", str); // Outputs the string stored in `str`

    // Input and output of strings
    char str5[100];
    char str6[100];

    // Uncomment the following lines for user input demonstration:
    // Using scanf to take input (reads until a space or newline):
    // scanf("%s", str5);
    // printf("String: %s\n", str5);

    // Using fgets to take input (reads the entire line, including spaces):
    // fgets(str6, 100, stdin);
    // printf("String: %s\n", str6);

    // Measuring string length
    printf("Length of str: %ld\n", strlen(str)); // Calculates the length of `str`

    // Demonstrating string copying
    char old[100] = "old";
    char new[100] = "new";

    strcpy(old, new); // Copies the content of `new` into `old`
    printf("Old: %s\n", old); // Outputs "new"

    // Concatenating strings
    char s1[100] = "Hello";
    char s2[100] = "World";

    strcat(s1, s2); // Appends `s2` to `s1`
    printf("String: %s\n", s1); // Outputs "HelloWorld"

    // Comparing strings
    char s3[100] = "B";
    char s4[100] = "A";

    int res = strcmp(s3, s4); // Compares `s3` and `s4`
    // If res < 0: `s3` is lexicographically smaller than `s4`
    // If res == 0: `s3` is equal to `s4`
    // If res > 0: `s3` is lexicographically larger than `s4`
    printf("Result: %d\n", res); // Outputs the comparison result

    // Finding a substring within a string
    char s5[100] = "Hello World";
    char s6[100] = "World";

    char *pos = strstr(s5, s6); // Searches for `s6` within `s5`
    if(pos){
        printf("Found at position: %ld\n", pos - s5); // Outputs the position of the substring
    } else {
        printf("Not found\n"); // Outputs if the substring isn't found
    }

    return 0; // Successful program execution
}
```

---

## 📘 Detailed Explanation

### 1️⃣ **String Declaration** ✍️
- **Character Array Initialization**: 
  ```c
  char str[100] =  {'H', 'e', 'l', 'l', 'o', '\0'};
  ```
  Explicitly initializes the characters and terminates with `\0`.
- **Direct Initialization**: 
  ```c
  char str1[100] = "Hello";
  ```
  Automatically includes the null terminator.

### 2️⃣ **Valid and Invalid Declarations** ⚠️
- Valid:
  ```c
  char str3[30];  // Declares an uninitialized string
  char str4[] = "Hello"; // Size determined automatically
  ```
- Invalid:
  ```c
  char str2[]; // Error: Must specify size or initialize
  ```

### 3️⃣ **String Input and Output** 📥📤
- **Using `scanf`**:
  Reads until a space or newline.
  ```c
  scanf("%s", str5);
  printf("String: %s\n", str5);
  ```

- **Using `fgets`**:
  Reads an entire line, including spaces.
  ```c
  fgets(str6, 100, stdin);
  printf("String: %s\n", str6);
  ```

### 4️⃣ **String Length** 📏
- Calculate the string length using `strlen`:
  ```c
  printf("Length of str: %ld\n", strlen(str));
  ```

### 5️⃣ **String Copying** 📝
- Copy strings using `strcpy`:
  ```c
  strcpy(old, new);
  printf("Old: %s\n", old); // Outputs "new"
  ```

### 6️⃣ **String Concatenation** ➕
- Append one string to another with `strcat`:
  ```c
  strcat(s1, s2);
  printf("String: %s\n", s1); // Outputs "HelloWorld"
  ```

### 7️⃣ **String Comparison** 🔍
- Compare strings lexicographically using `strcmp`:
  ```c
  int res = strcmp(s3, s4);
  ```
  - `res < 0`: `s3` < `s4`
  - `res == 0`: `s3` == `s4`
  - `res > 0`: `s3` > `s4`

### 8️⃣ **Substring Search** 🔎
- Find a substring with `strstr`:
  ```c
  char *pos = strstr(s5, s6);
  if(pos) {
      printf("Found at position: %ld\n", pos - s5);
  } else {
      printf("Not found\n");
  }
  ```

---

## 🏁 Output Examples

### Example 1: String Concatenation
Input:
```text
s1 = "Hello", s2 = "World"
```
Output:
```text
String: HelloWorld
```

### Example 2: Substring Search
Input:
```text
s5 = "Hello World", s6 = "World"
```
Output:
```text
Found at position: 6
```

---

## 💡 Key Takeaways
- Use `\0` to terminate strings.
- Use appropriate functions for manipulation: `strcpy`, `strcat`, `strcmp`, etc.
- Be cautious with `scanf` and use `fgets` for safer input handling.

---


# String Conversion to Uppercase 🚀

This program takes an input string from the user and converts all alphabetical characters to uppercase. Non-alphabetical characters remain unchanged.

---

## Code Explanation 🖥️

### Header Files
- `#include <stdio.h>`: Includes the standard input-output library for using functions like `printf` and `fgets`.

### Workflow

1. **Input Prompt** 🖋️  
   - The program starts by prompting the user to enter a string.
   - `fgets` is used to safely read the input string, including spaces.

2. **Conversion Logic** 🔄  
   - A `for` loop iterates over each character of the string.
   - If the character is a lowercase (`'a'` to `'z'`) or uppercase (`'A'` to `'Z'`) letter:
     - It is converted to uppercase using the ASCII value adjustment: `input[i] -= 32`.

3. **Output** 📤  
   - Displays the string before and after conversion.

---

## Code Snippet 🧩
```c
#include <stdio.h>

int main()
{
  printf("Enter the string : \n");
  char input[100];
  fgets(input, 100, stdin);
  printf("String before conversion : %s\n", input);

  for (int i = 0; input[i] != '\0'; i++)
  {
    if (input[i] >= 'a' && input[i] <= 'z' || input[i] >= 'A' && input[i] <= 'Z')
    {
      input[i] -= 32;
    }
  }

  printf("String after conversion : %s\n", input);
}
```

---

## Example Usage 🤖
**Input:**  
```
Hello, World!
```

**Output:**  
```
String before conversion : Hello, World!
String after conversion : HELLO, WORLD!
```

---

## Key Points to Remember 📝
1. **ASCII Adjustment**:  
   - Lowercase letters have ASCII values from 97 (`'a'`) to 122 (`'z'`).
   - Subtracting 32 converts them to uppercase (ASCII 65–90).

2. **Non-Alphabet Characters**:  
   - Characters like spaces, numbers, or symbols remain unchanged.

3. **Safe Input Handling**:  
   - `fgets` ensures that the input does not exceed the buffer size.

---

Enjoy exploring strings with this handy program! 🎉


# String Conversion to Uppercase with `toupper` 🚀

This program takes an input string from the user and converts all alphabetical characters to uppercase using the `toupper` function from the `ctype.h` library. Non-alphabetical characters remain unchanged.

---

## Code Explanation 🖥️

### Header Files
- `#include <stdio.h>`: Includes the standard input-output library for using functions like `printf` and `fgets`.
- `#include <ctype.h>`: Includes the library for character handling functions like `toupper`.

### Workflow

1. **Input Prompt** 🖋️  
   - The program starts by prompting the user to enter a string.
   - `fgets` is used to safely read the input string, including spaces.

2. **Conversion Logic** 🔄  
   - A `for` loop iterates over each character of the string.
   - The `toupper` function is used to convert each character to uppercase if it is a lowercase letter.

3. **Output** 📤  
   - Displays the string before and after conversion.

---

## Code Snippet 🧩
```c
#include <stdio.h>
#include <ctype.h>

int main()
{
  printf("Enter the string : \n");
  char input[100];
  fgets(input, 100, stdin);
  printf("String before conversion : %s\n", input);

  for (int i = 0; input[i] != '\0'; i++)
  {
    input[i] = toupper(input[i]);
  }

  printf("String after conversion : %s\n", input);
}
```

---

## Example Usage 🤖
**Input:**  
```
Hello, World!
```

**Output:**  
```
String before conversion : Hello, World!
String after conversion : HELLO, WORLD!
```

---

## Key Points to Remember 📝
1. **Using `toupper`**:  
   - `toupper` is a function that converts a character to its uppercase equivalent if it is a lowercase letter.

2. **Non-Alphabet Characters**:  
   - Characters like spaces, numbers, or symbols remain unchanged.

3. **Safe Input Handling**:  
   - `fgets` ensures that the input does not exceed the buffer size.

---

Enjoy coding with this efficient and elegant approach! 🎉


# 🌟 String Reversal Program in C 🌟

This markdown file explains a simple C program designed to reverse a string entered by the user.

## 🚀 Code Explanation

```c
#include <stdio.h>

int main()
{
  printf("Enter the string : \n");
  char input[100];  // Define a character array to store the input string.
  fgets(input, 100, stdin);  // Read the string from standard input.
  printf("String before conversion : %s\n", input);

  int len = 0;  // Variable to store the length of the string.
  while (input[len] != '\0')  // Loop to calculate the length of the string.
  {
    len++;
  }
  len--;  // Adjusting for the '\0' character.
  printf("Length of the string : %d\n", len);

  // Reverse the string.
  for (int i = 0; i < len / 2; i++)
  {
    char temp = input[i];
    input[i] = input[len - i - 1];
    input[len - i - 1] = temp;
  }
  printf("String after conversion : %s\n", input);
}
```

---

## 📂 Step-by-Step Explanation

### 🔹 Step 1: Input String
- The program uses `fgets()` to read a string from the user.
- `char input[100]` can store up to 99 characters, leaving space for the null terminator (`\0`).

### 🔹 Step 2: Calculate Length
- A `while` loop iterates over the characters in the string until it encounters `\0` (end of the string).
- The length is decremented by 1 to exclude the newline character (`\n`) added by `fgets()`.

### 🔹 Step 3: Reverse the String
- A `for` loop swaps characters from the start and the end of the string, gradually moving towards the center.
- The swapping process uses a temporary variable `temp`.

### 🔹 Step 4: Output the Results
- The program prints:
  - The original string.
  - Its length (excluding the `\0` character).
  - The reversed string.

---

## 🧪 Example Run

### Input:
```
Hello, World!
```

### Output:
```
Enter the string : 
Hello, World!
String before conversion : Hello, World!
Length of the string : 13
String after conversion : !dlroW ,olleH
```

---

## 🎯 Key Points to Remember
1. **String Reversal Logic**: Swapping characters symmetrically.
2. **Length Calculation**: Adjust for the null terminator and newline.
3. **`fgets()` Usage**: Reads a line of text safely, including spaces.

---

# 🌟 String Length Calculation in C 🌟

This markdown file explains a simple C program designed to calculate the length of a string using both manual iteration and the `strlen()` function.

## 🚀 Code Explanation

```c
#include<stdio.h>
#include<string.h>

int main()
{
  printf("Enter the string : \n");
  char input[100];  // Define a character array to store the input string.
  fgets(input, 100, stdin);  // Read the string from standard input.

  int len = 0;  // Variable to store the length of the string.
  while (input[len] != '\0')  // Loop to calculate the length of the string manually.
  {
    len++;
  }
  len--;  // Adjusting for the '\0' character.
  printf("Length of the string : %d\n", len);

  // Using strlen() function
  printf("Length of the string : %ld\n", strlen(input));  // Compute string length using the built-in function.
}
```

---

## 📂 Step-by-Step Explanation

### 🔹 Step 1: Input String
- The program uses `fgets()` to read a string from the user.
- `char input[100]` can store up to 99 characters, leaving space for the null terminator (`\0`).

### 🔹 Step 2: Manual Length Calculation
- A `while` loop iterates over the characters in the string until it encounters `\0` (end of the string).
- The length is decremented by 1 to exclude the newline character (`\n`) added by `fgets()`.

### 🔹 Step 3: Using `strlen()` Function
- The `strlen()` function from the `<string.h>` library is used to calculate the string's length.
- It automatically excludes the null terminator but includes the newline character added by `fgets()`.

### 🔹 Step 4: Output the Results
- The program prints:
  - The length calculated manually.
  - The length calculated using `strlen()`.

---

## 🧪 Example Run

### Input:
```
Hello, World!
```

### Output:
```
Enter the string : 
Hello, World!
Length of the string : 13
Length of the string : 14
```

---

## 🎯 Key Points to Remember
1. **Manual Calculation**: Allows you to understand string traversal.
2. **`strlen()` Function**: A convenient and efficient way to calculate the length.
3. **Newline Character**: Always consider the newline (`\n`) when working with `fgets()`.

---

# 🌟 Palindrome Checker in C 🌟

This markdown file explains a simple C program that checks whether a given string is a palindrome.

## 🚀 Code Explanation

```c
#include<stdio.h>
#include<string.h>

int main()
{
    printf("Enter the string : \n");
    char input[100];  // Define a character array to store the input string.
    fgets(input, 100, stdin);  // Read the string from standard input.

    int len = 0;  // Variable to store the length of the string.
    while (input[len] != '\0')  // Loop to calculate the length of the string manually.
    {
        len++;
    }
    len--;  // Adjusting for the '\0' character.
    printf("Length of the string : %d\n", len);

    // Check for palindrome
    for (int i = 0; i < len / 2; i++)
    {
        if (input[i] != input[len - i - 1])  // Compare characters symmetrically.
        {
            printf("Not a palindrome\n");  // If mismatch, it's not a palindrome.
            return 0;  // Exit the program.
        }
    }
    printf("Palindrome\n");  // If no mismatch, it's a palindrome.
}
```

---

## 📂 Step-by-Step Explanation

### 🔹 Step 1: Input String
- The program uses `fgets()` to read a string from the user.
- `char input[100]` can store up to 99 characters, leaving space for the null terminator (`\0`).

### 🔹 Step 2: Calculate Length
- A `while` loop iterates over the characters in the string until it encounters `\0` (end of the string).
- The length is decremented by 1 to exclude the newline character (`\n`) added by `fgets()`.

### 🔹 Step 3: Check Palindrome
- A `for` loop compares characters symmetrically from the beginning and the end of the string.
- If a mismatch is found, the program prints `Not a palindrome` and exits.
- If no mismatches are found after the loop, the program prints `Palindrome`.

---

## 🧪 Example Runs

### Example 1:
#### Input:
```
madam
```
#### Output:
```
Enter the string : 
madam
Length of the string : 5
Palindrome
```

### Example 2:
#### Input:
```
hello
```
#### Output:
```
Enter the string : 
hello
Length of the string : 5
Not a palindrome
```

---

## 🎯 Key Points to Remember
1. **Palindrome Check Logic**: Compare characters symmetrically.
2. **Manual Length Calculation**: Adjust for the null terminator and newline.
3. **Case Sensitivity**: This code is case-sensitive. Strings like `Madam` would not be considered palindromes.

---


# 🔍 Understanding the String Comparison Program

This program is a simple implementation in C to compare two strings based on their lexicographical order. It demonstrates both manual and library-based string comparison methods. 🚀

---

## 📝 Code Description

### **📥 Input:**
1. **First String:** The user enters the first string.
2. **Second String:** The user enters the second string.

### **🛠️ Process:**
1. **Removing Newline Characters:**
   - The program removes the trailing newline (`\n`) character added by `fgets` to make the strings ready for comparison.
2. **Manual Lexicographical Comparison:**
   - The program iterates through both strings character by character.
   - It determines which string is greater based on ASCII values.
   - If one string ends and the other continues, the longer string is declared greater.
3. **Using `strcmp`:**
   - The program uses the built-in `strcmp` function to verify the manual comparison results.
   - The result of `strcmp`:
     - `0` if both strings are equal.
     - Positive value if the first string is greater.
     - Negative value if the second string is greater.

### **📤 Output:**
- **Comparison Result:**
  - Indicates whether the first string, second string, or both are equal.
- **`strcmp` Result:**
  - Displays the result returned by the `strcmp` function.

---

## 🛠️ **Code Logic in Steps:**

1. **📥 Input Handling:**
   - Two strings are read using `fgets`.
   - Trailing newline characters are replaced with the null character (`\0`).

2. **🔍 Manual Comparison:**
   - Determine the smaller length between the two strings.
   - Loop through each character and compare them:
     - If a mismatch is found, print which string is greater.
     - If no mismatch is found and the lengths are different, the longer string is declared greater.

3. **🔗 Using `strcmp`:**
   - Compare the two strings and print the results.

---

## 🌟 Example Output:

### **Input:**
```plaintext
Enter 1st string:
apple
Enter 2nd string:
banana
```

### **Output:**
```plaintext
Second string is greater
Result: -1
Second string is greater
```

---

## 💡 Key Takeaways:
1. **Lexicographical Order:** Strings are compared based on their ASCII values.
2. **Manual vs Library Functions:** The program demonstrates both approaches for string comparison.
3. **Practical Skills:** Handling input strings and newline characters effectively.

---


# 🔗 Understanding the String Concatenation Program

This program showcases how to concatenate two strings in C, both manually and using the `strcat` library function. 🌟

---

## 📝 Code Description

### **📥 Input:**
1. **First String:** The user enters the first string.
2. **Second String:** The user enters the second string.

### **🛠️ Process:**
1. **Removing Newline Characters:**
   - The program removes the trailing newline (`\n`) character from both strings, making them suitable for manipulation.
2. **Manual String Concatenation:**
   - The second string is appended to the first character by character.
3. **Using `strcat`:**
   - The built-in `strcat` function is used to concatenate two predefined strings.

### **📤 Output:**
- **Concatenated String:** The combined result of the two input strings.
- **Concatenated String using `strcat`:** The combined result of two predefined strings.

---

## 🛠️ **Code Logic in Steps:**

1. **📥 Input Handling:**
   - Two strings are read using `fgets`.
   - Trailing newline characters are replaced with the null character (`\0`).

2. **🔗 Manual Concatenation:**
   - Start appending the characters of the second string to the first from the end of the first string.
   - Add a null character (`\0`) to mark the end of the concatenated string.

3. **🔗 Using `strcat`:**
   - Concatenate predefined strings `s3` and `s4` using the library function `strcat`.

---

## 🌟 Example Output:

### **Input:**
```plaintext
Enter the first string:
Hello
Enter the second string:
World
```

### **Output:**
```plaintext
Concatenated string: HelloWorld
Concatenated string using strcat: Bit2Bytes
```

---

## 💡 Key Takeaways:
1. **Manual vs Library Functions:** Learn how to concatenate strings manually and with the standard library.
2. **Input Handling:** Managing newline characters added by `fgets` effectively.
3. **String Manipulation Skills:** Gain deeper insights into how strings are managed in C.

---






# 🌟 Code Explanation: String Copy in C 🌟

This program demonstrates how to copy one string into another manually in C programming without using library functions like `strcpy`. Here's a breakdown of the code:

---

## 📋 Code Overview

```c
#include<stdio.h>
#include<string.h>

int main()
{
  printf("Enter the 1st string: ");
  char str1[100], str2[100];
  gets(str1);

  printf("Enter the 2nd string: ");
  gets(str2);

  int len1=0;
  int len2=0;
  while(str1[len1] != '\0'){
    if(str1[len1] == '
'){
      str1[len1] = '\0';
      break;
    }
    len1++;
  }
  while(str2[len2] != '\0'){
    if(str2[len2] == '
'){
      str2[len2] = '\0';
      break;
    }
    len2++;
  }

  for(int i=0; i<len2; i++)
  {
    str1[i]=str2[i];
  }
  str1[len2]='\0';

  printf("The copied string is: %s", str1);
}
```

---

## 🔍 Code Explanation

### 1️⃣ **Including Header Files**
```c
#include<stdio.h>
#include<string.h>
```
- The `stdio.h` library is used for input/output functions like `printf` and `gets`.
- The `string.h` library is included but not utilized in this program.

### 2️⃣ **Input Strings**
```c
char str1[100], str2[100];
gets(str1);
gets(str2);
```
- Two strings, `str1` and `str2`, are declared to store the user inputs.
- The `gets()` function is used to capture the strings. 🚨 **Note:** `gets` is unsafe and should be avoided in modern programming.

### 3️⃣ **Length Calculation**
```c
int len1 = 0, len2 = 0;
while(str1[len1] != '\0') { ... }
while(str2[len2] != '\0') { ... }
```
- Loops traverse `str1` and `str2` to calculate their lengths (`len1` and `len2` respectively).
- The program also removes any trailing newline (`
`) by replacing it with a null terminator (`\0`).

### 4️⃣ **String Copy Logic**
```c
for(int i = 0; i < len2; i++) {
  str1[i] = str2[i];
}
str1[len2] = '\0';
```
- Characters from `str2` are copied one by one into `str1`.
- The loop runs up to the length of `str2`, and a null terminator (`\0`) is added at the end of `str1`.

### 5️⃣ **Output the Result**
```c
printf("The copied string is: %s", str1);
```
- The modified `str1` is printed, showing the result of the copy operation. 🎉

---

## 📝 Key Notes

- 🚨 **Caution:** Avoid using `gets()` due to potential buffer overflow risks. Use `fgets()` instead.
- 🌟 The program demonstrates a manual string copy mechanism, enhancing understanding of string manipulation.
- 🛠️ It’s better to include error checks to handle edge cases, such as empty inputs.

---

## ✨ Sample Input/Output

### Input:
```
Enter the 1st string: Hello
Enter the 2nd string: World
```

### Output:
```
The copied string is: World
```

---

💻 **Happy Coding!** 🌈






🌟 **Happy Coding!** 🌟
