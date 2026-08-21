## ⚡ Daily Challenges (Off-Roadmap)
Beyond theoretical study, I complete one practical exercise per day to strengthen my logic.

---

# 🚀 My C Programming Study Portfolio

Welcome to my C language learning repository! This project organizes my evolution from basic logic to data structures and complex simulations. Each folder is structured to demonstrate the specific skills I have been developing.

---

## 📂 Repository Organization

### [01-Fundamentals](./01-Fundamentals(Exercises))
**What you will find here:**
The foundation of my journey. Exercises demonstrating mastery of the language's essential syntax.
* **Skills:** Variable manipulation (`int`, `float`), data input/output (`scanf`/`printf`), arithmetic operators, and conditional structures (`if`, `else if`, `else`).
* **Highlight:** Parity verification and proportionality calculation exercises.

### [02-Functions](./02-Functions(Exercises))
**What you will find here:**
The transition from sequential code to modular programming.
* **Skills:** Creating custom functions, parameter passing, return values, and the Single Responsibility Principle.
* **Highlight:** Functions encapsulating comparison logic and sign verification.

### [03-Simulations](./03-Simulations(Exercises))
**What you will find here:**
Applications utilizing system resources and non-deterministic logic.
* **Skills:** System libraries (`time.h`, `stdlib.h`), pseudo-random number generation (`rand`, `srand`), and real-time event simulation.
* **Highlight:** Randomness tests and scoreboard simulators.

### [04-Pointers](./04-Pointers(Exercises))
**What you will find here:**
Exploring C's "superpower": the direct manipulation of memory addresses.
* **Skills:** Understanding addresses (`&`), dereference operators (`*`), pointer arithmetic, passing parameters by reference, and the intrinsic relationship between pointers and arrays.
* **Highlight:** Implementations of value swapping (`swap`) and functions that modify multiple variables simultaneously via memory.

### [05-Arrays](./05-Arrays(Exercises))
**What you will find here:**
Data collection management and memory handling.
* **Skills:** One-dimensional arrays (numeric arrays), matrices (string arrays), loops (`for`), extreme value searching (min/max), and statistical calculations applied to lists.
* **Highlight:** Full number analyzer and the name registration system using character matrices.

### [06-Strings](./06-Strings(Exercises))
**What you will find here:**
Text manipulation and character processing in the C language.
* **Skills:** Use of character arrays (`char[]`), string manipulation (`strlen`, `strcpy`, `strcat`, `strcmp`), reading strings with `fgets`, handling special characters (`\n`, `\0`), and iterating through strings with loops.
* **Highlights:** Text validation systems, word comparison, and full string manipulators (such as reversing, character counting, and input normalization).

### [07-Structs](./07-Structs(Exercises))
**What you will find here:** 
Data organization and modeling of complex structures using `struct` in the C language.
* **Skills:** Creating and using `structs`, accessing members with the dot operator (`.`), using pointers to structs (the arrow operator `->`), passing structs to functions (by value and by reference), arrays of structs, and organizing composite data.
* **Highlight:** Systems that simulate real-world entities (such as registries for people, products, or students), manipulation of multiple related data points, and building structures closer to real-world applications.

### [08-File Input and Output (I/O)](./08-File_Input_Output(Exercises))
**What you will find here:**
File manipulation for reading and writing persistent data outside the program's volatile memory.
* **Skills:** Use of file pointers (`FILE *`), opening and closing files (`fopen`, `fclose`), reading (`fscanf`, `fgets`, `fread`) and writing (`fprintf`, `fputs`, `fwrite`), access modes (`r`, `w`, `a`), and basic error handling.
* **Highlights:** File-based storage systems (such as user registration), external data reading/parsing, and manipulation of both binary and text files.

### [09-Typedef](./09-Typedef(Exercises))
**What you will find here:** 
The use of `typedef` to create aliases for data types, making the code more readable, organized, and easier to maintain.
* **Skills:** Defining new names for primitive and composite types, simplifying complex declarations (such as pointers and structs), improving readability, and standardizing types in the code.
* **Highlight:** Creating custom types (e.g., `typedef struct`), reducing declaration complexity, and building more professional foundations for larger projects.

### [10-Pointers-II-Arithmetic](./10-Pointers_2_Arithmetic(Exercises))
**What you will find here:**
Advanced pointer manipulation focusing on arithmetic, exploring how to navigate memory efficiently and safely.
* **Competencies:** Use of pointer arithmetic (`p + i`, `p++`), understanding how pointer types influence memory jumps (`sizeof`), iterating over arrays using pointers, and the equivalence between pointers and arrays (`p[i] == *(p + i)`).
* **Highlights:** Direct memory navigation without using indices, building pointer-based loops (including the use of sentinel values), and developing a deeper understanding of the internal mechanics of arrays in C.

