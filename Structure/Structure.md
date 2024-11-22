
# 🌟 Comprehensive C Program: Student Information 🌟

This program showcases a variety of concepts in C, including structures, pointers, arrays, and advanced string handling. It defines and manipulates multiple structures for storing and displaying student information. Let's break it down:

---

## 📋 Code Overview

```c
#include <stdio.h>
#include <string.h>
```

- The `stdio.h` library is used for input/output operations.
- The `string.h` library provides string manipulation functions like `fgets`, `strcpy`, etc.

---

## 🏗️ Structure Definitions

### 1️⃣ **Basic Student Structure**
```c
typedef struct {
    char name[100];
    int roll;
    float marks;
} student;
```

- **Fields**:
  - `name`: Stores the student's name as a string.
  - `roll`: Stores the student's roll number as an integer.
  - `marks`: Stores the student's marks as a floating-point number.

### 2️⃣ **Nested Structure for Detailed Information**
```c
typedef struct {
    char first_name[100];
    char last_name[100];
} name;

typedef struct {
    int day;
    int month;
    int year;
} dob;

typedef struct {
    name name;
    dob dob;
    int roll;
    float marks;
} student_info;
```

- **Fields**:
  - `name`: A nested structure for storing first and last names.
  - `dob`: A nested structure for storing date of birth (day, month, year).
  - `roll`: Stores the roll number.
  - `marks`: Stores the marks.

---

## 🔍 Code Explanation

### 1️⃣ **Reading and Displaying Basic Student Information**
```c
student s1;
fgets(s1.name, 100, stdin);
scanf("%d", &s1.roll);
scanf("%f", &s1.marks);
```
- `fgets` reads the student's name (up to 100 characters), and `scanf` collects their roll number and marks.
- The `strcspn` function removes the newline character from the input.

### 2️⃣ **Using Default Values**
```c
student s2 = {"John", 2, 98.5};
student s3 = {.name = "Alice", .roll = 3, .marks = 99.5};
```
- Demonstrates initializing structures using direct assignment and designated initializers.

### 3️⃣ **Handling an Array of Students**
```c
student std[100];
int n;
scanf("%d", &n);

for (int i = 0; i < n; i++) {
    fgets(std[i].name, 100, stdin);
    scanf("%d", &std[i].roll);
    scanf("%f", &std[i].marks);
}
```
- Allows storage and input for multiple students using an array of `student` structures.

### 4️⃣ **Pointer Manipulation**
```c
student *ptr = &s1;
printf("Name: %s
", ptr->name);
```
- Demonstrates accessing structure fields using pointers and the `->` operator.

### 5️⃣ **Nested Structures and Advanced Input**
```c
fgets(s_info.name.first_name, 100, stdin);
fgets(s_info.name.last_name, 100, stdin);
scanf("%d", &s_info.dob.day);
scanf("%d", &s_info.dob.month);
scanf("%d", &s_info.dob.year);
```
- Collects detailed student information, including first name, last name, and date of birth, using nested structures.

---

## ✨ Key Highlights

- **Use of Structures**: Demonstrates basic and nested structures for organizing data.
- **Pointer Access**: Shows how to manipulate and access structure members via pointers.
- **Array of Structures**: Handles multiple entries dynamically.
- **Best Practices**:
  - Replacing `gets` with `fgets` for safe input handling.
  - Using `strcspn` to sanitize input.

---

## 📝 Sample Input/Output

### Input:
```
Enter the name of the student: Alex
Enter the roll number of the student: 1
Enter the marks of the student: 95.5
```

### Output:
```
Name: Alex
Roll: 1
Marks: 95.50
```

---

## 🌟 Advanced Example Output

### Input for Nested Structures:
```
Enter the first name of the student: John
Enter the last name of the student: Doe
Enter the day of birth of the student: 15
Enter the month of birth of the student: 8
Enter the year of birth of the student: 2000
Enter the roll number of the student: 10
Enter the marks of the student: 89.5
```

### Output:
```
Name: John Doe
Date of Birth: 15/08/2000
Roll: 10
Marks: 89.50
```

---

💻 **Happy Coding!** 🌈
