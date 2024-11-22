
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

🌟 **Happy Coding!** 🌟