### [11-Manual-Memory-Allocation](./11-Manual_Memory_Allocation(Exercises))
**What you will find here:**
An introduction to manual memory management in C, exploring how to allocate, use, and release memory dynamically during program execution.
* **Skills:** Using `malloc`, `calloc`, `realloc`, and `free` functions; understanding the difference between automatic memory (stack) and dynamic memory (heap); utilizing the `sizeof` operator for safe allocation; and manipulating pointers to access dynamically allocated memory.
* **Highlights:** Total control over the memory lifecycle, prevention of memory leaks, understanding how data can persist beyond function scope, and building fundamental dynamic structures (the foundation for lists, queues, and trees).

### [12-Scope](./12-Scope(Exercises))
**What you will find here:**
Studies and exercises on scope in C, understanding how variables, functions, and code blocks have different levels of visibility and lifetime within a program.
* **Skills:** Understanding local and global scope, difference between automatic and `static` variables, correct usage of variables within `{}` blocks, understanding data lifetime and scope, as well as best practices to avoid conflicts and unexpected side effects.
* **Highlight:** Deep understanding of how the compiler organizes variables in memory, how functions isolate data internally, and how to control access to information within the program – an essential foundation for writing safer, more organized, and predictable code.

### [13-Types-of-Variables-Part-2](./13-Types-Part-2(Exercises))
**What you will find here:**
Studies and exercises on advanced integer types in the C language, exploring sign modifiers (`signed` and `unsigned`) and types capable of storing larger amounts of data, such as `long long` and `unsigned long long`.
* **Skills:** Understanding the differences between signed and unsigned numbers, correct usage of `signed char`, `unsigned char`, `unsigned short`, `unsigned int`, `unsigned long`, `long long`, and `unsigned long long` types, analysis of the storage limits of each type, appropriate variable selection for different scenarios, and memory usage optimization.
* **Highlight:** Deep understanding of how numbers are internally represented by the computer, how the size and sign of a variable affect the range of values it can store, and how these characteristics directly impact the efficiency, safety, and predictability of C programs.

### [14-Types-of-Variables-Part-3-Conversions](./14-Types-Part-3-Conversions(Exercises))

**What you will find here:**
Studies and exercises on type conversions in the C language, covering the transformation of numeric values into strings, strings into numbers, and conversions between different numeric types.
* **Skills:** Use of functions such as `sprintf()` and `snprintf()`, understanding of explicit and implicit conversions, analysis of precision loss, truncations, value overflows, storage limits, and precautions with buffers and strings in C.
* **Highlight:** Understanding that conversions in C require attention, as changes between types can alter values, lose information, or generate unexpected behavior. This chapter reinforces the importance of writing conversions in a conscious, safe, and predictable manner.

### [15-Types-of-Variables-Part-4-Qualifiers-and-Specifiers](./15-Types-Part-4-Qualifiers-and-Specifiers(Exercises))

**What you will find here:**
Studies and exercises on type qualifiers and storage specifiers in the C language, exploring how to add special rules and characteristics to variables, pointers, and functions.
* **Skills:** Use of the `const` qualifier, creation of constant variables, application of `const` in function parameters, differentiation between pointers to constant values and constant pointers, combination of multiple levels of `const`, and interpretation of complex declarations involving pointers.
* **Highlight:** Understanding the differences between `const int *p`, `int *const p`, and `const int *const p`, control over what can or cannot be modified through a pointer, and development of safer, more predictable code resistant to accidental changes.

### [16-Multi-File-Projects](./16-Multi-File-Projects(Exercises))

**What you will find here:**
Studies and exercises on organizing C programs using multiple files, exploring how to separate declarations, implementations, and different parts of a project to build larger, more organized applications.
* **Skills:** Creation and use of `.c` and `.h` files, declaration of function prototypes in headers, use of `#include` with custom files, creation of include guards with `#ifndef`, `#define`, and `#endif`, use of `static` and `extern` across different files, separate compilation with `gcc -c`, generation of object files `.o`, and linking multiple modules into a single executable.
* **Highlight:** Understanding the complete build process of multi‑file projects, differentiating preprocessing, compilation, and linking, avoiding implicit declarations and repeated inclusions, as well as understanding how object files allow recompiling only modified parts of larger projects.

---

## 🛠️ Technologies and Tools
* **Language:** C (C23 Standards)
* **Environment:** Linux (Ubuntu)
* **Compiler:** GCC
* **Versioning:** Git

## 📈 Personal Evolution
This repository is constantly updated as I advance toward topics like **Pointers**, **Dynamic Allocation**, and **Advanced Data Structures**. The goal is to demonstrate a solid foundation for low-level development and performance-oriented systems.

---
*Developed by [Vitor Santana]*