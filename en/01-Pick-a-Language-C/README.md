# 🖥️ C Language Studies - Beej's Guide

Repository dedicated to learning C focused on Computer Science fundamentals.

---

## 🛠️ Development Environment
- **OS:** Ubuntu Linux
- **IDE:** CLion
- **Compiler:** GCC

---

## 🧠 C Philosophy (According to Beej's Guide)
- **Low Level:** C is a language without "seatbelts." It allows you to interface directly with memory and hardware.
- **Connectivity:** Learning C is the foundation for understanding Operating Systems and modern languages (C++, Rust, Go).
- **The Challenge:** The concept of **Pointers** is identified as the main obstacle (memory addresses).

---

### 🗺️ Study Progress:
<br>

<details>
  <summary><b>🔹 Day 1: Chaos and Order in C</b></summary>

---

[Day 1 codes can be found here](./CODE_BY_DAY/DAY_001)

---

<details>
 <summary><b>🏁 Preface (Section 1.0)</b></summary>
<br>

---

[Section 1.0 codes can be found here](./CODE_BY_DAY/DAY_001/(SECTION-1-0)-PREFACE)

---

To begin with, C is a minimalist language. As the creators (Kernighan & Ritchie) say: *"C is not a big language, and it is not well served by a big book"*.

### 😵 Obfuscated Code
Often, those looking at C for the first time feel like they are looking at Greek. There is even a worldwide competition (**IOCCC**) to see who can write the most unreadable code possible.

Look at this "monster" from 2001:
```c
E((ck?main((z?(stat(M,&t)?P+=a+'{'?0:3:execv(M,k),a=G,i=P,y=G&255,sprintf(Q,y/'@'-3?A(*L(V(%d+%d)+%d,0)
```
**The good news:**
- If this looks confusing now, it won't be for long. C has a simple core that we will explore layer by layer.

#### 📜 The Evolution of the Language:
C has changed a lot since 1988 (when the famous 2nd edition of the K&R book was released). Many new features have been added, but the essence remains the same: **total control over the machine.**

#### 🎯 What to expect from this journey:
- **Simplicity:** We will start with the basic core and expand into the libraries.
- **Clarity:** The goal is to move from total confusion to a state where C code becomes "natural reading."
- **Practice:** C is a language learned by "cracking your head" and compiling code.

> **💡 Developer Insight:**
> C is small, but what you can build with it is giant. The secret is not memorizing commands, but understanding how memory and the processor talk to each other.

</details>

</details>

---

<details>
  <summary><b>🔹 Day 2: Hello World</b></summary>

---

[Day 2 codes can be found here](./CODE_BY_DAY/DAY_002)

---

<details>
<summary><b>🚀 What to expect from C? (Section 2.1)</b></summary>
<br>

"Where do these stairs go?"  
"They go up."  
— *Ghostbusters*

C is a **low-level** language. Back in the day, it was seen as the height of freedom compared to Assembly (machine language). Today, next to Python or JavaScript, it seems basic and limited. It allows you to do **anything**, but it will make you work twice as hard for it.

#### 🤔 Why use C nowadays?

There are two main reasons for you to be here:

1. **Root Learning:** C is connected to the **computer's core**. By learning C, you understand how software talks to memory. **There are no seatbelts.** You will write code that crashes the PC, and that is part of the learning process.
2. **Power Tool:** C is still king in **Operating Systems** (like Windows, Linux, and MacOS) and **Embedded Systems**.



#### 🕵️ The "Boogeyman": Pointers
If you already program in another language, almost everything in C will feel familiar. The only thing that truly ties everyone's brain in knots is **Pointers**.

* **The Reality:** You probably already know the concept behind them, but C forces you to be explicit.
* **The "Click":** Before you understand pointers, they feel like slippery eels. The second you get it, they become the easiest and most powerful tool in your arsenal.

> **💡 Developer Insight:**
> Aside from pointers, the rest is just memorizing a new way to do what you already know. Prepare to get as close to the computer's core as you can get without having to write in binary.

</details>

---

<details>
<summary><b>🔬 Hello, World! - The Autopsy (Section 2.2)</b></summary>
<br>

The code below is the canonical starting point. Let's open this beast up and see what makes it pulse:

```c
/* Hello world program */        // 1. Multi-line comment
#include <stdio.h>                // 2. Preprocessor and Header

int main(void)                    // 3. The Entry Point
{
    printf("Hello, World!\n");    // 4. The Function Call
}                                 // 5. The End of the Line
```

#### 🛠️ 1. Comments (`/*` `*/` and `//`)
Everything between `/*` and `*/` or after `//` is **ignored by the compiler**. It serves as a way to leave messages for the "Future self". Believe me: you will forget why you wrote certain lines, so comment!

#### 🏗️ 2. The Preprocessor and the Octothorpe (`#`)
Everything that starts with `#` (the famous "hashtag" or, for those in the know, the **Octothorpe**) is resolved before the compiler even begins.

* **`#include`**: Tells the preprocessor: "Take all the content of this file and paste it here right now."
* **`<stdio.h>`**: This is the "Standard I/O" header. Without it, C wouldn't know what `printf()` is. It is the instruction manual for data input and output.

#### 🏁 3. The `main()` Function
This is the special function. The operating system automatically looks for it as soon as the program starts.

* None of your code runs before `main()`.
* When the code reaches the last brace `}`, the program terminates, and you return to the terminal.

#### 📢 4. `printf()` and the `\n`
This is where the work happens. We are calling a function that already exists in the standard library.

* **Argument**: We pass the string `"Hello, World!\n"`.
* **`\n` (Newline)**: This is the "line break" character. Without it, the next text you print would be stuck on the same line.

#### ⚡ 5. From Code to Executable
Your `.c` file is just text. To become a program, it passes through this funnel:

1.  **Preprocessor**: Resolves the `#includes`.
2.  **Compiler**: Transforms the text into **Machine Code** (the language that the CPU understands fast).
3.  **Executable**: The final file ready to run.

In the terminal (Linux/WSL), the classic command is:

```bash
gcc -o hello hello.c  # Compiles hello.c and generates the 'hello' executable
./hello               # Runs the program in the current directory
```

> **💡 Developer Insight:**
C is fast because, after compilation, there are no intermediaries. The processor reads the machine code directly. That's why if you miss a semicolon `;`, the compiler doesn't even try to run it; it stops everything immediately.

</details>

---

<details>
<summary><b>⚙️ Compilation Details (Section 2.3)</b></summary>
<br>

If you come from Python or JavaScript, you might have never worried about a separate "compilation step." In C, this isn't just a detail; it's the heart of the workflow. Compiling is the process of transforming your text (source code) into a program that the Operating System can execute natively.

#### 🌍 The Language Spectrum
Different languages handle code in distinct ways. See where C fits in:

| Language Type | What happens? | Example |
| :--- | :--- | :--- |
| **Interpreted** | The code is read and executed on the fly by another program (interpreter). | Python, JS |
| **Bytecode** | The code becomes a "middle ground" for a Virtual Machine (JVM/PVM). | Java, C# |
| **Compiled (C)** | The code turns into **actual 0s and 1s** that the CPU understands directly. | C, C++, Rust |

#### ⚡ Why is C so fast?
While Python needs a "virtual machine" running all the time to translate the code as it executes, C generates **Machine Code**.

* **No Intermediaries:** It is the processor's native language.
* **Raw Performance:** Once compiled, the program is a standalone and extremely fast file, as the CPU wastes no time "interpreting" anything.

#### 🛠️ The Compiler
The compiler is the software responsible for this translation. The most famous one in the Unix/Linux world is **GCC** (*GNU Compiler Collection*).

* **In the IDE:** You click "Build," but behind the scenes, the IDE is calling the compiler with a series of complex commands.
* **In the Terminal:** You have total control. This is where tools like **Bash** and **PowerShell** come in to manage projects with hundreds of files.

#### 💻 Build via Command Line
The basic command every C developer needs to master is:

```bash
gcc -o my_program source.c
```
- `gcc`: Calls the compiler.
- `-o my_program`: Defines the output file name. Without this, C generates a default file named `a.out`.
- `source.c`: Your original source code.

> **💡 Developer Insight:**
> C was designed to be compiled. This is why it has no "safety nets" at runtime (like Java's Garbage Collector). The focus is to offer maximum performance with minimum interference between your code and the hardware.

</details>

---

<details>
<summary><b>🛠️ Building with `gcc` (Section 2.4)</b></summary>
<br>

Now that we understand what the compiler does, let's see how to command it in practice. If you have a file named `hello.c` in your current directory, the command to transform it into an executable program is:

```bash
gcc -o hello hello.c
```
#### 🔍 Dissecting the command:

To transform your code into a program, we use `gcc` with the following arguments:

* **`gcc`**: Calls the compiler itself.
* **`-o hello`**: The `-o` flag stands for **output**. It tells GCC: *"Take the result of the compilation and save it with the name `hello`"*.
    * ⚠️ **Note:** If you forget this part, the compiler will generate a default file named `a.out`.
* **`hello.c`**: This is the source code file (the text you wrote) that you want to compile.

#### 🏗️ Handling Multiple Files

In real life, code is not kept in a single file. It is broken down into several parts to maintain organization and make maintenance easier. `gcc` can read all of them at once and "glue" everything into a single final executable:

```bash
gcc -o my_game interface.c characters.c npc.c items.c
```
The compiler will process each of these `.c` files, resolve the connections between them, and generate one large executable called `my_game`.

</details>

---

<details>
 <summary><b>🍏 Building with `Clang` (Section 2.5)</b></summary>
<br>

If you are developing on a **Mac**, the default compiler that comes with the system is not `gcc`, but **Clang**.

#### 🕵️ The GCC "Disguise"
macOS installs a "wrapper" (a shortcut) so that if you type `gcc` in the terminal, the system understands and executes `clang` behind the scenes. This ensures that old build scripts continue to work without issues.

#### 🛠️ Differences and Choices
* **Clang:** Known for providing friendlier error messages and being the foundation for Apple and Google (Android) tools.
* **GCC Proper:** If you truly need the original `gcc` on a Mac, you can install it via **Homebrew**.

> **💡 Developer Insight:**
> For 99% of cases at the beginning of your studies, it doesn't matter which one you use. The commands we learned for `gcc` (like the `-o` flag) work exactly the same way in `clang`. The important thing is to understand that the compiler is the tool, not the language.

</details>

---

<details>
<summary><b>💻 Building via IDEs (Section 2.6)</b></summary>
<br>

If you are using an **Integrated Development Environment (IDE)**, such as VS Code, CLion, or Tizen Studio, you won't need to type commands in the terminal all the time. The IDE works as a powerful interface that manages the compiler behind the scenes for you.

#### ⌨️ Essential Build and Run Shortcuts:

| Tool | Build (Compile) | Run (Execute) |
| :--- | :--- | :--- |
| **CLion** | `CTRL` + `F9` | `SHIFT` + `F10` |
| **Visual Studio** | `CTRL` + `F7` | `CTRL` + `F5` |
| **VS Code** | `F5` (Build + Debug) | `F5` |
| **Xcode (Mac)** | `CMD` + `B` | `CMD` + `R` |

#### 🚀 The CLion Advantage
**CLion** is the IDE I use in my studies. Unlike simple text editors, it is 100% focused on C and C++.
* **Native CMake:** CLion uses CMake as its default build system, which is excellent for large projects.
* **Static Analysis:** It warns you about memory and pointer errors even before you try to compile.
* **Refactoring:** It makes renaming variables and organizing code professionally much easier.

#### 🛠️ VS Code Setup
If you need to use **VS Code**, it is essential to install the official **Microsoft C/C++ extension** to enable *IntelliSense* and the debugger.

#### 🍎 Xcode Command Line Tools
On macOS, even when using CLion or any other IDE, you need the command line tools. Install them by running:
```bash
xcode-select --install
```

> **💡 Developer Insight:**
> As much as an IDE (especially a robust one like CLion) makes life easier with shortcuts and autocomplete, understanding how to build via the terminal (Command Line) is what saves you when the development environment "breaks" or when you need to configure a server where there is no graphical interface.

</details>

---

<details>
<summary><b>📜 C Versions - The Timeline (Section 2.7)</b></summary>
<br>

C has evolved significantly since 1972. Each version (dialect) is generally named after the year its specification was finalized. Understanding this is vital to know if a modern function will run on an older system.

| Version | Common Name | What changed? |
| :--- | :--- | :--- |
| **K&R C** | "Original C" (1978) | Created by Kernighan and Ritchie. Today it feels like "Archaic English" to us. |
| **C89 / C90** | ANSI C | The first official standardization. Defines the core of C to this day. |
| **C99** | C99 | The most popular version. Added line comments `//` and variables in the middle of the code. |
| **C11** | C11 | Added support for Unicode and Multi-threading (simultaneous tasks). |
| **C17 / C18** | C17 | A bug-fix update for C11. It is the current stable standard. |
| **C23** | C23 | The latest version, focused on modernizing the language and removing outdated features. |

#### 🛠️ Enforcing a Version in the Compiler
You can tell `gcc` or `clang` exactly which version you want to use with the `-std=` flag. In **CLion**, this is usually configured in the `CMakeLists.txt` file.

Terminal example:
```bash
gcc -std=c11 -pedantic foo.c
```
- `-std=c11`: Uses the 2011 standard.
- `-pedantic`: Activates "strict mode." The compiler will complain about anything that doesn't strictly follow the chosen standard.

#### 🚩 The Pro Developer's Flag Combo:
Beej (and I as well) recommends compiling your studies with the maximum level of warnings. This helps catch logic errors even before running the program:
```bash
gcc -Wall -Wextra -std=c23 -pedantic program.c
```
- `-Wall`: **W**arnings **all** (Enables all common warnings).
- `-Wextra`: Enables even more detailed additional warnings.


</details>

</details>

---

<details>
  <summary><b>🔹 Day 3: Variables and Declarations</b></summary>

---

[Day 3 codes can be found here](./CODE_BY_DAY/DAY_003)

---

<details>
<summary><b> 📦 Variables (Section 3.1.0 - Section 3.1.3):</b></summary>
<br>

---

[Section 3.1.0 - 3.1.3 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-1)-VARIABLES)

---

<details>
<summary><b>💾 What is a Variable? (Section 3.1.0)</b></summary>
<br>

To the user, it is a name. To C, a variable is an **abstraction of a physical memory address**.

#### 🏗️ The Anatomy of a Variable
Every variable in your code has four fundamental characteristics that the computer needs to manage:

1.  **Name (Identifier):** The nickname we use in the code (e.g., `age`).
2.  **Type:** Defines how many bytes it occupies and how those bits should be interpreted (e.g., `int` vs `float`).
3.  **Address (Pointer):** The exact location of the first byte of the variable in RAM.
4.  **Value:** The current state of the bits stored at that address.

#### 🗺️ Memory as an Array of Bytes
Think of RAM as a **gigantic array of bytes**. Each byte has an index (the address).
- If you declare an `int x`, C reserves a block (usually 4 bytes).
- The name `x` becomes the label for the address of the **first byte** of that block.

#### 🔄 The Leap to Pointers
The reason we study this now is simple: in C, you can manipulate the **address** directly, not just the **value**.
* **Common Variable:** `x = 10;` (Changes what is inside the room).
* **Pointer:** `p = &x;` (Stores the room number where `x` lives).

> **🎓 Note:** In C, you are very close to the hardware. When you declare a variable, you are literally reserving electricity and silicon to store your data. If you don't initialize a variable, it will contain "memory garbage" — the leftover data from some program that used that address before yours!

#### 🏨 The Hotel Analogy (RAM Memory)
Imagine the computer's memory as a large hotel with thousands of rooms:

1.  **The Room (Memory):** Each room holds a piece of data (bytes).
2.  **The Room Number (Address/Pointer):** Every room has a unique number. This index is what we call an **address**, **location**, or **pointer**.
3.  **The Name on the Reservation (Variable):** Since it is hard to memorize "Room 0xFF32", we give it a name, such as `age`.

</details>

---

<details>
<summary><b>📜 Variable Naming Rules (Section 3.1.1)</b></summary>
<br>

---

[Section 3.1.1 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-1)-VARIABLES/(SECTION-3-1-1)-VARIABLE-NAMES)

---

#### Variable Names

#### ✅ What is allowed:
- Letters (A-Z, a-z), Numbers (0-9), and Underscore (`_`).

#### ❌ What is forbidden or restricted:
- **Starting with a number:** E.g., `1vitor` (Error!).
- **System Reserved:** Avoid starting with `__` or `_` followed by an uppercase letter (e.g., `_V`).

#### 💡 Tip:
C is **Case Sensitive**, meaning `vitor`, `Vitor`, and `VITOR` would be three different variables at different memory addresses.

</details>

---

<details>
<summary><b>🧬 Variable Types (Section 3.1.2)</b></summary>
<br>

---

[Section 3.1.2 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-1)-VARIABLES/(SECTION-3-1-2)-VARIABLE-TYPES)

---

#### 📦 Basic Types:
- `int`: Integer numbers (e.g., 2, -10).
- `float`: Real numbers with decimals (e.g., 3.14).
- `char`: A single character (e.g., 'A').
- `char *`: A string/text (e.g., "Hello").

#### ⚠️ The Danger of "Memory Garbage":
- Variables declared but not initialized (e.g., `int i;`) hold **indeterminate** values.
- **Always** initialize your variables to avoid undefined behavior.

##### 🖨️ Formatted Output:
To print variables, we use `printf` with format specifiers:
- `%d` -> integers
- `%f` -> floats
- `%s` -> strings
- `%c` -> char

> **💡 Practical Discovery (Truncation):**
> If you try to store a decimal number (e.g., 3.99) in an `int` variable, C will **truncate** the value, resulting in just `3`. It does not round; it simply discards the fractional part to fit the integer type.

</details>

---

<details>
<summary><b>🔘 Boolean Types (Section 3.1.3)</b></summary>
<br>

---

[Section 3.1.3 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-1)-VARIABLES/(SECTION-3-1-3)-BOOLEAN-TYPES)

---

#### 🧠 The Concept of Truth in C:
- **False:** Represented by the number `0`.
- **True:** Any number other than zero (`1`, `-5`, `100`).

#### 🆕 In C23:
- We now have the `bool` type and the keywords `true` and `false` natively.
- The numerical value of `true` is `1`.

#### ⚠️ Comparison Caution:
Even though `12` is considered "true" in a conditional, the expression `(12 == true)` will return **False (0)**, because C compares the numerical values (`12` vs `1`).

```c
bool rich = true;
if (rich) {
    printf("This will show up!\n");
}
```

</details>

</details>

---

<details>
<summary><b>🧠 Operators and Expressions (Section 3.2.0 - Section 3.2.7)</b></summary>
<br>

---

[Section 3.2.0 - 3.2.7 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2)-OPERATORS-AND-EXPRESSIONS)

---

<details>
<summary><b>🔢 Arithmetic Operators (Section 3.2.1)</b></summary>
<br>

---

[Section 3.2.1 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2)-OPERATORS-AND-EXPRESSIONS/(SECTION-3-2-1)-ARITHMETIC-OPERATORS)

---

#### 🔢 Common Operations:
- `+`, `-`, `*`, `/`: Basic operations.
- `%`: Modulo (Remainder of division).

#### ⚡ Shorthands:
- `i += 5` is the same as `i = i + 5`.

#### 🚫 What NOT to do:
- **Power:** Do not use `^`. Use `pow(base, exponent)` from the `<math.h>` library.

> **Pro Tip:** Watch out for integer division! If you do `int x = 5 / 2;`, the result will be `2` (C truncates the .5 because the variable is an int).
</details>

---

<details>
<summary><b>↔️ Ternary Operator (Section 3.2.2)</b></summary>
<br>

---

[Section 3.2.2 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2)-OPERATORS-AND-EXPRESSIONS/(SECTION-3-2-2)-TERNARY-OPERATOR)

---

#### 💡 The "one-line if":
- **Syntax:** `condition ? true : false;`
- **Example:** `y += (x > 10) ? 17 : 37;`
    - If `x` is greater than 10, it adds 17. Otherwise, it adds 37.

#### 🚀 Advantage:
- It can be used inside other functions (like `printf`) to decide which value to pass on the fly.

```c
// Example code:
int x = 7;
char *result = (x % 2 == 0) ? "even" : "odd";
printf("The number %d is %s\n", x, result);
```
</details>

---

<details>
<summary><b>🆙 Increment and Decrement (Section 3.2.3)</b></summary>
<br>

---

[Section 3.2.3 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2)-OPERATORS-AND-EXPRESSIONS/(SECTION-3-2-3)-INCREMENT-AND-DECREMENT)

---

#### 🆙 Step Operators:
- `i++` (Post): Uses the current value in the expression and **then** increments.
- `++i` (Pre): Increments first and **then** uses the new value in the expression.
- The same applies to decrement (`i--` and `--i`).

#### 🧪 Comparative Example:
```c
int i = 10;
printf("%d", i++); // Will print 10 (and i becomes 11 afterwards)
printf("%d", ++i); // Will print 12 (i was already 11, becomes 12 and prints)
```

### 🛠️ Practical Challenge in CLion:

Try to predict what this code will print before running it:

```c
int a = 5;
int b = 5;
printf("A: %d\n", a++ + a++);
printf("B: %d\n", ++b + ++b);
```

</details>

---

<details>
<summary><b>➡️ Comma Operator (Section 3.2.4)</b></summary>
<br>

---

[Section 3.2.4 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2)-OPERATORS-AND-EXPRESSIONS/(SECTION-3-2-4)-COMMA-OPERATOR)

---

#### 1. ➡️ Left-to-Right Sequence:
- Allows grouping multiple expressions into a single line.
- The resulting value of the expression is always the value of the **last** one (the rightmost).

```c
int x;
x = (10, 20, 30); 
// C processes 10, then 20, and finally 30.
// The final result assigned to 'x' is 30.
```

#### 2. Practical Use: Loops (for) 🚀
   This operator is frequently used in for loops to initialize or increment multiple variables simultaneously within the same instruction block.

Double Counting Example:

```c
// 'i' goes up from 0 to 10 and 'j' goes down from 10 to 0 at the same time
for (int i = 0, j = 10; i <= 10; i++, j--) {
printf("i: %d | j: %d\n", i, j);
}
```

</details>

---

<details>
<summary><b>⚖️ Conditional Operators (Section 3.2.5)</b></summary>
<br>

---

[Section 3.2.5 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2)-OPERATORS-AND-EXPRESSIONS/(SECTION-3-2-5)-CONDITIONAL-OPERATORS)

---

These operators compare two values and return a boolean result (true or false).

#### 🔍 List of Operators:
* `a == b`: True if **a** is equal to **b**.
* `a != b`: True if **a** is not equal to **b**.
* `a < b`: True if **a** is less than **b**.
* `a > b`: True if **a** is greater than **b**.
* `a <= b`: True if **a** is less than or equal to **b**.
* `a >= b`: True if **a** is greater than or equal to **b**.

#### ⚠️ The Most Common Error in C:
Never confuse **Assignment** (`=`) with **Comparison** (`==`):
- `x = 10`: You are **storing** the number 10 inside x.
- `x == 10`: You are **asking** if x is equal to 10.

#### 🛠️ Usage Example:
```c
if (a <= 10) {
    printf("Success! The value is within the limit.\n");
}
```

</details>

---

<details>
<summary><b>🧠 Logical Operators (Section 3.2.6)</b></summary>
<br>

---

[Section 3.2.6 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2)-OPERATORS-AND-EXPRESSIONS/(SECTION-3-2-6)-LOGICAL-OPERATORS)

---

These operators are used to combine or invert conditional expressions.

|  Operator  | Meaning | Description |
|:----------:| :---: | :--- |
|    `&&`    | **AND** | True if **all** conditions are true. |
| `\|    \|` | **OR** | True if **at least one** condition is true. |
|    `!`     | **NOT** | Inverts the value: turns true into false and vice versa. |

#### 🛠️ Usage Examples:

**1. Using "AND" (&&):**

```c
// Only enters the if block if BOTH conditions are true
if (x < 10 && y > 20) {
    printf("Condition accepted!\n");
}
```

**2. Using "OR" (||):**
   Only one of the conditions needs to be true for the code to enter the if.

```c
// Enters the if block if x is less than 10 OR if y is greater than 20
if (x < 10 || y > 20) {
    printf("At least one of the conditions is true!\n");
}
```

**3. Using "NOT" (!): The ! operator has high precedence, which is why we usually use parentheses.**

```c
if (!(x < 12)) {
    // This is the same as saying: "If x is NOT less than 12" (meaning x >= 12)
    printf("x is greater than or equal to 12\n");
}
```

#### 💡 Mental Test:
Given the code: `if (5 > 2 || 2 > 10)`, will the program enter the `if` block?

**Answer:** **Yes!** With the `||` (OR) operator, the result is true if **at least one** part is true (and since 5 is greater than 2, the condition is satisfied).

> **Pro Tip**: In C, the && and || operators are "short-circuit" operators. In an && operation, if the first condition is false, C doesn't even check the second one, because it knows the final result will be false anyway. ⚡

</details>

---

<details>
<summary><b>📏 The `sizeof` Operator: Measuring Memory (Section 3.2.7)</b></summary>
<br>

---

[Section 3.2.7 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2)-OPERATORS-AND-EXPRESSIONS/(SECTION-3-2-7)-SIZEOF-OPERATOR-(Measuring-Memory))

---

`sizeof` is the tool we use so we don't have to guess the size of things. Since C runs on everything (from smartwatches to supercomputers), the size of an `int` can change. `sizeof` ensures your code adapts.

#### 🗝️ What you need to know:
* **Unit of Measurement:** It always returns the value in **Bytes**.
* **The Result's "ID":** The value it returns is not a standard `int`, but a `size_t`.
* **In `printf`:** To display this value, we use the `%zu` specifier.
* **Moment of Discovery:** C resolves `sizeof` during **compilation**. This means the program is "born" already knowing these sizes.

#### 🧪 Practical Examples:

```c
float grade = 9.5;
char letter = 'V';

// 1. Measuring a variable directly
printf("The variable 'grade' occupies %zu bytes\n", sizeof grade);

// 2. Measuring a type (parentheses are mandatory here!)
printf("An 'int' occupies %zu bytes on this machine\n", sizeof(int));

// 3. Measuring expressions
// C checks the result of the calculation (1 + 1.0 = 2.0), which is a 'double'
printf("The calculation result occupies %zu bytes\n", sizeof(1 + 1.0));
```

#### 🎓 Why learn this now?
Imagine you are going to buy a box to store 10 oranges. You need to know the size of an orange so the box isn't too small, right? In C, when we create lists (arrays) or reserve memory manually (dynamic allocation), `sizeof` is what tells us the exact size of the "box" the computer needs to prepare.

</details>

</details>


---

<details>
<summary><b>⚖️ Control Flow (Section 3.3.0 - Section 3.3.5)</b></summary>
<br>

---

[Section 3.2.7 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3)-CONTROL-FLOW)

---

<details>
 <summary><b>🚦 Introduction - Control Flow (Section 3.3.0) </b></summary>
<br>

---

[Section 3.3.0 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3)-CONTROL-FLOW/(SECTION-3-3-0)-CONTROL-FLOW)

---

Flow control allows the program to decide which parts of the code to execute based on specific conditions.

### 🧱 Blocks vs. Single Statements
In C, after a control command (such as `if`, `while`, or `for`), you can execute **a single line** or an **entire block**.

#### 1. Single Statement
If you don't use braces, only the **first line** after the command will be controlled by it.

```c
if (x == 10) 
    printf("x is 10\n"); // Only this line depends on the if
```

#### 2. Code Blocks (Braces { })
To execute multiple actions based on a single condition, **we use "curly braces"** to create a block.

```c
if (x == 10) {
printf("x is 10\n");
printf("This also only happens if x is 10\n");
}
```

#### ⚠️ The "Visual Trap" Danger
Be careful! Unlike Python, C ignores indentation and whitespace. What defines what belongs to the if are the braces, not the spaces you leave.
Common Error Example:

```c
if (x == 10)
    printf("This depends on x\n");
    printf("This ALWAYS happens!\n"); // Warning: This line is NOT inside the if!
```

#### 💡 Tip:
Follow the "Veteran's Best Practice": Always use braces { }, even for a single line. This prevents silly mistakes in the future and makes your code much easier to read.

</details>

---

<details>
<summary><b> 🔀 The `if-else` Structure (Section 3.3.1)</b></summary>
<br>

---

[Section 3.3.1 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3)-CONTROL-FLOW/(SECTION-3-3-1)-STRUCTURE-(if-else))

---

The `if` statement tests a condition. If it's true, the `if` block runs. If it's false, C skips to the next command — unless you provide an `else`.

#### 1. Plan B: `else`
The `else` keyword is used to execute code specifically when the `if` condition **fails**.

```c
int i = 99;

if (i == 10) {
    printf("i is 10!\n");
} else {
    printf("i is not 10. That irritates me a bit...\n");
}
```

#### 2. The if-else (The Fork in the Road)
Here you ensure that one of the two paths will be taken. It is impossible for C to execute both the if and the else at the same time, or to execute neither.

```c
#include <stdio.h>

int main() {
int i = 99;

    if (i == 10) {
        printf("i is 10!\n");
    } else {
        printf("i is decidedly NOT 10.\n");
        printf("That irritates me a bit, frankly.\n");
    }

    return 0;
}
```

#### 3. Cascading: else if
When you have multiple options and want to test them one by one until you find the true one, you "stack" the else if statements.

```c
int i = 99;

if (i == 10) {
    printf("i is 10!\n");
} else if (i == 20) {
    printf("i is 20!\n");
} else if (i == 99) {
    printf("i is 99! My favorite!\n");
} else {
    printf("i is a number I've never heard of.\n");
}
```

</details>

---

<details>
<summary><b>🔄 The `while` Loop: Repetition with Condition (Section 3.3.2)</b></summary>

---

[Section 3.3.2 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3)-CONTROL-FLOW/(SECTION-3-3-2)-WHILE-(LOOP))

---

The `while` loop executes a block of code repeatedly **as long as** a specific condition remains true.

#### ⚙️ How the Cycle Works:
1.  **Test:** C checks the condition inside the parentheses.
2.  **Execution:** If the condition is true, it runs the code block `{ }`.
3.  **Repeat:** It goes back to step 1 and checks the condition again.

#### 🛠️ Practical Example (Counter):
```c
int i = 0;

while (i < 10) {
    printf("i is now %d!\n", i);
    i++; // Important: Increment so that the condition eventually becomes false!
}

printf("Loop finished!\n");
```

</details>

---

<details>
<summary><b>🔃 Flow Control: The `do-while` Loop (Section 3.3.3)</b></summary>
<br>

---

[Section 3.3.3 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3)-CONTROL-FLOW/(SECTION-3-3-3)-DO-WHILE-(CONTROL-FLOW))

---

The `do-while` is a repetition structure with a **post-test condition**. It is essential when the program logic requires the loop body to be processed at least once before the first validation occurs.

#### 🏗️ Architecture and Execution Flow
Unlike the standard `while` loop, which may execute **zero** times, the `do-while` guarantees **at least one execution** (guaranteed initial pass).

1.  **Entry:** The flow enters the `{ }` block directly without checking conditions.
2.  **Processing:** All instructions inside the curly braces are executed.
3.  **Evaluation:** Only then does the compiler evaluate the boolean expression in `while(condition);`.
4.  **Branching:** If `true`, the flow returns to `do`. If `false`, the loop terminates.

#### 💻 Technical Comparison: `while` vs `do-while`

```c
int i = 10;

// Scenario A: 'while' checks first. Since 10 is not < 10, nothing happens.
while (i < 10) {
    printf("This will never be printed.\n");
    i++;
}

// Scenario B: 'do-while' executes first. It prints "10", increments to 11, and only then stops.
do {
    printf("do-while executed with i = %d\n", i);
    i++;
} while (i < 10); // <--- ATTENTION: The semicolon here is mandatory!
```

#### 🎲 Advanced Application: Pseudo-random Numbers
A classic use case is repeating a task until a specific random value is generated.

```c
#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required to use time as a seed

int main(void) {
    int r;
    do {
        r = rand() % 100; // Generates a number between 0 and 99
        printf("Attempt: %d\n", r);
    } while (r != 37);    // Repeats the draw until the number is exactly 37
    
    return 0;
}
```

#### 🔍 The Determinism Problem (rand vs srand)
rand(): Generates "pseudo-random" numbers. Without a different seed, it will produce the same sequence every time the program starts.

srand(): Used to "seed" the generator. We typically use srand(time(NULL)) so that each execution uses the current time as a base, ensuring different sequences.

#### 🎓 Note:
The do-while loop is ideal for data input validation. For example: "Ask the user for a grade -> Check if it's valid -> If not, ask again." You cannot check if the grade is valid before asking the user to type it!

</details>

---

<details>
<summary><b>⚙️ The `for` Loop: The King of Repetitions (Section 3.3.4)</b></summary>
<br>

---

[Section 3.3.4 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3)-CONTROL-FLOW/(SECTION-3-3-4)-FOR-(LOOP))

---

The `for` loop is the ideal choice when you know **in advance** how many times you want to repeat a block of code. Although it can be written as a `while` loop, the `for` structure organizes initialization, condition, and update in a single line, improving readability and preventing logic errors.

#### 🧬 Loop Anatomy
The `for` statement is divided into three sections separated by semicolons (`;`):

`for (initialization; condition; update)`

1.  **Initialization:** Executed only **once**, before the loop begins. Usually used to set the starting value of the counter.
2.  **Condition:** Checked **before** each iteration. If it evaluates to false at the start, the loop won't run at all.
3.  **Update:** Executed at the **end** of each block, just before testing the condition again. Typically used to increment (`i++`) or decrement (`i--`) the counter.

#### 🛠️ Technical Comparison: `while` vs `for`
Both code snippets below produce the exact same result (printing from 0 to 9), but the `for` version is much more compact:

```c
// While version
i = 0;
while (i < 10) {
    printf("i is %d\n", i);
    i++;
}

// For version (Much cleaner!)
for (i = 0; i < 10; i++) {
    printf("i is %d\n", i);
}
```

#### 🚀 Advanced Features
The Comma Operator (Multiple Actions):
You can initialize and update multiple variables simultaneously within the same for loop.

```c
for (i = 0, j = 999; i < 10; i++, j--) {
    printf("i: %d, j: %d\n", i, j);
}
```

The "Eternal" Infinite Loop:
Unlike while(1), in a for loop, you can simply omit all three parts. If no condition is provided, C assumes it is always true.

```c
for (;;) {
    printf("Running until the end of time...\n");
}
```

Optional Sections:
Any of the three parts can be left empty, as long as the semicolons are kept.

#### 🎓 Note:
The primary advantage of for over while is scope and safety. In a for loop, the control variable (like i) is bound to the loop logic. If you forget i++ at the end of a while loop, you create an infinite loop bug. In a for loop, since the update is part of the command signature, it is much harder to forget to update the counter.

</details>

---

<details>
<summary><b>🚥 The `switch` Statement: Direct Selection (Section 3.3.5)</b></summary>
<br>

---

[Section 3.3.5 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3)-CONTROL-FLOW/(SECTION-3-3-5)-SWITCH-CASE)

---

The `switch` statement allows you to execute different parts of code based on the value of an **integer expression**. Think of it as a control panel where you jump directly to the button (case) that was pressed.

#### 🏗️ Anatomy of the `switch`
Its functionality is based on three key keywords:
1.  **`case`:** Defines the values you want to test.
2.  **`break`:** The "emergency exit." If you omit it, C will continue executing the cases below (the dangerous *fall-through*).
3.  **`default`:** The catch-all. It executes if none of the previous cases are met.

#### 🛠️ Practical Example (Goat Counter)

```c
int goat_count = 2;

switch (goat_count) {
    case 0:
        printf("You have no goats.\n");
        break;
    case 1:
        printf("You have a single goat.\n");
        break;
    case 2:
        printf("You have a pair of goats.\n");
        break;
    default:
        printf("You have a whole herd of goats!\n");
        break;
}
```

⚠️ The "Fall-through" Phenomenon
If you forget the break, C doesn't stop at the end of the case. It keeps "sliding" into the next block of code, even if the value of the next case doesn't match!

```c
switch (x) {
    case 1:
        printf("1\n"); // If x is 1, it prints "1"...
        // Missing break!
    case 2:
        printf("2\n"); // ...and THEN it prints "2" as well!
        break;
}
```

#### 💡 Pro Tip:
If you intentionally want a case to "fall through" into another, always leave a comment: // Fall through!. This prevents other programmers from thinking it was a mistake.

#### 🔍 The Clever Trick: Using char in switch
Beej mentioned that switch only accepts integers. However, since C stores char types as numbers (ASCII codes), you can use letters in your cases!

```c
char choice = 'b';
switch (choice) {
    case 'a':
        printf("Option A\n"); 
        break;
    case 'b':
        printf("Option B\n"); 
        break;
}
```

#### 🎓 Note:
Never try to use decimal numbers (float/double) or strings inside a switch. The compiler will throw an error immediately. The switch statement was designed for discrete, exact values.

</details>

</details>

</details>

---
<details>
  <summary><b>🔹 Day 4: Functions </b></summary>

---

[Day 4 codes can be found here](./CODE_BY_DAY/DAY_004)

---

<details>
<summary><b>🚀 Introduction to Functions (Section 4.0)</b></summary>
<br>

---

[Section 4.0 codes can be found here](./CODE_BY_DAY/DAY_004/(SECTION-4-0)-INTRODUCTION-TO-FUNCTIONS)

---

Functions are the "recipes" or subprograms that make up a C application. They allow you to break a large problem into smaller, organized, and reusable pieces. In C, everything revolves around functions, including the program's entry point: `main`.

---

### 🏗️ 1. Function Anatomy

Unlike dynamic languages, C requires you to be explicit about what goes in and what comes out of a function (static typing).

```c
int add_one (int n) {  // "int" is the return type; "int n" is the parameter
    return n + 1;      // "return" ends the function and hands back the value
}
```
- Return Type: Defines the type of data the function delivers back to the caller. If the function doesn't return anything, we use the void type.
- Parameters: These are special local variables that receive input data. They only exist while the function is being executed.
- Body: The block within curly braces { } where the logic is processed.

### 2. Fundamental Concepts

#### Pass by Value (The Copy Concept) 🛡️

This is a vital C behavior: Arguments are copied into parameters.
When you pass a variable to a function, C creates a "stunt double" (binary copy) of it at a new memory address. Any changes made to the parameter inside the function will not affect the original variable in main or elsewhere.

#### B. Using void 🚫

The keyword void means "empty" or "nothing."
Void Return: The function performs an action (e.g., printing a log or moving a file) but does not produce a numerical or data result to be stored.
Void Parameter: Explicitly indicates that the function accepts no input (e.g., int main(void)).

#### C. Order and Declaration 📋

The C compiler processes files linearly (from top to bottom).
If you call a function in main() that is physically written below it in the file, the compiler will issue an "unknown function" error.
Rule: Either define your functions above main() or declare a function prototype at the top of the file.

### 🎲 3. Practical Example: Direct Execution Function

```c
#include <stdio.h>

// Defined before use (main)
void say_hello(void) {
    printf("Hello, World! This is a void function.\n");
}

int main(void) {
    say_hello(); // Function call
    return 0;    // Success
}
```

#### 🎓 Tips:

- Modularity: A good function should follow the Single Responsibility Principle. If it does too many things, break it down into smaller functions.
- The main Function: This is the "master function." The return 0; at the end tells the Operating System that the program finished without errors.
- Type Contract: If a function is declared as int, the compiler expects a return with an integer value. Ignoring this can cause undefined behavior at the hardware level.

</details>

---

<details>
<summary><b>🛡️ Pass by Value (Section 4.1)</b></summary>
<br>

---

[Section 4.1 codes can be found here](./CODE_BY_DAY/DAY_004/(SECTION-4-1)-PASS-BY-VALUE)

---

In C, the rule is absolute: **Everything you pass to a function is COPIED.** No exceptions.

#### 🧪 The Increment Experiment
Look at this code and try to predict the result:

```c
void increment(int a) {
    a++; // Increments the copy
}

int main(void) {
    int i = 10;
    increment(i);
    printf("i == %d\n", i); // What will be printed?
}
```
Result: i == 10

#### 🧠 What happened inside the memory?

1. In main: There is a "slot" in memory named i with the value 10.

2. The Call: When you call increment(i), C creates a new slot named a (the parameter) and copies the value 10 into it. It's as if it performs a = i.

3. Inside the Function: The function executes a++, so a becomes 11. But the slot i back in main remains untouched!

4. The End: When the function finishes, the slot a is destroyed (discarded). We return to main, and i is still 10.

#### Summary:
- Independence: The parameter is an independent local variable.

- Isolation: Functions in C are isolated. They do not have permission to modify variables from other functions directly.

- Isolation: Functions in C are isolated. They do not have permission to modify variables from other functions directly.

#### 🎓 Tip:

Remember the pirate's line from the text: "Prepare for disappointment." If you expect a function to change your original variable just by passing it as an argument, you'll encounter a bug. C operates on local copies, NO MATTER WHAT.

</details>

---

<details>
 <summary><b>📋 Function Prototypes (Section 4.2)</b></summary>
<br>

---

[Section 4.2 codes can be found here](./CODE_BY_DAY/DAY_004/(SECTION-4-2)-FUNCTION-PROTOTYPES)

---

The C compiler reads code from top to bottom. If you try to call a function before defining it, the compiler won't know the return type or what parameters it accepts.

#### 🕵️ What is a Prototype?
A prototype is simply the function's "signature" (its first line) followed by a semicolon `;`. It serves to tell the compiler: *"Hey, somewhere in this code (or in another file), there is a function with this name and format. You can trust me!"*.

```c
#include <stdio.h>

int foo(void);  // Prototype: Advance notice to the compiler

int main(void) {
    int i = foo(); // Now it works! The compiler already knows the signature.
    printf("%d\n", i);
    return 0;
}

int foo(void) { // Actual function definition
    return 3490;
}
```

#### ⚖️ Why use Prototypes?
- Organization: Allows you to place main() at the top of the file (which is a best practice) and other functions below it.
- Separate Files: Enables calling functions that are located in other .c files.
- Safety: The compiler verifies if you are passing the correct arguments even before reaching the function's definition.

#### 🚔 Why does printf work without a prototype?
- Actually, it does have a prototype! When you write #include <stdio.h>, you are literally pasting hundreds of function prototypes for input and output (like printf and scanf) at the very top of your code.

#### 🎓 Note:
In the old days (C89 standard), you could call functions without warning, and C would try to "guess" what they did (known as implicit declaration). Today, this is either forbidden or triggers serious warnings. Always use prototypes to keep your code legitimate and professional!

#### 🧭 Guidance:
Think of prototypes as **a book's Table of Contents**. You read the table of contents to know which chapters exist before reading the actual content. In C, prototypes at the top of the file provide an overview of everything the program is capable of doing.

**Technical Tip: In a prototype**, you don't even need to include the variable names, only the types.
Example: `int sum(int, int)`; is a valid prototype for `int sum(int a, int b)`. However, including the names helps document what each number actually represents!

</details>

--- 

<details>
<summary><b>🚫 Empty Parameter Lists: The Danger of `()` vs `(void)` (Section 4.3)</b></summary>
<br>

---

[Section 4.3 codes can be found here](./CODE_BY_DAY/DAY_004/(SECTION-4-3)-EMPTY-PARAMETER-LISTS)

---

While it might look like just a shortcut or "laziness," there is a critical technical difference between leaving parentheses empty and using the `void` keyword.

#### 🧪 The Difference in the Prototype
This is where the confusion happens. In C, the two declarations below are **NOT** the same:

```c
void foo();       // ⚠️ "I have no information about the parameters"
void foo(void);   // ✅ "I guarantee this function accepts NO parameters"
```

- 1 - void foo(); (The Old Way): Tells the compiler to "turn off" type checking for parameters. It doesn't know if the function takes 0, 1, or 10 arguments. If you pass something by mistake, the compiler might remain silent, and the program could crash later.

- 2 - void foo(void); (The Correct Way): Explicitly informs the compiler that the function is empty. If you try to pass any argument, the compiler will alert you immediately with an error.

#### 🏗️ In the Function Definition
When you are writing the function body, the behavior of void foo() is treated by the modern standard (C11 and later) as if it were void foo(void).

However, for the sake of consistency and clarity, you should always use void.

#### 🎓 Note:
The golden rule is simple: Always use void. There is no legitimate reason in modern C to leave parentheses empty in a prototype. Doing this helps the compiler act as your "bodyguard," preventing you from passing data where it doesn't belong.

</details>
</details>

---

<details>
  <summary><b>🔹 Day 5: Pointers </b></summary>

---

[Day 5 codes can be found here](./CODE_BY_DAY/DAY_005)

---

<details>
<summary><b>📍 Pointers in C - Introduction (Section 5.0)</b></summary>
<br>

---

[Section 5.0 codes can be found here](./CODE_BY_DAY/DAY_005/(SECTION-5-0)-POINTERS-IN-C-INTRODUCTION)

---

Pointers are possibly the most feared topic in the C language. However, they are simply a more **explicit** way of dealing with what other languages (such as Java, Python, or JavaScript) call **references**.

#### 🧠 The Fundamental Concept
Imagine you have a variable. It lives at a specific address in your computer's memory.
* **The Variable:** It is the "house" and what is inside it.
* **The Pointer:** It is a piece of paper with the "address" written on it. It points to where the house is located.

#### ⚖️ Reference vs. Object
In C, we need to be very clear about what we are manipulating:
1.  **The Reference (Pointer):** The memory address where a piece of data resides.
2.  **The Value:** The actual data stored at that address.

Unlike high-level languages, C does not hide this from you. You have full control (and full responsibility) over these addresses.

> **⚠️ Note:** The fear of pointers comes from the possibility of accessing memory addresses that do not belong to your program. It is like trying to open a stranger's door with your key: the Operating System will intervene and shut down your program (the famous *Segmentation Fault*).

#### 🚀 Why use Pointers?
Since C makes a copy of everything (Pass-by-Value), as we saw in the functions section, pointers are the only way to:
* Modify original variables inside a function.
* Handle large volumes of data without wasting memory on unnecessary copies.
* Create complex data structures (linked lists, trees, etc.).

#### 🎓 Tip:
The golden rule for this chapter is: Visualize the memory. Whenever you get confused, draw a small box (the variable) and an arrow (the pointer) pointing to it.

</details>

---

<details>
<summary><b>🏡 Memory and Variables: Where things live (Section 5.1)</b></summary>
<br>

---

[Section 5.1 codes can be found here](./CODE_BY_DAY/DAY_005/(SECTION-5-1)-MEMORY-AND-VARIABLES)

---

Before understanding what a pointer is, you need to understand how the computer stores your data.

#### 📦 Memory as a Giant Array
Imagine your computer's RAM as a gigantic sequence of numbered "small boxes."
* Each box stores **1 Byte** (8 bits).
* The number of each box is its **Address**.
* Addresses are sequential (0, 1, 2, 3...).

#### 📏 Size Matters (`sizeof`)
Not all data fits in a single box (1 byte). An `int` or a `float`, for example, usually occupies **4 bytes** (4 neighboring boxes).
* You can use the `sizeof` operator to find out how many bytes a type occupies in your system:
```c
printf("An int uses %zu bytes\n", sizeof(int)); // Usually prints 4
```

#### 📍 What is a Pointer?
- A Pointer is simply a variable that stores a Memory Address.
- Common Variable: Stores a value (e.g., `int i = 10;`).
Pointer: Stores the "box number" where that value is located (e.g., "the value 10 is in box no. 140,727...").

#### 🏠 The House Analogy
- The House: Is the variable (it has color, size, furniture).
- The House Address: Is the pointer (it's just a piece of paper saying "X Street, no. 100").
The address is not the house, but it tells you exactly where to find it.

#### 🔍 The "Address-of" Operator (&)
How do we find the address of a variable in C? We use the ampersand character: &.
```c
int i = 10;
printf("The value of i is %d\n", i);
printf("The address of i is %p\n", (void *)&i);
```

📝 Technical Details:
- `%p`: This is the format specifier for printing pointers (addresses).
- **Hexadecimal:** The address usually appears as something like `0x7ffddf7072a4`. It is just a base-16 number representing the memory index.
- **Cast (`void *)`:** We use this in `printf` to avoid compiler warnings, ensuring the address is treated generically.

#### 🎓 Note:
Don't be intimidated by the size of the address numbers (e.g., trillions). Your computer uses **"Virtual Memory"**, making the program believe it has an immense memory space all to itself. The exact value of the number doesn't matter to us; what matters is that this number is the "key" to finding the original data.

🔑 Key Point:
The key point here is the following:

1. i is the **content** of the box.

2. &i is the **number** written on the lid of the box.

</details>

---

<details>
<summary><b>🧭 Pointer Types (Section 5.2)</b></summary>
<br>

---

[Section 5.2 codes can be found here](./CODE_BY_DAY/DAY_005/(SECTION-5-2)-POINTER-TYPES)

---

So far, we have seen how to "view" a variable's address. Now, we are going to learn how to **store** that address in a special variable: the **Pointer**.

#### ✍️ How to Declare a Pointer
To tell C that a variable is a pointer, we use the asterisk (`*`) between the type and the variable name.

```c
int i;    // A regular variable that stores an integer.
int *p;   // A variable that stores the ADDRESS of an integer.
```
- Reading: We read `int *p` as "p is a pointer to int" or "p is an int-pointer."

#### 🤝 The Compatibility Rule
A pointer is picky: if you declared a pointer to `int`, it **must only store** addresses of `int` type variables. If you try to store a float's address in an `int *`, the compiler will complain (and rightly so!).

#### 🔗 Making the Connection (Pointing)
To make a pointer "point" to a variable, we use the address-of operator (`&`) that we learned earlier:
```c
int i = 10;
int *p;    // Initially, 'p' contains memory junk (points to nowhere).

p = &i;    // Now 'p' receives the address of 'i'. We say that "p points to i."
```

🔄 What is happening in memory?
1. `i` has a **value** (e.g., 10).

2. `i` has an **address** (e.g., `0x7FF...`).

3. `p` has its own address, but its content is the address of `i`.

##### 🎓 Note:
Think of `int *p` as a "remote control." The remote is not the TV, but it knows exactly where the TV is and how to interact with it. In this step, we are just storing the address in the remote. In the next step, we will learn how to press the buttons!

##### 📝 Guidance:
A very common beginner mistake is trying to do this: `p = i;` (without the `&`).

- `p = i;` attempts to say that the memory address is the number 10. The computer will try to access "drawer #10" in memory, which likely belongs to the Operating System, and... **BOOM**! Your program crashes.

**Always use `&` to assign an address to a pointer.**

</details>

---

<details>
<summary><b>🔓 Dereferencing (Section 5.3)</b></summary>
<br>

---

[Section 5.3 codes can be found here](./CODE_BY_DAY/DAY_005/(SECTION-5-3)-DEREFERENCING)

---

If a pointer is a piece of paper with an address, **dereferencing** is the act of going to that address and interacting with what is inside.

#### 🪄 The Indirection Operator (`*`)
Yes, C uses the asterisk again. But the meaning changes depending on the context:
1.  **In Declaration (`int *p;`):** It says that `p` is a pointer.
2.  **In Usage (`*p = 20;`):** It says "access the value that `p` is pointing to."

#### 🛠️ Practical Example: The "Alias"
When you dereference a pointer, you create a sort of "alias" for the original variable. Anything you do with `*p` will happen to `i`.

```c
int i = 10;
int *p = &i;  // p points to i

*p = 20;      // "Go to the address in p and change the value to 20"

printf("%d", i);  // It will print 20!
```

#### 🏠 The House Analogy (Revisited)
- `p`: It's the paper with the address "123 Flower St."

- `*p`: It's you entering the house at "123 Flower St." and changing the furniture.

#### ⚖️ Symbol Summary (Don't mix them up!)

| Symbol | Name | What does it do? | Example |
| :---: | :--- | :--- | :--- |
| **`&`** | **Address-of** | Extracts the address where the variable lives. | `p = &i;` |
| **`*`** | **Dereference** | Accesses/Modifies the value inside the address. | `*p = 20;` |

#### 🎓 Note:
Think of dereferencing as "opening the box." If you have `p`, you have the closed box with an address on it. If you use `*p`, you have opened the box and are messing with the contents.

#### 📝 Guidance:
- You might be wondering: "But why would I change the value of `i` using `*p = 20` if I can just do `i = 20`?"

The short answer is: **Scope**. Remember how functions only receive copies of variables and cannot change the original? With pointers, you pass the **address** (`&i`) and the function uses dereferencing (`*p`) to change the original value back in your `main`.

</details>

---

<details>
<summary><b>🚀 Passing Pointers as Arguments (Section 5.4)</b></summary>
<br>

---

[Section 5.4 codes can be found here](./CODE_BY_DAY/DAY_005/(SECTION-5-4)-PASSING-POINTERS-AS-ARGUMENTS)

---

Why use pointers if we can use the variable directly? The answer is: **Scope and Modification**.

#### 🔌 The Copy Problem
We saw on Day 4 that functions receive copies and cannot change the original variable from `main`. Pointers solve this!

1. You pass the **address** of the variable to the function.
2. The function receives a **copy of the address** (a pointer).
3. The function **dereferences** that pointer to reach the original variable and modify it.

#### 🛠️ Example: The Real Increment
This time, the `increment` function actually works:

```c
#include <stdio.h>

void increment(int *p) {  // Receives a pointer to int
    *p = *p + 1;         // Adds 1 to what p points to (the original variable!)
}

int main(void) {
    int i = 10;
    increment(&i);       // We pass the ADDRESS of i
    
    printf("i == %d\n", i); // Now prints 11!
    return 0;
}
```

#### 💡 Key Points:
- **Multiple Returns:** Since you can pass several pointers to a function, it can "return" multiple data points by modifying the original variables, overcoming the single-return limitation.

- **Efficiency:** Instead of copying a massive data structure, you copy only its address (a few bytes).

- **Golden Rule:** If you want a function to modify something from the outside so that you see the result later, you must pass a pointer to that something.

#### 🎓 Note:
Notice the call `increment(&i)`. The `&` is what transforms your `int` into an `int*` (pointer) so that the function accepts it. It's like giving the key to your house to the function so it can work on it while you wait.

#### 📝 Guidance:
- This is the foundation of how C "really" works. When you use the function `scanf("%d", &age)`, now you understand why that `&` is there! `scanf` needs the **address** of your `age` variable to be able to write the number you typed directly into it.

</details>

---

<details>
<summary><b>🚫 The `NULL` Pointer (Section 5.5)</b></summary>
<br>

---

[Section 5.5 codes can be found here](./CODE_BY_DAY/DAY_005/(SECTION-5-5)-NULL-POINTER)

---

Any pointer variable, regardless of its type, can receive a special value called `NULL`. This explicitly indicates that the pointer **points to nowhere**.

```c
int *p = NULL; // p is now a null pointer
```

#### ⚠️ The Danger of Dereferencing:
Since a `NULL` pointer does not point to a valid address, attempting to access its value (dereferencing) will result in an error.


```c
int *p = NULL;
*p = 12;  // 💥 CRASH! Undefined behavior (Segmentation Fault)
```

#### 🛡️ Why use `NULL`?
Although called "the billion-dollar mistake" by its creator, `NULL` is extremely useful as:

- **Sentinel Value:** To indicate that a search failed or that there is no more data.

- **Initialization Indicator:** To ensure a pointer doesn't point to "memory junk" (dangerous random addresses) before it is used.

#### 🎓 Note:
Whenever you declare a pointer and don't have an address for it right away, assign `NULL`. It is much easier for your program to handle a null pointer error than a pointer that points to a random location and silently corrupts your data!

#### 📝 Guidance:
Imagine NULL as the "Vacant" sign on a taxi. It tells you the taxi is available, but you can't get in if it's not actually there.

**Technical tip:** In C, `NULL` is often defined as the value `0`. Because of this, you will see many programmers testing if a pointer is valid with a simple `if (p)`. If `p` is `NULL` (zero), the `if` fails!

</details>

---

<details>
<summary><b>✍️ Note on Pointer Declaration (Section 5.6)</b></summary>
<br>

---

[Section 5.6 codes can be found here](./CODE_BY_DAY/DAY_005/(SECTION-5-6)-POINTER-DECLARATION)

---

Declaration syntax in C can be tricky when trying to place multiple variables on a single line.

#### ⚠️ The Asterisk belongs to the Variable, not the Type
A common mistake is thinking that the `*` is part of the type (like `int*`). In C, the asterisk "sticks" to the variable name that follows.

Observe the examples below:

* **Correct (Mixing types):**
  ```c
  int a, *p; // 'a' is a regular integer; 'p' is a pointer to int.
  ```
  
* **The Single-Line Danger:**
  ```c
  int *p, q; // 'p' is a pointer; 'q' is JUST a regular integer!
  ```  
  - Even if you write `int* p, q;` (with the asterisk next to the type), for the compiler the result is the same: **only p is a pointer.**

#### 🧩 The Big Test
Can you identify which is which in this line?

```c
int *a, b, c, *d, e, *f, g, h, *i;
```

**Answer:**

**Pointers:** `a`, `d`, `f`, `i`.

**Regular Integers:** `b`, `c`, `e`, `g`, `h`.


#### 💡 Golden Tip:
To avoid this "visual bug," many programmers prefer to write the asterisk attached to the variable name (`int *p;`) instead of attached to the type (`int* p;`). This makes it clear that the pointer is the variable, and not the integer type itself on that line.

**Professional Example:**
```c
int *p;  // Pointer to the counter
int *q;  // Pointer to the result
int i;   // Auxiliary integer variable
```
- This pattern prevents you from accidentally forgetting an asterisk and makes your code much easier to review.

</details>

---

<details>
<summary><b>📏 sizeof and Pointers (Section 5.7)</b></summary>
<br>

---

[Section 5.7 codes can be found here](./CODE_BY_DAY/DAY_005/(SECTION-5-7)-SIZEOF-AND-POINTERS)

---

The `sizeof` operator returns the size in bytes based on the **type** of the expression. When dealing with pointers, we must be careful about what we are measuring:

1.  **`sizeof(int *)`**: Returns the size of the pointer (the address). In 64-bit systems, this is usually **8 bytes**.
2.  **`sizeof(*p)`**: Returns the size of the **value the pointer points to**. If it is a pointer to `int`, it will return the size of an `int` (usually **4 bytes**).

#### 🔬 Practical Example:
```c
int *p;

printf("%zu\n", sizeof(int));  // Prints the size of an int (e.g., 4)
printf("%zu\n", sizeof p);     // Prints the size of the POINTER (e.g., 8)
printf("%zu\n", sizeof *p);    // Prints the size of what p POINTS TO (e.g., 4)
```

#### ⚠️ Remember:
`sizeof` is resolved at compile time. It only looks at the type. If `p` is an `int*`, then `*p` is an `int`, and it is the size of the `int` that it will return.

#### 📝 Guidance:
- This distinction is vital for when we start allocating memory dynamically. If you request space for `sizeof p` (8 bytes) thinking you are requesting space for an `int` (4 bytes), you will waste memory. If you do the opposite, your program will crash!

</details>
</details>

---

<details>
  <summary><b>🔹 Day 6: Arrays </b></summary>

---

[Day 6 codes can be found here](./CODE_BY_DAY/DAY_006)

---

<details>
<summary><b>📊 Day 6: Arrays - Data Lists (Section 6.0)</b></summary>
<br>

---

[Section 6.0 codes can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-0)ARRAYS-DATA-LISTS)

---

Arrays in C are collections of elements of the same type stored sequentially in memory. If you have already used `[` and `]` in other languages, the syntax will feel very familiar.

### 🏗️ The Basic Structure
An array allows you to group multiple values (like 10 integers) under a single name, accessing each one through an index.



* **Zero Index:** In C, the first element is always at index `0`.
* **Single Type:** All elements of an array must be of the same type (all `int`, all `float`, etc.).

### 🕵️ The Secret of C
Although they seem like their own structure, Arrays are just **pointers in disguise**.
When you write `my_array[3]`, C is actually performing pointer arithmetic to reach the correct address.

#### 🧠 The Abstraction: What is `array[i]` really?

In C, the bracket syntax `[]` is just **"syntactic sugar"** designed to make our lives easier. Under the hood, the compiler translates it into **Pointer Arithmetic**.

#### 🕵️ The Mathematical Equivalence
When you write `numbers[3]`, C performs the following calculation:

$$*(numbers + 3)$$

> **Technical Note:** The raw code without abstraction is `*(numbers + 3 * sizeof(int))`. However, the C compiler is smart: when you add `3` to an `int` pointer, it **automatically** multiplies it by the `sizeof(int)`.

#### 🛠️ Why does this matter?
This explains why arrays start at **index 0**:
* **`numbers[0]`** is equal to **`*(numbers + 0)`**.
* In other words: "Get the value located exactly at the starting address." There is no displacement (**offset**).

#### 🤯 "Bit-Shifter" Trivia
Since addition is commutative ($a + b = b + a$), in technical C, you could actually write `3[numbers]` and the code would work!
* `3[numbers]` becomes `*(3 + numbers)`, which points to the same address.
* *Warning: Never use this in professional code, but it is a great trick to understand the underlying logic!*

#### 🎓 Note:
An array is just a label for the address of the first element. Everything else is pointer mathematics.

> **💡 Fun Fact:** The debate about starting from 0 or 1 is an old one, but in C, 0 won because it represents the **offset** from the beginning of the array. The first element is 0 positions away from the start.

</details>

---

<details>
<summary><b>📝 Practical Example: Arrays and Loops (Section 6.1)</b></summary>
<br>

---

[Section 6.1 codes can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-1)-PRACTICAL-ARRAY-EXAMPLE)

---

When declaring an array, you need to define a fixed size between the brackets. This size tells C how much memory it should reserve at once.

#### 🛠️ Example Code (Floats and Iteration)

```c
#include <stdio.h>

int main(void) {
    int i;
    float f[4];  // Declares an array of 4 decimal numbers (floats)

    // Assigning values one by one
    f[0] = 3.14159;  // The index starts at 0
    f[1] = 1.41421;
    f[2] = 1.61803;
    f[3] = 2.71828;  // The last index is always (size - 1)

    // Using a loop to print all values
    for (i = 0; i < 4; i++) {
        printf("%f\n", f[i]); // f[i] accesses the element at the current position of i
    }

    return 0;
}
```

#### 🗝️ Key Points:
- **Fixed Size:** Once you have declared `f[4]`, you cannot "expand" it to `f[5]` later. The size is set in stone during compilation.

- **Symmetrical Access:** We use `[]` both to declare the size and to access or modify values later.

- **Standardization:** If you come from languages like Java or JavaScript, this syntax should be almost identical to what you already know.

#### 🎓 Note:
Notice that the loop goes from `0` while `i < 4`. This ensures we visit indices `0, 1, 2, 3`. If we tried to reach index `4`, we would be knocking on the door of memory that doesn't belong to us!

#### 📝 Guidance:
Instead of hardcoding the number `4` directly in the `for` loop, many programmers use a constant or calculate the size to avoid errors if the array size changes in the future.

</details>

---

<details>
<summary><b>📏 6.2 Getting the Array Size (Section 6.2)</b></summary>
<br>

---

[Section 6.2 codes can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-2)-GETTING-ARRAY-SIZE)

---

In C, an array does not store an internal variable with its size. To find out how many elements exist, we use a calculation based on the total space the array occupies in memory.

#### 🧮 The Magic Formula
The idea is to take the total size of the array (in bytes) and divide it by the size of a single element.

```c
int x[12]; 

size_t size = sizeof x / sizeof(int); 
// Example: 48 bytes total / 4 bytes per int = 12 elements!
```

#### ⚠️ The Big Trap: Scope
This trick **ONLY WORKS** in the same place (scope) where the array was declared.

If you pass the array to a function, C transforms it into a simple pointer to the first element.

- The `sizeof` inside the function will return the size of the pointer (usually 8 bytes on 64-bit systems), not the size of the original array!

#### 🚀 Pro Tip: sizeof without declaring
You can find out how much space an array would occupy even before creating it:

```c
sizeof(double [48]); // Returns the bytes needed for 48 doubles
```

#### 🎓 Note:
Since C does not manage the size for you, the common practice is to always pass the array size as a separate argument in your functions. Ex: `my_function(int *array, int size).`

#### 📝 Guidance:
Remember this: **"Arrays decay to pointers in functions"**. This is why `sizeof` fails inside them. If you try to use the formula inside a function, the result will be something crazy (like `2`), and your loop will stop early or cause an error.

</details>

---

<details>
<summary><b>🎨 Array Initializers (Section 6.3)</b></summary>
<br>

---

[Section 6.3 codes can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-3)-ARRAY-INITIALIZERS)

---

In C, you can define array values at the time of declaration using curly braces `{}`.

#### 1. Basic Initialization
If you provide all the values, C places them in order in memory.

```c
int a[5] = {22, 37, 3490, 18, 95}; // Array manually filled
```

#### 2. The Zero Shortcut
If you provide **fewer** items than the array size, C automatically fills the rest with `0`.

- **Zeroing out an entire array:**

```c
int a[100] = {0}; // Sets the first one to 0 and the rest becomes 0 as well
```

#### 3. Designated Initializers
You can choose specific positions using `[index] = value`. C will fill the gaps with zero and continue the sequence from the defined index.

```c
int a[10] = {0, 11, 22, [5]=55, 66, 77};
// Result: 0, 11, 22, 0, 0, 55, 66, 77, 0, 0
```

#### 4. Automatic Sizing
If you omit the number inside the brackets `[]`, the compiler will count the items and set the exact size.

```c
int a[] = {22, 37, 3490}; // The compiler automatically sets the size to 3
```

#### 🧠 The Abstraction: What happens under the hood?

One of the greatest revelations in C is understanding that the bracket syntax `[]` is just a user-friendly way (**syntactic sugar**) to write **Pointer Arithmetic**.

#### 🕵️ The Mathematical Equivalence
When you write `numbers[3]`, the compiler internally translates it to:

$$*(numbers + 3)$$



The compiler is smart: since it knows that `numbers` points to an `int`, it automatically calculates the correct memory offset. It doesn't just add the number 3; it adds `3 * sizeof(int)` bytes from the starting address.

#### ⚠️ Important Warnings
* **Excess elements:** Never put more items in the initializer than the reserved size, or the compiler will throw an *excess elements* error.
* **Memory Junk (Garbage Values):** If you don't initialize a local array (e.g., `int a[5];`), it will contain random values ("garbage") that were in memory beforehand. **Always initialize with `{0}` for safety.**

#### 🎓 Note:
Understanding that `array[i]` is exactly the same as `*(array + i)` is what allows you to master memory manipulation in C. This is why indices start at **0**: the first element is at "zero distance" from the pointer's starting address.

</details>

---

<details>
<summary><b>🚨 Undefined Behavior (Section 6.4)</b></summary>
<br>

---

[Section 6.4 codes can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-4)-UNDEFINED-BEHAVIOR)

---

C **does not stop** you from accessing indices that do not exist in your array. It operates on the principle that you know exactly what you are doing.

#### 💣 The Disaster Example
If you have an array of 5 elements and try to read 10, C will continue reading memory sequentially, treating whatever it finds as if it were part of your array.



```c
#include <stdio.h>

int main(void) {
    int a[5] = {22, 37, 3490, 18, 95};

    for (int i = 0; i < 10; i++) { // ERROR: Reading 5 extra elements!
        printf("%d\n", a[i]);
    }
    return 0;
}
```

#### What actually happens?

- The program might read zeros.
- The program might read garbage numbers (remnants from other programs).
- The program might simply crash (**Segmentation Fault**).



#### 👻 "Undefined Behavior" (UB)
When you go out of bounds of an array, you enter the realm of **Undefined Behavior**. This means the compiler is allowed to do anything. Your code might work today and fail tomorrow, or work on your machine and crash on the server.

#### 🎓 Note:
The golden rule in C is: **Stay within the bounds!** C gives you the power to drive at 200km/h without a seatbelt; the brackets `[]` are not a protective barrier, they are just a map. If you go off-road, it's the driver's fault!

#### 🧑‍💻 Remember:
- In production code, this error can go unnoticed and become a serious **security vulnerability** (this is how many **hackers** exploit systems!).

</details>

---

<details>
<summary><b>🗓️ Multidimensional Arrays (Section 6.5)</b></summary>
<br>

---

[Section 6.5 codes can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-5)-MULTIDIMENSIONAL-ARRAYS)

---

In C, you can add as many dimensions as you want to an array. A 2D array is the most common use case, functioning like a table of rows and columns.

#### 🏗️ Declaration and Memory
Values are stored in memory in **row-major order**. This means the first index indicates the **row** and the second one indicates the **column**.

```c
int a[10];          // 1D: A single row
int b[2][7];       // 2D: 2 rows and 7 columns
int c[4][5][6];    // 3D: Think of it as a block or cube of data
```

#### 🎯 Designated Initializers in 2D:
Just like with simple arrays, you can initialize specific positions. A classic example is the **Identity Matrix**:

```c
// Creates a 3x3 matrix with 1s on the diagonal and 0s elsewhere
int a[3][3] = {[0][0]=1, [1][1]=1, [2][2]=1};
```

#### 🔄 Iterating Through the Matrix:
To access all elements, we use nested loops (one `for` inside another):

```c
for (int row = 0; row < 2; row++) {
    for (int col = 0; col < 5; col++) {
        printf("(%d,%d) = %d\n", row, col, a[row][col]);
    }
}
```

#### 🎓 Note:
Remember the math we saw before! If `a[5]` is `*(a + 5)`, a 2D array `a[2][5]` involves a slightly more complex calculation for the compiler to find the address: it needs to skip the width of an entire row to reach the next one.

- An important detail: when working with large matrices, the order in which you run the loops (row-first or column-first) can affect your program's speed because of how the processor handles memory (**cache**). In C, **always try to traverse by row first** (the rightmost index changing faster), as this is how the data is laid out side-by-side in physical memory.

</details>

---

<details>
<summary><b>🧩 Arrays and Pointers (Section 6.6 - Section 6.6.4)</b></summary>

---

[Code for Sections 6.6.0 - 6.6.4 can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-6)-ARRAYS-AND-POINTERS)

---

<details>
<summary><b>🔗 The Hidden Connection (Section 6.6) </b></summary>
<br>

Up until now, we have treated arrays and pointers as different things, but the truth is: **arrays are pointers in disguise**. Understanding this relationship is the key to manipulating large volumes of data without destroying your program's performance.

#### 🎭 The Great Identity
In C, the name of an array is actually a pointer to its **first element**.
When you use the array name without brackets, you are holding the memory address of where it begins.

#### 📤 Passing Arrays to Functions
When an array is passed to a function, C **does not copy** all the values of the array (this would be slow and consume a lot of memory). Instead, it passes only a pointer.

* **What the function receives:** Only the starting address.
* **What the function doesn't know:** It loses the sense of "size" (`sizeof`). This is why we almost always need to pass the size as a second argument.

> **💡 What's coming up:** We will dive into the actual relationship between them, but the focus now is understanding how functions view this data and why they can modify the original array values.

#### 🎓 Guidance:
This is why if you change a value inside the function, it changes in the original array back in `main`. Since you passed the address (pointer), the function is working with the same memory that the original array occupies. It’s not a copy—it’s the real thing!

</details>

---

<details>
<summary><b>📍 Obtaining a Pointer to an Array (Section 6.6.1) </b></summary>
<br>

---

[Code for Section 6.6.1 can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-6)-ARRAYS-AND-POINTERS/(SECTION-6-6-1)-POINTER-TO-AN-ARRAY)

---

In C, there is a fundamental secret: the name of the array is, by itself, a shortcut to the address of its first element.

#### 🕵️ The Shortcut (Shorthand)
Normally, to get the address of the first item, you would write `&a[0]`. But C allows you to use just the name of the array.

```c
int a[5] = {11, 22, 33, 44, 55};
int *p;

p = &a[0];  // Explicit form: p points to the first element
p = a;      // PROFESSIONAL FORM: Exactly the same thing, but cleaner!

printf("%d\n", *p);  // Output: 11
```

#### 🧩 The Direct Connection
Notice that:

- `p` is an `int*`.

- `*p` gives us the value `11`.

- `a[0]` also gives us the value `11`.

This happens because, deep down, the `compiler` treats array access as access via `pointer`.

#### 🎓 Note:
This is the reason why we don't use the `&` operator when reading a string with `scanf("%s", my_string)`. Since the string is an array of chars, its name is already the address that `scanf` needs!

#### 🛠️ Tip:
Memorize this rule: **`a` is equal to `&a[0]`**. You will see this in 99% of professional C code. It is elegant, fast, and avoids the excessive use of symbols.

</details>

---

<details>
<summary><b>📤 Passing One-Dimensional Arrays to Functions (Section 6.6.2)</b></summary>
<br>

---

[Code for Section 6.6.2 can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-6)-ARRAYS-AND-POINTERS/(SECTION-6-6-2)-ONE-DIMENSIONAL-ARRAYS-FUNCTIONS)

---

When we pass an array to a function, C offers three ways to write the signature. **Important:** to the compiler, all three are identical and result in a pointer.

#### 🎭 Three Sides of the Same Coin
```c
// 1. As a pointer (The most common and "honest" way)
void times2(int *a, int len);

// 2. Using empty array notation
void times3(int a[], int len);

// 3. Using array notation with size (C ignores the number 5!)
void times4(int a[5], int len);
```

#### 🧐 The Great "Lie" of a[5]:
You might think that `void times4(int a[5], int len)` forces the array to have a size of 5, but it doesn't. The compiler ignores the number inside the brackets in the function signature. It treats it simply as a pointer to the first element.

#### 📏 The Golden Rule: Always pass the `len` (Size)
Since the function receives only a pointer (the starting address), it has no way of knowing where the array ends. Therefore, we almost always pass a separate variable (usually called `len`, `size`, or `qty`) to provide the size information.

#### 🎓 Note:
Preferably use `int *a`. This makes it clear to anyone reading your code that you are dealing with a memory address and that the size needs to be managed manually.

</details>

---

<details>
<summary><b>🔄 Modifying Arrays in Functions (Section 6.6.3)</b></summary>
<br>

---

[Code for Section 6.6.3 can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-6)-ARRAYS-AND-POINTERS/(SECTION-6-6-3)-MODIFYING-ARRAYS-IN-FUNCTIONS)

---

Unlike regular variables (such as a simple `int`), when you pass an array to a function, you are passing the "map" to the original data.

#### 🛠️ The Side Effect
If the function modifies the array elements using the received pointer, those changes will be reflected directly in the original array (in `main`, for example). This happens because both the original array name and the function parameter point to the **same place in memory**.



```c
#include <stdio.h>

void double_array(int *a, int len) {
    for (int i = 0; i < len; i++)
        a[i] *= 2; // Modifies the value directly in the original memory!
}

int main(void) {
    int x[5] = {1, 2, 3, 4, 5};
    double_array(x, 5);

    for (int i = 0; i < 5; i++)
        printf("%d ", x[i]);  // Output: 2 4 6 8 10!
}
```

#### 🤯 Array Notation on Pointers:
Even if the parameter is a pointer (`int *a`), we use `a[i]` to access the data.

- In C, you can use brackets on pointers and pointer arithmetic on arrays. They are interchangeable in this context!

#### 🎓 Note:
This is excellent for performance, as you don't waste time copying 1 million items into a function. You simply tell the function where the list starts. But be careful: if you don't want the function to modify your array, you should use the `const` keyword (we'll see that later).

#### 🧭 Guidance:
This is the main difference:
1.  Passing an `int x`: C creates a **copy**. The function modifies the copy, and the original remains safe. (**Pass by Value**)
2.  Passing an `int x[]`: C passes the **address**. The function modifies the original. (**Pass by Reference**)
3.  Passing an `int x*`: C also passes the **address**. The function modifies the original. (**Pass by Reference**)

</details>

---

<details>
<summary><b>📐 Passing Matrices to Functions (Section 6.6.4)</b></summary>
<br>

---

[Code for Section 6.6.4 can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-6)-ARRAYS-AND-POINTERS/(SECTION-6-6-4)-PASSING-MULTIDIMENSIONAL-ARRAYS-TO-FUNCTIONS)

---

When passing multidimensional arrays to functions, the rules change slightly. C requires you to specify **all dimensions except the first one**.

#### 🧩 The Need for Columns
The compiler needs to know the column size to calculate the memory offset. Without knowing where a row ends, it cannot find the beginning of the next one.



```c
#include <stdio.h>

// MANDATORY: Define at least the second dimension [3]
void print_2D_array(int a[][3]) { 
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++)
            printf("%d ", a[row][col]);
        printf("\n");
    }
}

int main(void) {
    int x[2][3] = { {1, 2, 3}, {4, 5, 6} };
    print_2D_array(x);
}
```

#### 🎭 Equivalent Signatures
To the compiler, these two ways of declaring the parameter are identical:

1. `void func(int a[2][3])`

2. `void func(int a[][3])` (The most flexible and common one)

#### 🔍 Why does this happen?
Since computer memory is a straight line, the compiler needs the second dimension to calculate the "jump" required to change rows. Without knowing the number of columns, C doesn't know where one row ends and the other begins.



#### ⚠️ Vital Reminder: No Seatbelts
As always in C, there is no bounds checking at runtime. If you try to access `a[5][10]` in a `3x3` matrix, C will attempt to read that memory, and you will encounter the dreaded Undefined Behavior.

#### 🎓 Note:
Think of the matrix as a building. For C to take you to "apartment 201", it needs to know how many apartments exist per floor. If you don't provide this in the function, it won't know how many "floors" of memory it needs to skip!

</details>

</details>

</details>

---

<details>
  <summary><b>🔹 Day 7: Strings </b></summary>

---

[Day 7 codes can be found here](./CODE_BY_DAY/DAY_007)

---

<details>
<summary><b>🧵 Strings: The Great Lie (Section 7.0)</b></summary>
<br>

---

[Code for Section 7.0 can be found here](./CODE_BY_DAY/DAY_007/(SECTION-7-0)-STRINGS-THE-GREAT-LIE)

---

If you think Strings in C are a nice, neat data type like in other languages, you're mistaken!
The harsh reality is: **Strings do not exist.** They are just pointers and character arrays pretending to be something more.

#### 🎭 What is happening under the hood?
Remember everything we've seen about arrays and pointers so far?
Well, strings are just a direct application of those concepts.

* **Pointers again:** When you write a text, C hands you the address of the first letter, and that's it.
* **Almost invisible:** In C, strings barely have a "body" of their own; they are just a sequence of `char` in memory.


#### 🎓 Note:
The only thing that separates a jumble of random letters from a "respectable" string that `printf` can read is the **null terminator (`\0`)**. Without this invisible "period," C won't stop reading memory until it hits an error or crashes the program.

</details>

---

<details>
<summary><b>📝 String Literals (Section 7.1)</b></summary>
<br>

---

[Code for Section 7.1 can be found here](./CODE_BY_DAY/DAY_007/(SECTION-7-1)-STRING-LITERALS)

---

Before you start declaring variables, you need to understand what a **String Literal** is. Basically, it is any sequence of characters enclosed in **double quotes (`"`)**.

> **⚠️ Crucial Difference:**
> * **Single Quotes (`'A'`):** Enclose a single character (they are a completely different beast).
> * **Double Quotes (`"Hello"`):** Enclose a string literal.

#### 🕵️ Literal Examples
| Example | What's going on? |
| :--- | :--- |
| `"Hello, world!\n"` | Has a `\n` at the end for a line break. Very common. |
| `"This is a test"` | A simple string, no frills. |
| `"She said: \"Hi.\""` | Uses the backslash (`\`) to put quotes inside the text. |

#### 🛠️ The Backslash Trick (`\`)
The C compiler needs some help not to get confused. If you want a quote to appear **inside** your text, you need to "escape" it by using a backslash before it.

* **`\"`**: Tells C: "This is just a quote character, not the end of the string!".
* **`\n`**: Tells C: "Break the line and move to the next one here".

Without this escape character (`\`), C would think the string ended at the first quote it encountered, and the rest of your code would throw a massive error.

> **🎓 Memory Insight:**
> Behind each of these literals, C is reserving a contiguous space in memory to store each letter, one next to the other. In the next topics, I will show how we access this using variables.

</details>

---

<details>
<summary><b>📦 String Variables (Section 7.2)</b></summary>
<br>

---

[Code for Section 7.2 can be found here](./CODE_BY_DAY/DAY_007/(SECTION-7-2)-STRING-VARIABLES)

---

Now that we know how to create the text (the literal), we need a place to store it and use it later. In C, we do this using a **pointer to `char`**.

```c
char *s = "Hello, world!";
```

#### 🕵️ What's happening in memory?
Take a look at the variable type: `char *`. That's right, a pointer.
- The variable `s` does not contain the entire phrase.
- It only stores the `address of the first character`, which in this case is `'H'`.

#### 🖨️ How to print to the screen?
To show the full string in `printf`, we use the format specifier `%s` (s for string).

```c
char *s = "Hello, world!";
printf("%s\n", s);  // Output: Hello, world!
```

The `printf` function is smart: it takes the pointer `s`, goes to the address of 'H', and prints letter by letter until it finds that invisible character (`\0`) that signals the party is over.



> **💡 Developer Insight:**
> Working with `char *` is very efficient because you only move a memory address (usually 8 bytes), regardless of whether your string has 10 or 10,000 letters.

</details>

---

<details>
<summary><b>🔤 String Variables as Arrays (Section 7.3)</b></summary>
<br>

---

[Code for Section 7.3 can be found here](./CODE_BY_DAY/DAY_007/(SECTION-7-3)-STRING-VARIABLES-AS-ARRAYS)

---

If you don't want to use pointers directly, C gives you another option: declaring the string as a **char array**. In practice, the result looks the same, but the flexibility changes.

```c
char s[14] = "Hello, world!"; 

// Or the "lazy" way (letting the compiler do the counting):
char s[] = "Hello, world!";
```

#### 🔢 Accessing as an Array:
Since the string is now an array, I can use square brackets `[]` to access each individual letter. To print letter by letter, we use the `%c` format specifier (for character).

```c
#include <stdio.h>

int main(void) {
    char s[] = "Hello, world!";
    
    for (int i = 0; i < 13; i++)
        printf("%c", s[i]); // Prints one character at a time
    
    printf("\n");
}
```

#### 🤯 The "Equivalence" Magic:
What’s bizarre (but makes total sense in C) is that if I swap `char s[]` for `char *s`, the code above **still works perfectly**.

```c
char *s = "Hello, world!";
printf("%c", s[i]); // It works! Even though it's a pointer.
```

#### 💡 Developer Insight:
This is further proof that, deep down, **arrays and pointers are the same thing**. The `[]` is just a friendlier way of performing pointer arithmetic.

> **⚠️ Security Spoiler:**
> Although they look the same, there is a huge difference: if you declare it as an array (`char s[]`), you can change the letters. If you declare it as a pointer (`char *s`), C places it in a read-only area of memory. If you try to change a letter via the pointer, the program crashes!

</details>

---

<details>
<summary><b>🏗️ String Initializers (Section 7.4)</b></summary>
<br>

---

[Code for Section 7.4 can be found here](./CODE_BY_DAY/DAY_007/(SECTION-7-4)-STRING-INITIALIZERS)

---

There are two ways to initialize a string, and they behave completely differently in memory.

#### 1. The Pointer (`char *s`) - "Look, but don't touch"
When you do this, C places the text in a memory area called **Read-Only**.

```c
char *s = "Hello, world!"; 
s[0] = 'z'; // ❌ FATAL ERROR: Tried to change something immutable.
```
- What happens: The compiler manages this memory for you in a "remote location" for safety and performance. If you try to change a letter there, the program will likely crash. This is known as Undefined Behavior.

#### 2. The Array (`char t[]`) - "Your house, your rules"
When you declare it as an array, C doesn't just give you an address in "another city." It creates a writable copy of the bytes right there on your program's stack.

```c
char t[] = "Hello, again!"; 
t[0] = 'z'; // ✅ NO PROBLEM: You own this memory.
printf("%s", t); // "zello, again!"
```

#### 💡 Developer Insight:
The rule is simple:
- Just want to read or pass a fixed text? Use `char *`.
- Need to change letters, reverse the string, or clear data? Use `char []`.

> **⚠️ Mental Note:**
> A string in double quotes used to initialize an array is not treated as an immutable literal; it simply becomes the "mold" for the copy you are going to use.

</details>

---

<details>
<summary><b>📏 Discovering String Length with `strlen` (Section 7.5)</b></summary>
<br>

---

[Code for Section 7.5 can be found here](./CODE_BY_DAY/DAY_007/(SECTION-7-5)-DISCOVERING-STRING-SIZE)

---

Unlike modern languages, C is "forgetful": it **does not track** the size of your strings. If you want to know the length of one, you have to ask the `strlen()` function to count it for you.

#### 🛠️ How to use `strlen`
To use this function, you need to include the `<string.h>` library.

```c
#include <stdio.h>
#include <string.h> // 👈 Required for handling strings

int main(void) {
    char *s = "Hello, world!";
    
    // %zu is the correct specifier for the size_t type
    printf("The string is %zu bytes long.\n", strlen(s));
}
```

#### 🕵️ The Secret of size_t
The `strlen()` function does not return a regular `int`; it returns a `size_t`.
- **What it is:** A type of unsigned integer used to represent the sizes of objects in memory.
- **How to print it:** Always use the `%zu` specifier.

#### ❓ If C doesn't track it, how does it know the size?
C doesn't have a hidden counter. When you call `strlen(s)`, the function:
1. Takes the address of the first character.
2. Traverses the memory one by one.
3. Counts each letter until it encounters the null character (`\0`).

#### 💡 Developer Insight:
This means that `strlen()` is an "expensive" operation for the processor. If you have a string with 1 million characters, C has to walk through all of them just to tell you the size.

> **🎓 Pro Tip:**
> If you need to use the length multiple times in a loop, store the result in a variable instead of calling the function every time!

</details>

---

<details>
<summary><b>🔚 String Determination (Section 7.6)</b></summary>
<br>

---

[Code for Section 7.6 can be found here](./CODE_BY_DAY/DAY_007/(SECTION-7-6)-STRING-DETERMINATION)

---

C handles strings in a "low-level" way that almost no modern language uses anymore. To save memory back in the 70s, instead of storing the string size as a number, C decided to use an **end marker**.

#### 🚦 The Two Design Options
Imagine you are creating a language. How would you store the text "Hi"?
1. **Option 1:** Store the number `2` (length) and then `Hi`. (Uses extra bytes for the counter).
2. **Option 2:** Store `Hi` and a "stop" signal at the end. **(C chose this one!)**.



#### 💎 The Anatomy of a String in C
For C, a string is defined by just two things:
1. A **pointer** to the first character.
2. A zero-valued character (called **NUL** or `\0`) that appears somewhere in memory after the pointer.

#### 🕵️ The Automatic "NUL"
You don't need to type `\0` every time. When you use double quotes, C places it there for you behind the scenes:

```c
char *s = "Hello!";  
// Under the hood, C stores: 'H' 'e' 'l' 'l' 'o' '!' '\0'
```

#### 🛠️ Creating my own `strlen()`
Here is how we would manually write the `strlen` function, hunting for the `\0` inside the array:

```c
int my_strlen(char *s) {
    int counter = 0;

    // As long as the current character is NOT the null terminator...
    while (s[counter] != '\0') {
        counter++; // ...keep counting
    }

    return counter;
}
```

#### 💡 Developer Insight:
This is why C is fast but dangerous. If you forget or accidentally erase the `\0`, C functions (like `printf` or `strlen`) will keep reading your memory infinitely until they find a stray zero or the system crashes your program. The `\0` is the seatbelt for strings.

</details>

---

<details>
<summary><b>👯 Copying Strings (Section 7.7)</b></summary>
<br>

---

[Code for Section 7.7 can be found here](./CODE_BY_DAY/DAY_007/(SECTION-7-7)-COPYING-STRINGS)

---

Here is the classic mistake: thinking that the `=` operator copies text. In C, `=` copies the **address** (pointer), not the characters.

#### ❌ The Wrong Way: Copying the Pointer
If you do `t = s`, both variables point to the same place in memory. If you change a letter in `t`, it changes in `s` as well. They become "accomplices."

```c
char s[] = "Hello!";
char *t;

t = s;    // ⚠️ ATTENTION: You didn't copy the text, only the address!
t[0] = 'z'; 
printf("%s", s); // It will print "zello" because 's' and 't' are the same guy.
```

#### ✅ The Right Way: `strcpy()`
To truly duplicate a string, you need a new space in memory and copy it letter by letter. The `strcpy` (string copy) function from `<string.h>` does this dirty work for you.

```c
#include <string.h>

char s[] = "Hello!";
char t[50]; // 🛡️ IMPORTANT: Ensure the destination has enough space!

strcpy(t, s); // Copies the content of 's' into 't'
```

#### 💡 Developer Trick: The Order of Factors:
Many people forget who comes first in `strcpy(destination, source)`. Beej gives a `killer tip`: think of the order of a standard assignment.
- If C allowed it, you would write: `destination = source`;
- In strcpy, the order is the same: `strcpy(destination, source)`;

> **⚠️ Fire Warning:**
Before using strcpy, make sure your destination array is large enough (including space for the \0). If the source is larger than the destination, you will invade neighboring memory and the program will explode.

</details>


</details>

---

<details>
   <summary><b>🔹 Day 8: Structs </b></summary>

---

[Day 8 codes can be found here](./CODE_BY_DAY/DAY_008)

---

<details>
<summary><b>🏗️ Structs - Introduction (Section 8.0)</b></summary>
<br>

---

[Code for Section 8.0 can be found here](./CODE_BY_DAY/DAY_008/(SECTION-8-0)-STRUCTS-INTRODUCTION)

---

If you've ever felt that passing 10 loose variables to a function is a mess, **Structs** are your salvation. In C, a `struct` is a data type that you define to group several different pieces of information under a single name.

### 📦 What is a Struct?
Imagine you want to represent a "User". Instead of having isolated variables like `char name[]`, `int age`, and `float height`, you create a "box" that keeps all of them together.

* **Where does it come from?** If you are familiar with Classes (from Java or Python), a Struct is like a **Class that only has attributes**.
* **What's missing?** Unlike modern languages, a Struct in C does not have "methods" (internal functions). It is purely a data container.

#### 🚀 Why is this useful?
1. **Organization:** You stop dealing with "loose" variables and start dealing with logical "objects."
2. **Efficiency:** Instead of passing 5 arguments to a function, you pass only **one** Struct (or a pointer to it).
3. **Readability:** The code becomes much cleaner. It is easier to understand `player.health` than a variable `h` lost in the code.

#### 💡 Developer Insight:
In native C, there are no true objects. The Struct is the closest thing we have to organize complex data. It doesn't "do" anything on its own; it just "holds" the pieces so that your functions can work with them in an organized way.

</details>

---

<details>
<summary><b>🛠️ Declaring Your First Struct (Section 8.1)</b></summary>
<br>

---

[Code for Section 8.1 can be found here](./CODE_BY_DAY/DAY_008/(SECTION-8-1)-DECLARING-YOUR-FIRST-STRUCT)

---

A `struct` is, in practice, a **new data type** that you invent. Unlike an array (where all items must be the same type), in a struct, you can mix "apples and oranges."

#### 📝 How to Declare the "Blueprint"
We usually declare the struct blueprint in the global scope (outside of functions) so that the entire program knows what a `struct car` is.

```c
struct car {
    char *name;       // A pointer to the name (string)
    float price;      // A decimal for the price
    int speed;        // An integer for the speed
};
```

#### 🏗️ Creating a Variable (Instantiating)
- Having the blueprint doesn't create the car. You need to declare a variable of this new type.
**⚠️ Note:** In C, the type name is the full `struct car`, and not just `car`.
```c
struct car mercedes; // Variable "mercedes" of type "struct car"
```

#### 📍 Accessing Fields (The Dot Operator `.`)
To look inside the "box" and manipulate the data, we use the `dot`. It is from here that C "lent" this syntax to almost all modern languages (Java, JS, Python, etc.).
```c
// Assigning values
mercedes.name = "Mercedes-Benz C300";
mercedes.price = 15999.99;
mercedes.speed = 175;

// Reading values
printf("Name: %s | Price: %.2f\n", mercedes.name, mercedes.price);
```

> **💡 Developer Insight (CLion):**
> In CLion, when you type `mercedes.`, it will automatically suggest the fields `name`, `price`, and `speed`. This happens because the compiler has already calculated exactly how many bytes of offset each field is from the start of the struct in memory.

</details>

---

<details>
<summary><b>⚡ Struct Initializers (Section 8.2)</b></summary>
<br>

---

[Code for Section 8.2 can be found here](./CODE_BY_DAY/DAY_008/(SECTION-8-2)-STRUCT-INITIALIZERS)

---

In the previous chapter, we filled the `mercedes` field by field. It works, but it's tedious. C allows you to initialize a `struct` in a much more elegant way, directly at the declaration.

#### 1. Ordered Initialization (The "Classic" way):
You can pass the values inside curly braces, following the **exact same order** in which the fields were defined in the `struct`.

```c
struct car mercedes = {"Mercedes-Benz C300", 15999.99, 175};
```
#### ⚠️ Danger:
If someone changes the order of the fields at the top of the file (example: placing price before the name), this code will break or attempt to save a price inside a name field. Risky, right?

#### 2. Designated Initializers (The Modern/Safe way):
Since C99, we have **Designated Initializers**. With them, you explicitly state which field you are filling using the dot `.` operator.
```c
struct car mercedes = {.speed=175, .name="Mercedes-Benz C300"};
```
- ✅ **Order Independent:** You can put the speed before the name.
- ✅ **Auto-fill:** Any field you omit (like `.price` above) will be automatically zeroed out by the compiler.
- ✅ **Clarity:** Anyone reading the code knows exactly what each value represents.

> **💡 Developer Insight:**
> Whenever possible, use the `.field = value` style. In large projects, structs can have 50 fields; trying to get the order of 50 values right manually is an invitation for memory bugs.

</details>

---

<details>
<summary><b>🏎️ Passing Structs to Functions (Section 8.3)</b></summary>
<br>

---

[Code for Section 8.3 can be found here](./CODE_BY_DAY/DAY_008/(SECTION-8-3)-PASSING-STRUCTS-TO-FUNCTIONS)

---

There are two primary ways to send a `struct` to a function. Understanding when to use each one demonstrates your grasp of how computer memory is managed.

#### 📦 1. Pass by Value (Copy)
When passing the `struct` directly, C creates a **full copy** of all its fields for the function to work on.
* **Advantage:** Safety. The original data in the calling function remains unchanged.
* **Disadvantage:** If the `struct` is large (e.g., many fields or strings), copying all that data into the function's memory (*stack*) consumes unnecessary time and resources.

---

#### 🎯 2. Pass by Reference (Pointers)
This is the more professional and performant approach. Instead of sending the entire "object," you send only the **address** of where it resides in memory.

**Why use pointers with Structs?**
1. **Data Modification:** It allows the function to modify the values of the original `struct` (e.g., updating an item's price).
2. **Raw Efficiency:** Copying an address (pointer) is instantaneous, regardless of whether the `struct` has 3 or 300 fields.

#### 💻 Practical Example: Updating Vehicle Data

```c
#include <stdio.h>

struct Vehicle {
    char *model;
    float price;
    int horsepower;
};

// Prototype: receives a POINTER to the struct and the new value
void update_price(struct Vehicle *v, float new_value);

int main(void) {
    // Initializing our struct
    struct Vehicle my_car = {.model = "Comfort Sedan", .horsepower = 150};

    // We pass the address (&) to the function
    update_price(&my_car, 95000.00);

    printf("Model: %s | Updated Price: $ %.2f\n", my_car.model, my_car.price);
    
    return 0;
}
```

#### ⚠️ The Pointer Syntax Challenge:
If we try to access a pointer's field using the dot `.` operator, the compiler will return an error, as the dot only works on direct structs, not addresses.

To access the actual value, we would need to "dereference" the pointer first:

```c
void update_price(struct Vehicle *v, float new_value) {
    (*v).price = new_value;  // ✅ Works, but the syntax is cluttered.
}
```
- While `(*v).price` is technically correct, the excessive use of parentheses and asterisks makes the code difficult to read and maintain in large-scale projects.

> **💡 Developer Insight:**
> In professional development, we rarely use the (*pointer).field syntax. To make the code more elegant and "idiomatic" (standard for the community), C created a shortcut called the **Arrow Operator (`->`)**. It does exactly the same thing: **dereferences the pointer and accesses the field in a single**, visually clean step. Mastering this transition between the dot and the arrow is the first step toward writing high-performance code.

</details>

---

<details>
<summary><b>➡️ The Arrow Operator (Section 8.4)</b></summary>
<br>

---

[Code for Section 8.4 can be found here](./CODE_BY_DAY/DAY_008/(SECTION-8-4)-ARROW-OPERATOR)

---

The arrow operator is C's "syntactic sugar." It was created to make a developer's life easier when accessing **struct** fields through a **pointer**, replacing the need for asterisks and parentheses.

#### 🛠️ Simplifying the Syntax

Remember the "cluttered" and hard-to-read form from the previous section? The arrow operator does exactly the same thing, but in a much cleaner way:

```c
void adjust_value(struct Product *p, float new_price) {
    // (*p).price = new_price;  // ❌ 100% correct, but nobody uses it this way.
    
    p->price = new_price;       // ✅ 100% elegant and the industry standard!
} 
```
- Visually, the `->` arrow indicates: "Go to the address the pointer points to and access this field inside it."

#### 📏 Golden Rule: Dot vs. Arrow

To never forget which operator to use in your code, follow this simple rule based on the data type you have at hand:

| If you have... | Use the Operator... | Practical Example |
| :--- | :---: | :--- |
| **The Struct directly** | Dot (`.`) | `car.price = 500.00;` |
| **A Pointer to the struct** | Arrow (->) | `ptr_car->price = 500.00;` |

#### 💻 Full Example:
```c
#include <stdio.h>

struct Student {
    char *name;
    int enrollment_id;
    float grade;
};

int main(void) {
    struct Student vitor = {.name = "Vitor", .enrollment_id = 12345};
    struct Student *ptr = &vitor; // Creating a pointer to the struct

    // Using the Dot on the direct struct
    vitor.grade = 9.5;

    // Using the Arrow through the pointer
    ptr->grade = 10.0; 

    printf("Student: %s | Final Grade: %.1f\n", ptr->name, vitor.grade);

    return 0;
}
```

> **💡 Developer Insight:**
> In professional software development, you will spend most of your time using the `Arrow (->)`. This is because passing pointers to functions is much more efficient than copying the entire structure. Mastering the quick reading of this arrow is essential for rapidly understanding the data flow in large codebases, where data "travels" between functions via memory addresses.

</details>

---

<details>
<summary><b>📋 Copying and Returning Structs (Section 8.5)</b></summary>
<br>

---

[Code for Section 8.5 can be found here](./CODE_BY_DAY/DAY_008/(SECTION-8-5)-COPYING-AND-RETURNING-STRUCTS)

---

One of the conveniences in C is that you can copy all the data from one **struct** to another at once, without needing to copy each field manually.

#### 🔄 1. Direct Assignment Copying

Unlike arrays (which you cannot simply set equal to one another), the assignment operator `=` works perfectly with **structs** to create a copy.

```c
struct Car {
    char *model;
    float price;
};

struct Car a = {.model = "Sedan", .price = 50000.00};
struct Car b;

b = a;  // ✅ All data from 'a' has been copied to 'b'
```

#### ⚠️ The Concept of "Shallow Copy"

This is where many developers get confused. C performs a **Shallow Copy**. This means it copies the raw values stored inside the struct.
- **Simple Values (int, float, char):** These are copied entirely.
- **Pointers:** C copies only the memory address stored in the pointer.

🚨 **Danger:** If the `original struct` has a pointer to a string, the new `struct` will point to the **same string in memory**. If you change the string's content through one struct, the other will also see the change!

#### ↩️ 2. Returning Structs from Functions
You can also have a function return an `entire struct`. When doing this, C performs a copy of the function's result to the variable receiving it.
```c
struct Point {
    int x, y;
};

struct Point create_point(int x, int y) {
    struct Point p = {.x = x, .y = y};
    return p; // A copy of 'p' is sent back to the function caller
}

int main(void) {
    struct Point my_point = create_point(10, 20);
    return 0;
}
```

> 💡 **Developer Insight:**
> While returning an `entire struct` is perfectly valid and easy to read, keep the performance rule in mind: if your structure is very large, the **cost of "copying" this data during the function return can be high**. In high-performance systems, it is more common to pass a pointer for the function to fill in the data, thus avoiding the need to create extra copies in memory.

</details>

---

<details>
<summary><b>⚖️ Comparing Structs (Section 8.6)</b></summary>
<br>

---

[Code for Section 8.6 can be found here](./CODE_BY_DAY/DAY_008/(SECTION-8-6)-COMPARING-STRUCTS)

---

In C, you **cannot** use the `==` operator to compare two structs. The compiler doesn't know if you want to compare values, memory addresses, or just a specific field. To solve this, we must understand how memory is organized "under the hood."

#### 🔍 1. The Padding Problem

Computers prefer to read data in aligned blocks (usually 4 or 8 bytes). To maintain this alignment, the compiler inserts invisible empty bytes between struct fields. This is known as **Padding**.

```c
struct Example {
    char a;    // 1 byte
               // Here the compiler skips 3 bytes (Padding) to align the next int
    int b;     // 4 bytes
};
```
- These padding bytes may contain "garbage" (random memory values), making raw memory comparison unpredictable.

#### 👀 Check this example:
```c
struct Point {
    int x, y;
};

struct Point p1 = {10, 20};
struct Point p2 = {10, 20};

if (p1 == p2) { // ❌ COMPILATION ERROR!
    // C does not allow this direct comparison.
}
```

#### ✅ The Only Safe Way: Member-by-Member
To compare two structures, you must create logic (usually a function) that checks each field individually. This demonstrates to anyone reading your code that you have full control over the data.
```c
#include <stdbool.h>

bool points_are_equal(struct Point a, struct Point b) {
    return (a.x == b.x && a.y == b.y);
}
```

#### 🛠️ 2. Memory Manipulation: `memset()` and `memcmp()`
To handle structs at the byte level, we use the `<string.h>` library.

**`memset()` – Clearing the "Garbage"**
The `memset()` function fills a block of memory with a specific value (usually zero). It is essential to ensure that even the padding bytes are zeroed out.
**Syntax:** `memset(&variable, value, size_in_bytes)`;

**`memcmp()` – Raw Comparison**
The `memcmp()` function compares two memory blocks byte by byte. It returns 0 if the blocks are identical.
**Syntax:** `memcmp(&a, &b, sizeof(struct))`;

#### 🚀 3. Practical Example: The Safe Way vs. The Fast Way
```c
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct User {
    int id;
    float balance;
};

// METHOD 1: Manual (Safer and clearer)
bool users_are_equal(struct User u1, struct User u2) {
    return (u1.id == u2.id && u1.balance == u2.balance);
}

int main(void) {
    struct User user1, user2;

    // METHOD 2: Raw Memory (Requires prior clearing)
    // 1. Zero out the memory to eliminate padding "garbage"
    memset(&user1, 0, sizeof(user1));
    memset(&user2, 0, sizeof(user2));

    // 2. Assign values
    user1.id = 1; user1.balance = 100.50;
    user2.id = 1; user2.balance = 100.50;

    // 3. Compare bytes
    if (memcmp(&user1, &user2, sizeof(struct User)) == 0) {
        printf("Users are identical in memory!\n");
    }

    return 0;
}
```

> 💡 **Developer Insight:**
> While `memcmp()` might seem like a tempting shortcut, manual member-by-member comparison is the golden rule in professional development. It prevents your code from failing due to `padding bytes` and allows you to ignore irrelevant fields in the comparison, such as a "last login" timestamp. In C, understanding `memset` and `padding` is what distinguishes a programmer who understands the hardware from one who just writes syntax.

</details>

</details>

---

<details>
  <summary><b>🔹 Day 9: File Input/Output (I/O) </b></summary>

---

[Day 9 codes can be found here](./CODE_BY_DAY/DAY_009)

---

<details>
<summary><b>📁 File I/O - Introduction (Section 9.0)</b></summary>
<br>

---

[Code for Section 9.0 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-0)-FILE-IO-INTRODUCTION)

---

So far, we have used `printf()` to display data on the console and `scanf()` to capture user input. However, in real-world applications, data needs to be **persistent**. In this section, we will learn how C communicates with the file system to read and write information permanently to the disk.

#### 📥 The Stream Concept

In C, it doesn't matter if you are writing to the monitor, a `.txt` file, or sending data over a network; everything is treated as a **Stream** (a flow of bytes).

* **stdin:** Standard Input (usually the keyboard).
* **stdout:** Standard Output (usually the console).
* **stderr:** Standard Error (used for logs and failure messages).

#### 📑 The File Pointer (`FILE *`)

To handle a file, C uses a special data type called `FILE`, defined in the `<stdio.h>` library. We never manipulate the file data directly; instead, we use a **File Pointer**.

```c
#include <stdio.h>

int main(void) {
    FILE *fp; // "fp" stands for File Pointer
    
    // File operations follow a mandatory lifecycle:
    // 1. Open the file (fopen)
    // 2. Process (read or write)
    // 3. Close the file (fclose)
    
    return 0;
}
```

> 💡 Developer Insight:
> Working with files requires a **defensive mindset**. Unlike a variable in memory that is "always there," a file might not exist, could be write-protected, or the disk might be full. Checking if your `FILE *` pointer is `NULL` before using it is the hallmark of production-ready code.

</details>

---

<details>
 <summary><b>📄 The `FILE*` Data Type (Section 9.1)</b></summary>
<br>

---

[Code for Section 9.1 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-1)-FILE-DATA-TYPE)

---

Every Input and Output (I/O) operation in C is performed through a structure called `FILE`. We do not manipulate this structure directly; instead, we use a **pointer** to it (`FILE*`). This pointer holds all the information the system needs: which file is open, which line is being read, and whether any errors have occurred.

#### 🌊 What are Streams?

Although we often talk about "files," the correct technical term in C is **Stream**. Think of a Stream as a pipe through which data flows. A file on a disk is just a special type of Stream.

When starting any C program, the operating system already leaves three "pipes" open and ready for use:

| `FILE*` Pointer | Name | Description |
| :--- | :--- | :--- |
| **stdin** | Standard Input | Standard input (usually the keyboard). |
| **stdout** | Standard Output | Standard output (usually the screen). |
| **stderr** | Standard Error | Error output (usually the screen as well). |

#### ⚠️ The Importance of `stderr`

You might have noticed that both `stdout` and `stderr` display messages on the screen. So, why use two different ones?

The answer is: **Redirection**. Professional operating systems (like Linux or Windows) allow you to separate success messages from errors.

* **Practical Example:** You can run a program and save only the important data to a file, while the errors still appear on your terminal so you know something failed.

In C, the famous `printf()` is actually an alias for `fprintf()` sending data to `stdout`:

```c
printf("Hello, world!\n");             // What we always use
fprintf(stdout, "Hello, world!\n");    // Exactly the same thing, but explicit
```

>💡 **Developer Insight:**
> Always send critical error messages to `stderr` instead of the regular `printf`. This designs software with **maintainability** and automation in mind. If your program encounters an error on a server, whoever is monitoring can filter specifically for `stderr` messages to find what broke without having to read through thousands of lines of regular logs.

</details>

---

<details>
<summary><b>📖 Reading Text Files (Section 9.2)</b></summary>
<br>

---

[Code for Section 9.2 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-2)-READING-TEXT-FILES)

---

In C, files (streams) are divided into two major categories: **Text** and **Binary**.

* **Text Files:** These are sequences of lines that you can read in any common editor (like Notepad or VS Code). C performs small automatic translations on these streams, such as adjusting the "newline" character (`\n`) depending on the operating system.
* **Binary Files:** These are raw data (images, executables, videos). We will cover more about them later.

---

### 🛠️ The File Lifecycle

To read a file, we always follow three mandatory steps: **Open**, **Process**, and **Close**.

```c
#include <stdio.h>

int main(void) {
    FILE *fp; // Pointer to represent the open file

    // 1. OPEN: We use fopen(file_name, mode)
    // "r" stands for "read" (open for text reading only)
    fp = fopen("hello.txt", "r");

    // 2. PROCESS: Reading the first character of the file
    int c = fgetc(fp); 

    // Displaying the character read on the console
    printf("The first character is: %c\n", c);

    // 3. CLOSE: Releasing the file to the operating system
    fclose(fp);

    return 0;
}
```

#### 🔍 Critical Developer Details:
1. **Why `int c` instead of `char c`?**
Did you notice that the `fgetc()` function returns an `int`? This happens because, besides all possible characters, it needs to be able to return a special value called `EOF (End Of File)`, which indicates that the file has ended. A standard char doesn't have room for this extra value, which is why we use `int`.
---
2. **The "`r`" Mode:**
The second argument of `fopen` defines what you intend to do. The "`r`" ensures you won't accidentally erase the file, as it opens the stream for `reading only`.
---
3. **The Reading Cursor:**
The `FILE*` pointer acts like an invisible cursor. Every time you call `fgetc()`, C reads one character and moves the cursor to the next one. If you call the function 10 times, you will read the next 10 characters of the file.
---

> 💡 **Developer Insight:**
> Always close your files with `fclose()`. Although the operating system closes files when your program ends, leaving files open consumes system resources ("file descriptors"). In servers that run for months, forgetting to close files can cause system crashes due to resource exhaustion.

</details>

---

<details>
<summary><b>🔚EOF - The End of File (Section 9.3.0 - Section 9.3.1)</b></summary>
<br>

---

[Code for Section 9.3.0 - 9.3.1 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-3)-EOF-END-OF-FILE)

---


<details>
<summary><b>🧱 The End of File: EOF (Section 9.3.0)</b></summary>
<br>

---

[Code for Section 9.3.0 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-3)-EOF-END-OF-FILE/(SECTION-9-3-0)-THE-END-OF-FILE)

---

How does the program know when a file has ended? C uses a special macro called `EOF` (short for *End Of File*). It acts as a flag that the system sends when you attempt to read beyond the last character of the file.

#### 🧐 The `int` vs `char` Mystery

You might have wondered: "If I am reading characters, why does the `fgetc()` function return an `int`?".

The answer is both technical and fascinating: `EOF` is not a real character (like 'A' or 'B'). It is a special numerical value (usually `-1`) that falls outside the range of a standard `char` type.

* **The Problem:** If `fgetc()` returned a `char`, it wouldn't have an "extra" value to signal the end of the file without confusing it with a valid character.
* **The Solution:** Using `int` allows the function to return any of the 256 possible characters **PLUS** the special `EOF` value.
---

#### 🔄 Reading an Entire File with Loops

Now that we are familiar with `EOF`, we can create a `while` loop to process a file from beginning to end, regardless of its size.

```c
#include <stdio.h>

int main(void) {
    FILE *fp;
    int c; // We use int to capture EOF correctly

    fp = fopen("message.txt", "r");
    
    // Safety check (Best practice!)
    if (fp == NULL) {
        fprintf(stderr, "Error opening the file!\n");
        return 1;
    }

    // The "Idiomatic C Loop":
    // 1. Assigns the character read to 'c'
    // 2. Checks if 'c' is not EOF
    // 3. If it's different, it enters the loop and prints
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }

    fclose(fp);
    return 0;
}
```

> 💡 **Developer Insight:**
> The line while `((c = fgetc(fp)) != EOF)` might look strange at first, but it is what we call Idiomatic Code. It is a compact and efficient way to perform two operations (assignment and comparison) in a single line. In professional development, you will encounter this pattern constantly. Mastering this syntax shows that you are comfortable with "hardcore" C syntax and ready to handle continuous data streams.

</details>

---

<details>
<summary><b>📝 Reading One Line at a Time with fgets() (Section 9.3.1)</b></summary>
<br>

---

[Code for Section 9.3.1 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-3)-EOF-END-OF-FILE/(SECTION-9-3-1)-READING-ONE-LINE-AT-A-TIME)

---

Reading one character at a time works, but it is inefficient for large files. In practice, we usually process text files **line by line**. To do this, C provides the `fgets()` function.

#### 🛠️ How does `fgets()` work?

Unlike `fgetc()`, `fgets()` needs three pieces of information (arguments) to work safely:
1. **The Buffer:** A `char` array where the read line will be stored.
2. **The Maximum Size:** The byte limit it can read (this prevents your program from trying to read more than the array can hold, avoiding memory bugs).
3. **The File Pointer:** The `FILE*` representing the open file.

`fgets()` reads until it encounters a newline (`\n`), reaches the size limit, or hits the end of the file. It also automatically appends the null character (`\0`) to the end of the string.

---

#### 💻 Practical Example: Line Counter

Let's imagine a file named `quote.txt` with a famous phrase. The code below reads the file line by line and prints the line number before the text:

```c
#include <stdio.h>

int main(void) {
    FILE *fp;
    char buffer[1024]; // Enough space for a long line
    int counter = 0;

    fp = fopen("quote.txt", "r");

    // Error checking upon opening
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // The loop continues as long as fgets() does not return NULL (end of file)
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%d: %s", ++counter, buffer);
    }

    fclose(fp);
    return 0;
}
```

#### **⚠️ Important Technical Details:**
- **NULL Return:** While `fgetc()` uses `EOF`, `fgets()` returns `NULL` when it reaches the end of the file or encounters an error.

- **The \n Character:** `fgets()` usually keeps the newline character (`\n`) inside the string if there is space. This is why, in the example above, the printf does not need an extra `\n` at the end.

- **Buffer Safety:** Using `sizeof(buffer)` as an argument ensures that the program will never write outside the array boundaries, an essential practice to avoid security vulnerabilities.

> 💡 **Developer Insight:**
> In professional development, the buffer size (like the `1024` we used) is a choice based on the expected data type. If you are reading a giant log file with massive lines, you will need larger buffers. Seeing a developer use `fgets()` instead of unsafe functions like `gets()` is a clear sign that they care about the stability and security of the application.

</details>

</details>

---

<details>
<summary><b>📊 Formatted Input with `fscanf()` (Section 9.4)</b></summary>
<br>

---

[Code for Section 9.4 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-4)-FORMATTED-INPUT-FSCANF)

---

Just as `printf()` is used to display formatted data, `fscanf()` is its equivalent for **reading** formatted data directly from a file. It is ideal when your file follows a strict pattern, such as a table or a list of records.

---

#### 🐋 Practical Example: Processing Whale Data

Imagine a file named `whales.txt` containing the species name, length (meters), and weight (tons):
```text
blue 29.9 173
right 20.7 135
gray 14.9 41
```

#### We can read this data directly into specific variables:

```c
#include <stdio.h>

int main(void) {
    FILE *fp;
    char name[100];
    float length;
    int mass;

    fp = fopen("whales.txt", "r");

    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // fscanf skips whitespace and returns EOF at the end of the file
    while (fscanf(fp, "%s %f %d", name, &length, &mass) != EOF) {
        printf("Species: %s | Weight: %d t | Length: %.1f m\n", name, mass, length);
    }

    fclose(fp);
    return 0;
}
```

#### **⚠️ Security Alert: The Danger of `fscanf`**
While `fscanf()` is convenient, it can be dangerous if the file data is untrustworthy.

1. **Buffer Overflow:** If you use `%s` without limiting the size, and the file contains a word larger than your `name` array, the program will crash or be compromised.

- **Solution:** Always use a width limit, such as `%99s` (for a 100-position array).

2. Invalid Conversions: If the file expects a number but finds a character, the behavior can be unpredictable.

> 💡 **Developer Insight:**
> In large-scale professional projects, it is very common to read the entire line first with `fgets()` and then process that string in memory using `sscanf()`. This makes the program much more resilient to corrupted or poorly formatted files.

</details>

---

<details>
<summary><b>✍️ Writing to Text Files (Section 9.5)</b></summary>
<br>

---

[Code for Section 9.5 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-5)-WRITING-TO-TEXT-FILES)

---

Just as we have functions for reading (`fgetc`, `fgets`, `fscanf`), C offers symmetrical functions for writing data to files: `fputc()`, `fputs()`, and the powerful `fprintf()`.

---

#### ⚠️ The Write Mode ("w")

To write to a file, we must open it using the `"w"` (*write*) mode.

> **Warning:** When opening an existing file with `"w"`, C will **instantly erase all previous content** (truncate to 0 bytes). If the file does not exist, it will be created.

---

#### 💻 Practical Example: Generating an Output Log

Let's create a program that uses different functions to generate a file named `output.txt`:

```c
#include <stdio.h>

int main(void) {
    FILE *fp;
    int value = 42;

    // Opening for writing (CAUTION: this overwrites the file!)
    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        perror("Error creating file");
        return 1;
    }

    // 1. fputc: Writes a single character
    fputc('A', fp);
    fputc('\n', fp); 

    // 2. fprintf: Writes formatted data (just like the standard printf)
    fprintf(fp, "The calculation result is: %d\n", value);

    // 3. fputs: Writes a complete string
    fputs("Finalizing data logging.\n", fp);

    fclose(fp); // Always close to ensure data is flushed from the buffer to the disk
    return 0;
}
```

> 💡 **Developer Insight:**
A powerful curiosity in C is that `stdout` (your screen) is technically treated as a file. If you changed the `fopen` line to `fp = stdout;`, all write functions would send the data to the console instead of the disk.
For your portfolio, remember:
> - Use `fprintf()` when you need formatting (numbers, dates).
> - Use `fputs()` for plain text, as it is slightly faster and simpler.
> - Always check if the `fp` pointer is `NULL`. Write errors are common (full disk, lack of folder permissions, etc.).


</details>

---

<details>
<summary><b> 💾 Binary I/O (Section 9.6.0 - Section 9.6.1)</b></summary>
<br>

---

[Code for Section 9.6.0 - Section 9.6.1 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-6)-I-O-BINARY)

---

<details>
<summary><b>🛠️Binary File I/O(Seção 9.6.0)</b></summary>
<br>

---

[Code for Section 9.6.1 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-6)-I-O-BINARY/(SECTION-9-6-0)-BINARY-FILE-I-O)

---

So far, we have dealt with text files. However, there is a much more efficient category for storing complex data: **Binary Files**. Unlike text files, they do not undergo automatic translations (such as `\n` adjustments) and store bytes exactly as they are in memory.

---

#### 🛠️ Opening Modes and the "b" Suffix

The first major difference is in `fopen()`. To tell the system we do not want text translations, we add the **"b"** character to the mode:

| Mode | Description |
| :--- | :--- |
| **"rb"** | Opens for binary reading (*read binary*). |
| **"wb"** | Opens for binary writing (*write binary*). Overwrites the file. |
| **"ab"** | Opens for appending binary data (*append binary*). |

---

#### 📦 The `fwrite()` and `fread()` Functions

Since binary files can contain the null character (`\0`) in the middle of the data, functions like `fprintf` or `fputs` do not work well (they would stop at the first null occurrence). We use functions that handle **blocks of bytes**:

#### 1. Writing Raw Data (`fwrite`)
Imagine we want to save a sequence of numerical values that are not readable characters:

```c
#include <stdio.h>

int main(void) {
    FILE *fp;
    unsigned char bytes[6] = {5, 37, 0, 88, 255, 12};

    fp = fopen("output.bin", "wb");

    // fwrite Arguments:
    // 1. Pointer to the data
    // 2. Size of each item (sizeof)
    // 3. Number of items
    // 4. The file pointer (FILE*)
    fwrite(bytes, sizeof(unsigned char), 6, fp);

    fclose(fp);
    return 0;
}
```
When opening this file in a text editor, you will only see "garbage" or strange symbols. This is normal! To see the actual content, we use tools like `hexdump`.

#### 2. Reading Raw Data (`fread`)
The `fread` function returns the number of items successfully read. If it returns `0`, we have reached the End of File (EOF).

```c
#include <stdio.h>

int main(void) {
    FILE *fp;
    unsigned char c;

    fp = fopen("output.bin", "rb");

    // We read 1 item at a time until fread returns 0
    while (fread(&c, sizeof(unsigned char), 1, fp) > 0) {
        printf("%d\n", c);
    }

    fclose(fp);
    return 0;
}
```

#### 📏 Why are the middle arguments unusual?
The `fread` and `fwrite` functions ask for the **item size** and the **quantity**. This is extremely useful for saving entire structs or arrays at once:

```c
// Example: Saving 10 structs at once
fwrite(my_users, sizeof(struct User), 10, fp);
```

>💡 **Developer Insight:**
> Binary files are the foundation for almost everything that is not plain text: images (PNG, JPG), databases (SQLite), and game save files. Demonstrating that you know how to use `fread` and `fwrite` with `sizeof` shows that you understand how memory is structured and know how to create custom, efficient file formats.


</details>

---

<details>
<summary><b>⚠️ 9.6.1 Portability Issues: Structs and Numbers</b></summary>
<br>

---

[Code for Section 9.6.1 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-6)-I-O-BINARY/(SECTION-9-6-1)-PORTABILITY-ISSUES)

---

Saving a `struct` or a multi-byte number (like an `int` or `double`) directly to disk with `fwrite()` seems easy, but it hides traps that can break your program when switching computers. For professional software, we must ensure **Portability**.

---

#### 📏 1. The Alignment Problem (Padding)
As we have seen before, the compiler inserts filling bytes (*padding*) to align data in memory.
* The issue is that **different processors and compilers** use different padding rules.
* If you save a struct on a PC and try to read it on a Raspberry Pi (or a Mac server), the bytes might be in different positions, corrupting your data.



---

#### 🔄 2. The "Endianness" Problem (Byte Order)
Not all computers read numbers the same way. Imagine the hexadecimal number `0x1234`:

* **Big-Endian:** Saves bytes in the "natural" order: `12 34`.
* **Little-Endian:** (Common in Intel/AMD processors): Saves bytes reversed: `34 12`.

If your program writes one way and reads another, a "Price" or "User ID" value will become a completely random and incorrect number.



---

#### 🛠️ The Solution: Serialization

For your binary data to be portable, you should never save "raw" memory. Instead, you must **Serialize** the data.

**Serialization** means converting your data into a standard, controlled, and platform-independent format.

#### How to do it professionally:
1. **Manual:** Write a function that saves field by field, ensuring each `int` is converted to a fixed byte order (usually *Network Byte Order*).
2. **Libraries (Recommended):** Use industry-established tools that solve this for you and allow your C code to communicate with other languages (Java, Python, etc.).
* **Protocol Buffers (Google)**
* **JSON/XML** (For text)
* **MessagePack** (For compact binary)

>💡 **Developer Insight:**
> In the real world, binary files that travel across the internet or between different systems (like a cloud game save) **must** be serialized. Demonstrating knowledge of *Endianness* and *Padding* shows a recruiter that you don't just "make the code work on your machine," but understand the architectural challenges of distributed and multi-platform systems.

</details>

</details>

</details>

---

<details>
  <summary><b>🔹Day 10: `typedef`: Creating New Names for Types </b></summary>

---

[Day 10 code can be found here](./CODE_BY_DAY/DAY_010)

---

<details>
<summary><b>🏷️ `typedef`: - Introduction (Section 10.0)</b></summary>
<br>

---

[Section 10.0 code can be found here](./CODE_BY_DAY/DAY_010/(SECTION-10-0)-TYPEDEF-INTRODUCTION)

---

At first glance, `typedef` might seem like just an unnecessary "nickname," but it is fundamental for making C code more readable, organized, and easier to maintain. Instead of dealing only with generic types like `int` or `struct`, you can create names that describe exactly what that data represents in your program.

---

#### 🔍 What does `typedef` do?

It allows you to define a new name (an *alias*) for an existing type. The basic syntax follows this pattern:
`typedef [existing_type] [new_name];`

#### Simple Example:
```c
typedef int Distance; // Now 'Distance' is an alias for 'int'

Distance km_traveled = 500;
int x = 10; // Both are treated the same way by the compiler
```

---

#### 🏗️ Most Common Use: Simplifying Structs

Without `typedef`, every time you declare a structure variable, you must repeat the `struct` keyword. With `typedef`, you eliminate this repetition, making the code much cleaner.

| Without `typedef` | With `typedef` |
| :--- | :--- |
| `struct Point p1;` | `Point p1;` |

#### **Professional Implementation:**

```c
typedef struct {
    float x;
    float y;
} Point; // Now 'Point' is a complete, independent type

int main(void) {
    Point p = {10.5, 20.0}; // Much cleaner and more readable!
    return 0;
}
```

#### ⚖️ Why use typedef?

* **Abstraction:** If you decide that `Distance` should no longer be an `int`, but rather a `double`, you only need to change it in the `typedef`, and your entire codebase will be updated automatically.
* **Self-documentation:** Declaring `Age user1` is much more explanatory and semantic than just using a generic `int`.
* **Portability:** It allows you to create names that ensure the correct data size across different architectures (such as the well-known `size_t` or `int32_t`).

---

> 💡 **Developer Insight:**
> In operating systems and embedded systems development, `typedef` is widely used to "hide" hardware complexity. When you encounter a type like `uint8_t`, know that under the hood, there is a `typedef unsigned char`. Using this technique demonstrates that your code is designed to be portable and easy to maintain.

</details>

---

<details>
 <summary><b>📖 typedef in Theory (Section 10.1)</b></summary>
<br>

---

[Section 10.1 code can be found here](./CODE_BY_DAY/DAY_010/(SECTION-10-1)-TYPEDEF-IN-THEORY)

---

The essence of `typedef` is simple: you take an existing type and create an **alias** for it. From that point on, the compiler treats this new name exactly like the original type.

#### 🛠️ Basic Syntax

You can transform any type into a new name. Here is how the structure works:

```c
typedef int antelope;  // Makes "antelope" an alias for "int"

antelope x = 10;       // The "antelope" type is identical to the "int" type
```

---
C also allows you to create multiple aliases at once using a comma-separated list, in the same way you declare variables:

```c
typedef int antelope, bagel, mushroom;  // All are now aliases for "int"
```

#### 🧐 Why does this matter?
While replacing `int` with `mushroom` might seem useless, the theory behind it is what enables the creation of powerful **abstractions**. In day-to-day development, we don't use random names; instead, we use names that explain the data's role in the system:
- Instead of `unsigned long`, we use `FileSize`.
- Instead of `unsigned char`, we use `Byte`.

---

> 💡 **Developer Insight:**
> The theoretical use of `typedef` serves to introduce the concept of **Semantic Typing**. When you read `antelope x`, you don't know what `x` does. But when you read `Coordinate x`, the code explains itself. The functionality is simple, but its intelligent use is what differentiates amateur code from professional, readable code.

</details>

---

<details>
<summary><b>🛠️ typedef in Practice (Section 10.2.0 - Section 10.2.4)</b></summary>
<br>

---

[Codes for Sections 10.2.0 - 10.2.4 can be found here](./CODE_BY_DAY/DAY_010/(SECTION-10-2)-TYPEDEF-IN-PRACTICE)

---

<details>
<summary><b>📦 typedef Creating Abstractions (Section 10.2.0)</b></summary>
<br>

---

[Codes for Section 10.2.0 can be found here](./CODE_BY_DAY/DAY_010/(SECTION-10-2)-TYPEDEF-IN-PRACTICE/(SECTION-10-2-0)-TYPEDEF-CREATING-ABSTRACTIONS)

---

Renaming an `int` to a random name isn't very useful. Where `typedef` truly shines is in simplifying complex types, making the code cleaner and more professional.

---

#### 📦 1. Simplifying Structs

This is the number one use case for `typedef`. Without it, you are forced to write the word `struct` every time you declare a variable. With `typedef`, you create a "short" and direct type name.

| Approach | Code |
| :--- | :--- |
| **Traditional** | `struct Point p1;` |
| **With typedef** | `Point p1;` |

**Common Implementation:**
```c
typedef struct {
    int x, y;
} Point; // 'Point' is now the official type name
```

#### 🧬 2. Facilitating Pointer Usage
Pointers can quickly make C syntax confusing. `typedef` helps hide this complexity by creating types that already imply a pointer.
```c
typedef struct Node *List; // 'List' now represents a pointer to a 'struct Node'

// Instead of: struct Node *my_list;
List my_list; // Much more semantic!
```

#### 🏗️ 3. Creating Abstract Data Types (ADTs)
Often we want to hide how data is stored so the rest of the program doesn't have to worry about it.
- Example: Imagine you are creating an ID system. Today they are `int`, but tomorrow they might be `long long`.
```c
typedef int UserID;

// In the rest of the code you use:
UserID id1 = 1005;
```

If the ID type needs to change, you only update one line in your header file, rather than hundreds of `.c files`.

> 💡 **Developer Insight:**
> In professional practice, `typedef` is used to create an **abstraction layer**. When using libraries like `SDL2` for games or `OpenSSL` for security, you rarely see C's primitive types. Instead, you interact with types like `SDL_Window` or `EVP_PKEY`.
> This demonstrates that the library author focused on creating a domain-specific language for their problem.

</details>


---

<details>
<summary><b> 🏗️ Definition Practices: typedef and structs (Section 10.2.1)</b></summary>
<br>

---

[Codes for Section 10.2.1 can be found here](./CODE_BY_DAY/DAY_010/(SECTION-10-2)-TYPEDEF-IN-PRACTICE/(SECTION-10-2-1)-DEFINITION-PRACTICES)

---

Using `typedef` with structures is one of the most effective techniques to reduce visual "noise" in C. By creating an alias for a `struct`, the code becomes cleaner as it eliminates the need to repeat the `struct` keyword in every variable declaration.

There are three main patterns I have used in my studies:

---

#### 1. Alias After Definition
In this approach, the structure is defined first, and the alias is created immediately after. This maintains a clear separation between the data structure and its type name.

```c
struct animal {
    char *name;
    int legs;
};

typedef struct animal animal; // Creating the alias 'animal'

struct animal x; // Classic declaration (works)
animal y;        // Simplified declaration (works)
```

---

#### 2. Combined Definition (Optimized)
This is the pattern I use most frequently because it is concise. The `struct` and the `typedef` are declared within the same code block.

```c
typedef struct animal {
    char *name;
    int legs;
} animal;

struct animal x; // Accessible via 'struct animal' tag
animal y;        // Accessible via 'animal' alias
```

---

#### 3. Anonymous Structures
When there is no need to reference the struct internally, we can omit the tag name, creating an anonymous structure directly bound to the alias.

```c
typedef struct {
    int x, y;
} Point;

// struct Point p1; // ERROR: The struct has no internal name (tag)
Point p1 = {.x=20, .y=40}; // WORKS: Clean and direct interface
```

#### ⚖️ Technical Analysis: When to use each?
While all three forms achieve similar results, the choice depends on the project context:
- **Readability:** Using `typedef` makes the code feel **closer to modern languages**, treating the `struct` as an "object" or user-defined "type."
- **Self-reference:** For data structures like `Linked Lists` or `Trees`, the "Anonymous Structure" does not work, because the pointer to the next node requires a tag name to be declared before the `typedef` is finalized.

```c
// Example of mandatory Tag for lists:
typedef struct Node {
int data;
struct Node *next; // Requires the 'struct Node' tag here
} Node;
```

> 💡 **Developer Insight:**
Opt for using `typedef` for most `structs` to ensure a cleaner API. However, remain aware that keeping the `struct` keyword in certain contexts can help other developers immediately identify that the `type` is a `memory-allocated structure` rather than a simple primitive type. The choice of `typedef` is, above all, an interface design decision.

</details>

---

<details>
<summary><b> 🔧 typedef and Other Types: The Power of Abstraction (Section 10.2.2)</b></summary>
<br>

---

[Codes for Section 10.2.2 can be found here](./CODE_BY_DAY/DAY_010/(SECTION-10-2)-TYPEDEF-IN-PRACTICE/(SECTION-10-2-2)-TYPEDEF-AND-OTHER-TYPES)

---

While it may seem overly simple to use `typedef` on primitive types like `int` or `float`, this practice is an **architectural safety** strategy. The goal is not just to give it a "nice" name, but to isolate the actual type from its usage within the code.

---

#### 🛡️ Shielding Code Against Changes
Imagine a project with thousands of lines of code where you use `float` for all financial calculation variables. If, after months of development, you realize you need more precision (`double` or `long double`), you would have to manually change every single declaration.
With `typedef`, you create an abstraction layer:

```c
// Centralized definition
typedef float grade_t;

// Usage throughout the system
grade_t g1, g2, g3;
```

If the requirements change, the update is made in **one single place:**

```c
// Instant change for the entire project:
typedef double grade_t; 

// Variables g1, g2, and g3 are now automatically doubles.
grade_t g1, g2, g3;
```

---

#### 🌍 Real-World Use Cases:
This technique is essential in three scenarios:

1. **Configurable Precision:** Switching between `float` and `double` depending on hardware capability.
2. **System IDs:** Defining whether a `UserID` will be an `int` or `long long` without breaking the business logic.
3. **Unit Semantics:** Creating types like `kilometers_t` or `seconds_t` to avoid confusion between different physical quantities that use the same primitive type.

---

> 💡 **Developer Insight:**
> This technique is what we call "**Future-Proofing**". By using abstract types, I ensure my code is portable. For example, if I compile my code for an 8-bit microcontroller and then for a 64-bit PC, I can adjust the `typedefs` to ensure variable sizes remain consistent with the target hardware without rewriting the core logic.

</details>

---

<details>
<summary><b>🔗 10.2.3 typedef and Pointers (Section 10.2.3)</b></summary>
<br>

---

[Codes for Section 10.2.3 can be found here](./CODE_BY_DAY/DAY_010/(SECTION-10-2)-TYPEDEF-IN-PRACTICE/(SECTION-10-2-3)-TYPEDEF-AND-POINTERS)

---

`typedef` also allows you to create names for pointer types, which can simplify the syntax in complex declarations.

```c
typedef int *intptr; // 'intptr' is now an alias for 'int *'

int a = 10;
intptr x = &a; // 'x' is a pointer to an int
```

#### ⚠️ The Risk of Over-Abstraction
While this practice makes declarations shorter, it introduces a clarity challenge: **it hides the fact that the variable is a pointer**.

- **Without the visible `*`:** Other developers (or yourself six months from now) might look at `intptr x` and forget that x requires pointer arithmetic, dereferencing (`*x`), or that it can be `NULL`.

- **Transparency:** Many programmers prefer to keep the `*` explicit (`int *x`) so that the nature of the variable is obvious at first glance.

However, this technique is extremely common in **large-scale APIs** and **systems development**, where thousands of developers opt for this abstraction to create data types that look like opaque "objects."

---

#### 🛠️ Use Cases Where It Is Useful:
Hiding the pointer with `typedef` makes more sense when the data type is too complex to be read every time, such as in **Function Pointers**

```c
// Without typedef (Confusing):
void (*callback)(int);

// With typedef (Clear):
typedef void (*HandlerFunc)(int);
HandlerFunc my_callback;
```

> 💡 **Developer Insight:**
> If the pointer is a simple `int *` or `char *`, it's better to keep the asterisk explicit to ensure clarity. But if you are creating an **Abstract Data Type (ADT)** where the user doesn't need to know it is a pointer (like a `Queue` or `Map` structure), typedef becomes a valuable design tool to hide unnecessary implementation details.

</details>

---

<details>
<summary><b> 🔡 typedef and Standardization (Section 10.2.4)</b></summary>
<br>

---

[Codes for Section 10.2.4 can be found here](./CODE_BY_DAY/DAY_010/(SECTION-10-2)-TYPEDEF-IN-PRACTICE/(SECTION-10-2-4)-TYPEDEF-AND-STANDARDIZATION)

---

The official C specification (C11) does not dictate a single rule for naming types created with `typedef`. As a result, we find various styles in the real world. The most important thing is not which style to choose, but rather **maintaining consistency** throughout the project.

---

#### 🎨 Common Naming Styles

There are four naming patterns most commonly used in the community:

1.  **lower_snake_case:** `my_point` (Very common in Unix systems and the Linux Kernel).
2.  **CamelCase / PascalCase:** `MyPoint` (Common in high-level applications and modern frameworks).
3.  **Leading Uppercase:** `Mypoint` (Classic style used in fundamental books like K&R).
4.  **UPPER_SNAKE_CASE:** `MY_POINT` (Generally avoided for types, as it is usually reserved for macros and constants).

---

#### 🛠️ The `_t` Convention

A widespread practice, especially in POSIX systems, is to add the suffix `_t` (standing for *type*) at the end of the name. Native C examples like `size_t`, `int32_t`, and `uint8_t` follow this rule.

* **Advantage:** Instantly identifies that the word is a type defined by a `typedef`.
* **Warning:** Some style guides suggest avoiding creating your own names ending in `_t` to prevent conflicts with future standard types of the language.

---

>💡 **Developer Insight:**
> If you are creating a type that abstracts a complex structure, use **PascalCase** (e.g., `UserConfig`) to visually differentiate it from regular variables. If you are creating an alias for a primitive type, use **snake_case** with the `_t` suffix (e.g., `distance_t`).
> The most valuable lesson here is: **Follow the Style Guide.** If the project already exists, use the pattern that is there. If the project is new, define your pattern and do not break it. A code where each file uses a different capitalization looks amateur and makes maintenance harder.

</details>

</details>

---

<details>
<summary><b> 📏 Arrays and typedef (Section 10.3)</b></summary>
<br>

---

[Codes for Section 10.3 can be found here](./CODE_BY_DAY/DAY_010/(SECTION-10-3)-ARRAYS-AND-TYPEDEF)

---

Although it is a practice rarely seen in everyday development, C allows you to create an alias for a **fixed-size array**. The syntax is somewhat peculiar, as the name of the new type is positioned where the variable name would normally be.

---

#### 🛠️ Syntax and Example

```c
// Defines the type 'five_ints' as an array of 5 integers
typedef int five_ints[5];

// 'x' is now an array with 5 positions
five_ints x = {11, 22, 33, 44, 55};
```

---

#### ⚖️ Pros and Cons:
- **Pro:** Can be useful in very specific mathematical contexts, such as defining a `Matrix3x3` or `Vector3D` type, ensuring that these structures always have the same size.

- **Con (Hiding):** Just as with pointers, this `typedef` **hides the array nature of the variable**. Anyone reading the code might not immediately realize that `x` is an `array` and that, when passed to a function, it will undergo the decay process (it will be treated as a pointer).

> 💡 **Developer's Insight:**
> This technique can make the code dangerous if not well documented. If `five_ints x`; is declared, there are no visible brackets `[]` to remind you that `x` has index boundaries.
> Prefer to keep array declarations explicit or, if you need a fixed type, wrap the array inside a `struct`. This makes the code much safer and more readable for other developers.

</details>

</details>

---

<details>
<summary><b>🔹 Day 11: Pointers II: Arithmetic</b></summary>

---

[Day 11 code can be found here](./CODE_BY_DAY/DAY_011)

---

<details>
<summary><b> 📍 Pointers II: Arithmetic and Advanced Concepts (Section 11.0)</b></summary>
<br>

It's time to go deeper! While the first part about pointers served to understand basic addresses and values, this chapter marks the beginning of a much more technical exploration. Here, the focus shifts from initial theory to the practical use of pointers for manipulating data collections and managing raw memory.

</details>

---

<details>
<summary><b> 🧮 Pointer Arithmetic (Section 11.1.0 - Section 11.1.3)</b></summary>

---

[Codes for Section 11.1.0 - 11.1.3 can be found here](./CODE_BY_DAY/DAY_011/(SECTION-11-1)-POINTER-ARITHMETIC)

---

<details>
<summary><b> ⏰ Pointer Arithmetic - Introduction (Section 11.1.0)</b></summary>
<br>

---

[Codes for Section 11.1.0 can be found here](./CODE_BY_DAY/DAY_011/(SECTION-11-1)-POINTER-ARITHMETIC/(SECTION-11-1-0)-ARITHMETIC-POINTER-INTRO)

---

In C, pointers are not just static addresses; it is possible to perform mathematical operations with them, with **addition** and **subtraction** being the most fundamental.

---

#### ❓ What happens in practice?

When we add `1` to a pointer, the compiler doesn't just add 1 byte to the address. It moves the pointer to the **next item of the corresponding type** in memory.

* **Pointer to `int`:** Adding `1` jumps the size of an integer (usually 4 bytes).
* **Pointer to `char`:** Adding `1` jumps exactly 1 byte.

This logic ensures that, when navigating through memory, you always land exactly at the beginning of the next data element, regardless of the size it occupies.

---

#### ⚠️ The Danger of Invalid Dereferencing

The freedom to move pointers carries a high risk. When navigating through memory, it is easy to "go off the rails" and point to addresses that do not belong to your program or that have not been initialized.

> **Golden Rule:** Always make sure the pointer is at a valid location before using the dereference operator (`*`). Attempting to read from or write to invalid locations causes **undefined behavior**, almost always resulting in an immediate crash (Segmentation Fault).

---

> 💡 **Developer's Insight:**
> Pointer arithmetic and the **Equivalence between Arrays and Pointers** are concepts that blend together (the classic "chicken and egg" problem). Mastering this math is what allows you to understand how C accesses array elements under the hood. Instead of seeing just indices, I now see memory displacements (*offsets*), which is essential for code optimization and direct manipulation of data buffers.

</details>

---

<details>
<summary><b> ➕ Adding to Pointers (Section 11.1.1)</b></summary>
<br>

---

[Codes for Section 11.1.1 can be found here](./CODE_BY_DAY/DAY_011/(SECTION-11-1)-POINTER-ARITHMETIC/(SECTION-11-1-1)-ADDING-TO-POINTERS)

---

To understand pointer arithmetic, the best scenario is to observe an array in memory. Since array elements are guaranteed to be contiguous (one right after the other), address math works perfectly.

#### 🛠️ The Practical Experiment

Consider the following array and a pointer pointing to its beginning:

```c
int a[5] = {11, 22, 33, 44, 55};
int *p = &a[0]; // Or simply 'int *p = a;'
```

- If we dereference `p`, we get the value `11`. But what if we want the next one?

```c
printf("%d\n", *p);       // Prints 11
printf("%d\n", *(p + 1)); // Prints 22!
```

#### What happened?
- C knows that `p` is a pointer to `int`. It checks `sizeof(int)` and jumps exactly that number of bytes to reach the next integer.

---

#### 🔄 Iteration with Pointers vs. Arrays
This logic allows us to traverse arrays using only pointers, in the same way we do with indices:

```c
for (int i = 0; i < 5; i++) {
    printf("%d\n", *(p + i)); // Exactly the same as p[i]!
}
```

This happens because, for the computer, a pointer is just a **memory index**.

---

#### 🧠 How does it work "under the hood"?
Imagine memory as a huge global array where each index is a 1-byte address.

1. If an `int` (let's say, 3490) is at **address 2000**.

2. And each `int` occupies **4 bytes**.

3. The next `int` will be at **address 2004**.

When you do `p + 1` in code, C performs the actual calculation:
`Current Address + (1 * sizeof(int))` ⮕ `2000 + 4` = `2004`.

If it were a pointer to `double` (8 bytes), `p + 1` would result in `2008`. The compiler abstracts this calculation so you can focus on logic instead of individual bytes.

> 💡 **Developer's Insight:**
> Understanding that `*(p + i)` is the same as `p[i]` is a real "aha!" moment. This explains why C is so fast: array access is just an address addition plus a dereference. It reinforces that arrays are not complex objects, but simply blocks of memory with a pointer pointing to the base.

</details>

---

<details>
<summary><b> 🚀 Modifying Pointers (Section 11.1.2)</b></summary>
<br>

---

[Codes for Section 11.1.2 can be found here](./CODE_BY_DAY/DAY_011/(SECTION-11-1)-POINTER-ARITHMETIC/(SECTION-11-1-2)-MODIFYING-POINTERS)

---

We have seen that we can add an integer to a pointer to see what lies ahead. Now, let's take it to the next level: **we are going to modify the pointer itself**.

---

In C, you can increment (`p++`) or decrement (`p--`) a pointer directly. This causes the address stored in the variable to change, moving the pointer to the next memory position based on the data type.

#### 🚩 Using a Sentinel Value:
To demonstrate this, we will use a sentinel value (`999`). It serves as an "end-of-line" flag, allowing us to traverse the array without needing to know its exact size beforehand.

```c
int a[] = {11, 22, 33, 44, 55, 999}; // 999 is our stop signal
int *p = &a[0]; // p starts pointing to 11
```

#### 🔄 Navigating with the ++ Operator:
Instead of using an index (`i`), we can simply "push" the pointer forward inside a loop:

```c
while (*p != 999) {       // While the pointed value is not 999
    printf("%d\n", *p);   // Prints the current value
    p++;                  // Moves 'p' to the next integer in memory!
}
```

#### What happens at each iteration?

1. In the first round, `p` points to `11`.

2. The `p++` command makes `p` jump `sizeof(int)` bytes.

3. Now `p` points to `22`.

4. The cycle continues until `*p` finds `999`.

---

#### ⚖️ Technical Advantage:
This approach is extremely common in C because it is very efficient. In many cases, incrementing a pointer is faster than calculating `base + (index * sizeof(type))` at each access, as the processor simply adds the offset to the value already in the register.

---

> 💡 **Developer Insight:**
> Treating the pointer as a cursor is the "native" way to process data in C. This is exactly how standard functions like `strlen()` traverse strings: they increment a pointer character by character until they find the null terminator (`\0`).

</details>

---

<details>
<summary><b> ➖ Subtracting Pointers (Section 11.1.3)</b></summary>
<br>

---

[Codes for Section 11.1.3 can be found here](./CODE_BY_DAY/DAY_011/(SECTION-11-1)-POINTER-ARITHMETIC/(SECTION-11-1-3)-SUBTRACTING-POINTERS)

---

Just as we can add values to move forward, we can subtract values from a pointer to return to previous addresses. However, C offers something even more interesting: subtraction between two pointers.

---

#### 📏 Calculating the Distance Between Elements:
When you subtract one pointer from another (e.g., `p2 - p1`), the result is not the difference in bytes, but rather the **number of items of the corresponding type that exist between them**.

- **Crucial Rule:**
  Pointer subtraction is only guaranteed and valid if both point to elements within the **same array**. Otherwise, the behavior is undefined.

---

#### 🛠️ Implementing `my_strlen` with Subtraction:
A classic application of this technique is calculating string length. Instead of using a counter (`int i = 0`), we can use two pointers: one fixed at the beginning and a "cursor" that travels to the end.
```c
#include <stdio.h>

int my_strlen(char *s) {
    char *p = s; // 'p' starts at the beginning of the string

    // Moves the cursor 'p' until it finds the null character (\0)
    while (*p != '\0') {
        p++;
    }

    // The difference between the final and initial pointer is the string length!
    return p - s;
}

int main(void) {
    printf("%d\n", my_strlen("Hello, world!")); // Prints 13
}
```

#### 🧠 Why does this work?
Think of pointers as house addresses on a street where all houses are the same size:

1. If the first house (pointer `s`) is number **100**.

2. And the cursor `p` stopped at house number **113**.

3. The distance `p - s` is **13**, indicating that there are 13 houses (or characters) between the beginning and the end.

> 💡 **Developer Insight:**
> This implementation of `strlen` is extremely common in low-level libraries because it is very direct. It reinforces the idea that a string name in C is nothing more than a pointer to its first element.

</details>

</details>

---

<details>
 <summary><b>🧩 Equivalence Between Arrays and Pointers (Section 11.2 - Section 11.2.1)</b></summary>

---

[Codes for Section 11.2.0 - 11.2.1 can be found here](./CODE_BY_DAY/DAY_011/(SECTION-11-2)-EQUIVALENCE-BETWEEN-ARRAYS-AND-POINTERS)

---

<details>
 <summary><b>📝 Fundamental Formula (Section 11.2.0)</b></summary>
<br>

---

[Codes for Section 11.2.0 can be found here](./CODE_BY_DAY/DAY_011/(SECTION-11-2)-EQUIVALENCE-BETWEEN-ARRAYS-AND-POINTERS/(SECTION-11-2-0)-FUNDAMENTAL-FORMULA)

---

Finally, the missing piece of the puzzle. In C, the relationship between arrays and pointers is so intimate that there is a **fundamental formula** that defines this equivalence:

> **`a[b] == *(a + b)`**

This means that the bracket notation we have used from the beginning is actually just "syntactic sugar" for a pointer arithmetic operation followed by dereferencing.

---

#### 🧪 Practical Versatility

We can use array notation on pointers and pointer notation on arrays interchangeably. In the code below, this translates into total flexibility:
```c
#include <stdio.h>

int main(void) {
    int a[] = {11, 22, 33, 44, 55};
    int *p = a; // 'p' points to the first element of 'a'
    int i = 2;  // Example index

    // Equivalent ways to access data:
    printf("%d\n", a[i]);      // Array notation with array
    
    printf("%d\n", p[i]);      // Array notation with pointer
    
    printf("%d\n", *(a + i));  // Pointer notation with array
    
    printf("%d\n", *(p + i));  // Pointer notation with pointer
}
```

#### ⚠️ The Big Difference: The Pointer is Mobile, the Array is Not.
Although we can use the same notations to access elements, there is a **crucial restriction** that separates the two natures:

1. **Pointers are variables:** You can change where they point (`p++`, `p = &something_else`).

2. **Array identifiers are not mutable variables:** You **cannot** reassign an array or move it through memory.

```c
p++;           // WORKS: The pointer now points to the next item.
// a++;        // ERROR: The array identifier is fixed!
```

#### Note on copying:
If you need to copy the content of one array to another, you cannot simply do `array1 = array2`. You must use a loop or specific functions like `memcpy()`.

> 💡 **Developer Insight:**
> This equivalence explains why C is so performant. When you write `a[i]`, the compiler applies exactly `*(a + i)`. Understanding this removes the "mystery" behind arrays and gives you absolute control over how data is read.

</details>

---

<details>
 <summary><b>📞 Equivalence in Function Calls (Section 11.2.1)</b></summary>
<br>

---

[Codes for Section 11.2.0 can be found here](./CODE_BY_DAY/DAY_011/(SECTION-11-2)-EQUIVALENCE-BETWEEN-ARRAYS-AND-POINTERS/(SECTION-11-2-1)-EQUIVALENCE-IN-FUNCTION-CALLS)

---

This is, without a doubt, the scenario where you will most frequently encounter the equivalence between arrays and pointers. When we define a function that receives a pointer, it gains the ability to accept both pointers and original arrays.

#### 🔄 Argument Flexibility

If we have a function that expects a pointer:
```c
int my_strlen(char *s)
```

We can pass it a character array or a character pointer, and both will work perfectly:

```c
char s[] = "Antelopes"; // Array
char *t = "Wombats";   // Pointer

printf("%d\n", my_strlen(s));  // IT WORKS!
printf("%d\n", my_strlen(t));  // IT WORKS TOO!
```

---

#### 🎭 Equivalent Signatures:
Due to this language feature, the two function declarations below are exactly the same to the compiler:

```c
int my_strlen(char *s)    // Pointer notation
int my_strlen(char s[])   // Array notation
```

Even if you write `char s[]`, C will internally convert it to `char *s`. Using brackets in the function signature serves only as a "visual hint" to other programmers that the function expects a data set (an array) rather than just a pointer to a single character.

> 💡 **Developer Insight:**
> This characteristic is what makes standard library functions (such as `printf`, `scanf`, or `strcat`) so versatile.

</details>

</details>

---

<details>
 <summary><b>🌀 Void Pointers (Section 11.3)</b></summary>
<br>

---

[Codes for Section 11.3 can be found here](./CODE_BY_DAY/DAY_011/(SECTION-11-3)-VOID-POINTERS)

---

We have already used `void` to indicate that a function returns nothing, but a `void *` is a completely different beast. It is a pointer to "something" that exists, but whose **type is unknown** to the compiler.

This abstraction is what allows us to create flexible and generic code in a typed language.

---

#### 🛠️ Why use void*?

There are two main use cases I explored:

1.  **Byte-by-Byte Operations:** Functions like `memcpy()` need to copy memory regardless of what is stored there (whether it is an `int`, `float`, or `struct`). The `void *` allows the function to accept any address.
2.  **Callbacks and Generic Data:** Library functions like `qsort()` use `void *` so they can sort any array. They pass the data to you, and since **you** know the type, you perform the conversion (cast) back.

---

#### 🔬 Real Example: The Versatility of `memcpy()`

`memcpy()` is the perfect example of the power of `void *`. Its signature is:
`void *memcpy(void *dest, void *src, size_t n);`

Thanks to `void *`, I can use the same function to copy totally different things:
```c
// Copying a String
memcpy(t, s, 7); 

// Copying an Integer Array
int a[] = {11, 22, 33};
int b[3];
memcpy(b, a, 3 * sizeof(int)); // We must specify the total BYTES
```

If we didn't have `void *`, we would need a version of the function for every type (`memcpy_int`, `memcpy_float`, etc.)

---

#### ⚠️ The Golden Rules (and Limitations):

With great power comes great restrictions. Since the compiler does not know the size of what is being pointed to by a void *, WE CANNOT:

1. Perform pointer arithmetic (`p++` or `p + 1`).

2. Dereference (`*p`).

3. Use array notation (`p[i]`).

4. Use the arrow operator (`p->field`).

**The Solution**: Before using the data, you must convert it (cast) to a specific type.

```c
char a = 'X';
void *p = &a;   // Ok: p points to 'X'
// printf("%c", *p); // ERROR!
char *q = (char *)p;    // Ok: Converting to char*
printf("%c", *q); // It works!
```
---

#### 🏗️ Creating my own version of `memcpy`:
To understand the logic, here is a simple version that converts `void *` to `char *` to manipulate memory byte by byte:

```c
void *my_memcpy(void *dest, void *src, int byte_count) {
    char *s = (char *)src, *d = (char *)dest; // Conversion to char* (1 byte)
    
    while (byte_count--) {
        *d++ = *s++; // Copies byte by byte
    }
    return dest;
}
```

> 💡 **Developer Insight:**
> The `void *` is the foundation for what we would call "polymorphism" in C. When using `qsort()`, for example, the function doesn't need to know if it's sorting numbers or complex structures; it just moves blocks of bytes based on the result of a comparison function that is provided.

</details>



</details>

---

<details>
  <summary><b>🔹 Day 12: Manual Memory Allocation</b></summary>

---

[Day 12 code can be found here](./CODE_BY_DAY/DAY_012)

---

<details>
 <summary><b>🧠 Introduction - Manual Memory Allocation (Section 12.0)</b></summary>
<br>

---

[Codes for Section 12.0 can be found here](./CODE_BY_DAY/DAY_012/(SECTION-12-0)-INTRODUCTION-TO-MANUAL-MEMORY-ALLOCATION)

---

Manual allocation is what sets C apart from languages like Python or Java. In other languages, the system decides when to create and destroy data (via *Garbage Collection*). In C, you have total control: you request the memory, and you return it.

---

#### 🏛️ Stack vs. Heap: Where does the data live?

Although the C technical specification doesn't strictly use these terms, every developer needs to know this distinction:

*   **The Stack:** Where your automatic local variables live. They are created when you enter a `{}` block and destroyed automatically when you exit.
*   **The Heap:** A large memory reservoir you can use for data that needs to survive beyond the scope of a single function. This is where manual allocation happens.

---

#### 🛠️ Power and Responsibility:

When you allocate memory manually, C reserves a specific number of bytes for you. This memory **will remain occupied** until you explicitly tell the system to release it.

*   **Memory Leaks:** If you forget to free the memory you requested, the program will keep reserving that space until it closes. In long-running systems (like servers or firmware), this can exhaust the RAM and cause a system crash.
*   **The Golden Rule:** If the memory was manually allocated, you **must** manually free it.

---

#### 📦 Necessary Tools

To manage the Heap, we will use functions from the standard library:

*   `<stdlib.h>`: Contains the allocation and deallocation functions.
*   `sizeof`: Essential to know exactly how many bytes to request from the system, ensuring portability across different architectures.

---

> 💡 **Developer Insight:**
> Manual allocation is vital when we don't know the data size beforehand (e.g., the content of a file that a user will load). Mastering the **Heap** is the final step to building robust applications that don't "leak" memory and respect hardware limits.

</details>

---

<details>
 <summary><b>📦 Allocating and Deallocating: malloc() and free() (Section 12.1)</b></summary>
<br>

---

[Codes for Section 12.1 can be found here](./CODE_BY_DAY/DAY_012/(SECTION-12-1)-ALLOCATING-AND-DEALLOCATING-MEMORY)

---

The `malloc()` (Memory Allocation) function is the tool we use to reserve a block of memory on the **Heap**. It takes a single argument: the number of bytes you want to allocate.

#### 🛠️ How malloc() works:

1.  **Generic Return:** `malloc()` returns a `void *`. As we learned in the previous chapter, this is great because it allows you to assign the result to any pointer type seamlessly.
2.  **Using sizeof:** To ensure the code works on any machine (portability), we always use `sizeof` to define how many bytes we need.

```c
// Allocates space for a single int (usually 4 bytes)
int *p = malloc(sizeof(int));
```

---

🧹 The `free()` Function:
As soon as we are done using the memory, we must call `free()`. You pass it the pointer you received from `malloc()`. This notifies the system that those bytes are free to be used by another part of the program.

- ⚠️ **Danger:** Attempting to access or modify memory after calling `free()` is a severe error called "Use After Free," resulting in undefined behavior and crashes.

📝 **Lifecycle Example:**

```c
int *p = malloc(sizeof(int)); // 1. Allocate
if (p == NULL) return 1;      // Good practice: check if allocation failed

*p = 12;                      // 2. Use
printf("%d\n", *p); 

free(p);                      // 3. Release
// *p = 3490;                 // ERROR: Memory no longer belongs to you!
```

---

#### 💡 Syntax Tip: Dynamic `sizeof`:
A common practice among experienced C developers is to use the dereferenced pointer itself inside `sizeof`. This prevents errors if you **change the variable type later**:

```c
int *p = malloc(sizeof *p); // 'sizeof *p' is the same as 'sizeof(int)'
```

> 💡 **Developer Insight:**
> At first, it seems more laborious than simply declaring `int x;`. But manual allocation is what allows complex projects—like a course sales system or translating long files—to function. With `malloc`, you can decide at runtime how much memory will be needed based on user input or file size, something that local variables (Stack) do not allow flexibly.

</details>

---

<details>
 <summary><b> 🛡️ Error Checking: The Guardian of NULL (Section 12.2)</b></summary>

---

[Codes for Section 12.2 can be found here](./CODE_BY_DAY/DAY_012/(SECTION-12-2)-ERROR-CHECKING)

---

Whenever we request memory from the system, there is a possibility that the request will fail. All allocation functions return a pointer to the memory block **OR** `NULL` if the allocation is impossible.

While some modern operating systems (like Linux) have complex memory management policies, good engineering practice requires that you **always** verify if the return was successful before attempting to use the pointer.

#### 🛠️ The Verification Pattern:

The most straightforward method is to perform the allocation and then test the pointer:

```c
int *x;
x = malloc(sizeof(int) * 10); // Attempting to allocate an array of 10 ints

if (x == NULL) {
    printf("Critical Error: Failed to allocate memory for 10 integers.\n");
    // Here you must decide how the program should react (e.g., exit(1))
}
```

#### 🏎️ The "Pro" Pattern (Assignment and Condition):
In the C community, it is extremely common **to see the allocation and verification condensed into a single line within the if statement**. This makes the code more compact and ensures the verification is not forgotten:

```c
int *x;

// Assigns the return to x and checks if the result is NULL simultaneously
if ((x = malloc(sizeof(int) * 10)) == NULL) {
    fprintf(stderr, "Memory allocation error!\n");
    exit(1);
}
```

>💡 **Developer Insight:**
> In embedded devices with low RAM, allocation failures are common. If you ignore the `NULL` and try to do `*x = 10`, the program will attempt to write to memory address zero, resulting in an **instant crash**. Handling the error gracefully (displaying a message or closing files before exiting) is what makes the software robust.

</details>

---

<details>
<summary><b>📌 Allocating Space for an Array (Section 12.3)</b></summary> 
<br>

---

[Codes for Section 12.3 can be found here](./CODE_BY_DAY/DAY_012/(SECTION-12-3)-ALLOCATING-SPACE-FOR-AN-ARRAY)

---

We have already seen how to allocate space for a single element (e.g., `malloc(sizeof(int))`). Now let's **allocate memory for an entire array on the Heap**.

---

#### ©️ Array with `malloc`:

In C, an array is nothing more than a sequence of elements of the same type, stored one after another in a contiguous block of memory.
Since `malloc()` allows allocating **any number of bytes**, we can simply ask for:

- **Number of bytes** = `sizeof(type) * number_of_elements`

#### 🧠 Practical example: Array of 10 integers

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Allocate space for 10 integers (usually 40 bytes on x86_64 systems)
    int *p = malloc(sizeof(int) * 10);

    // Assign values: 0, 5, 10, ..., 45
    for (int i = 0; i < 10; i++)
        p[i] = i * 5;   // Using array notation

    // Print all
    for (int i = 0; i < 10; i++)
        printf("%d\n", p[i]);

    free(p);  // Free the allocated memory
}
```

- 🔍 **Note:** `sizeof(char)` is always **1**, so `malloc(3490)` allocates an array of **3490 characters** (a string), but without initialization.

---

#### ⚠️ Initial content is garbage:

Unlike global or static variables, the memory returned by `malloc()` is not initialized; it contains residual values from previous allocations.
To **zero out the memory**, you can use:

1. `memset(p, 0, size_in_bytes)`

2. Or use `calloc()`, which **returns zeroed memory** directly.

---

#### 📤 Portability tip: Multiply `sizeof *p`:
Just like for a single element, you can use the dereferenced pointer itself to avoid repeating the type:

```c
int *p = malloc(10 * sizeof *p);  // Same as malloc(10 * sizeof(int))
```

- This form is safer for maintenance: if you change `int *p` to `long *p`, the sizeof adjusts automatically.

> 💡 **Developer Insight:**
> Allocating arrays on the Heap is essential when the size is only known at runtime (e.g., the user types how many numbers they want to store). If you tried to create a variable-length array (VLA) on the Stack with a large size, you could **overflow the stack**. With `malloc`, you are limited only by available RAM.

- Practical tip: Always multiply `sizeof(type)` by the number of elements, it's easy to forget and allocate only 10 bytes instead of 10 integers!

</details>

---

<details>
<summary><b>🔘 Alternative: calloc() (Section 12.4)</b></summary>
<br>

---

[Codes for Section 12.4 can be found here](./CODE_BY_DAY/DAY_012/(SECTION-12-4)-ALTERNATIVE-CALLOC)

---

The `calloc()` function (Contiguous Allocation + zero) is an alternative to `malloc()`, especially useful for **arrays**. It differs in **two main aspects**:

1. It takes **two arguments**: number of elements and size of each element (instead of a single total number of bytes).

2. It **zeroes out the memory** automatically (unlike `malloc()`, which returns garbage).

- Deallocation is still done with `free()`.

---

#### ©️ Direct comparison: `calloc()` vs `malloc() + memset()`

```c
// calloc: allocates and zeroes 10 integers
int *p = calloc(10, sizeof(int));

// malloc + memset: same thing, but in two steps
int *q = malloc(10 * sizeof(int));
memset(q, 0, 10 * sizeof(int));
```

- The end result is identical. The difference is that `calloc()` already **delivers zeroed memory out of the box**.

---

#### 🧠 When to use each?

**Use `calloc()` when:**

- You are allocating an array (it naturally fits the two arguments).

- You need the initial values to be zero (e.g., counters, empty strings, structures with null pointers).

**Use `malloc()` (with or without memset) when:**

- You are going to fill the memory immediately, there's no point wasting time zeroing it out for no reason.

- You are allocating a single element (although calloc(1, sizeof(int)) also works, it's less idiomatic).

---

#### ⚠️ Caution:
Both return `NULL` on failure – always check.

The zeroed content from `calloc()` is guaranteed to have all bits zero, which in C means:

- 0 for integers

- 0.0 for floating point

- `NULL` for pointers (on practically all platforms)

> 💡 Developer Insight:
> Many people use `calloc()` for safety when the array will be used in contexts where zero is a valid initial value (e.g., sums, accumulators). But in high-performance loops, if you are going to overwrite all elements later, prefer `malloc()` without zeroing – this small saving can make a difference in large programs.

- Practical tip: If you need to zero part of the memory or a non-array type, stick with `memset()`. `calloc()` is great for arrays, but not for more flexible scenarios.

</details>

---

<details>
<summary><b>📏 Changing the Allocated Size (Section 12.5.0 - Section 12.5.2)</b></summary>
<br>

---

[Code for Sections 12.5.0 - 12.5.2 can be found here](./CODE_BY_DAY/DAY_012/(SECTION-12-5)-CHANGING-THE-ALLOCATED-SIZE)


---

<details>
<summary><b>📌 Resizing Allocation: realloc() (Section 12.5.0)</b></summary>
<br>

---

[Code for Section 12.5.0 can be found here](./CODE_BY_DAY/DAY_012/(SECTION-12-5)-CHANGING-THE-ALLOCATED-SIZE/(SECTION-12-5-0)-RESIZING-ALLOCATION-REALLOC)

---

The `realloc()` function (reallocation) allows you to increase or decrease a previously allocated memory block (by `malloc()` or `calloc()`). It decides whether it can expand in place or needs to copy the data to a new location.

#### ©️ Basic syntax:

```c
void *realloc(void *ptr, size_t new_size);
```

- `ptr`: pointer to previously allocated memory (can be `NULL`, in which case `realloc()` acts like `malloc()`).

- `new_size`: **new size in bytes**, not number of elements!

**Return value:**

- Pointer to the reallocated block (may be the same or different)

- `NULL` on failure (in this case, the original memory is not freed)

---

#### ⚠️ Common mistake: forgetting sizeof

```c
num_floats *= 2;
np = realloc(p, num_floats);                // WRONG: missing bytes
np = realloc(p, num_floats * sizeof(float)); // CORRECT
```

- Always multiply by the type size.

#### 🧠 Practical example: reallocating a 20‑float array to 40

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Allocate space for 20 floats
    float *p = malloc(sizeof *p * 20);

    // Fill 0.0 through 0.95
    for (int i = 0; i < 20; i++)
        p[i] = i / 20.0;

    // Resize to 40 elements
    float *new_p = realloc(p, sizeof *p * 40);

    if (new_p == NULL) {
        printf("Reallocation error\n");
        return 1;
    }

    p = new_p;  // Now p points to the reallocated block

    // Fill the new elements (indices 20..39)
    for (int i = 20; i < 40; i++)
        p[i] = 1.0 + (i - 20) / 20.0;

    // Print everything (0.0 to 2.0)
    for (int i = 0; i < 40; i++)
        printf("%f\n", p[i]);

    free(p);  // Free memory
}
```

#### 🔍 Why use a temporary pointer (`new_p`)?

If you do `p = realloc(p, new_size)` and `realloc()` fails (returns `NULL`), you lose the original pointer `p`, and you can no longer free or access the old memory.

- Best practice:

```c
void *tmp = realloc(p, new_size);
if (tmp == NULL) {
    // Handle error – p is still valid
} else {
    p = tmp;
}
```

#### 📤 Resizing to a smaller size

If `new_size` is smaller than the original, `realloc()` can simply truncate the block. The leftover is freed (but you don’t need to call `free()` separately).

- **Practical tip:** shrinking with `realloc()` is useful to adjust to the exact usage after discovering how many elements were actually needed.

---

#### ⚠️ Caution: `realloc()` does not clear the extra memory

- The new space (if the block grew) is not initialized – it contains garbage.

- If you need zeros, use `memset()` on the new region or prefer `calloc()` from the start.

> 💡 **Developer Insight:**
> `realloc()` is indispensable when you are reading data of unknown size (e.g., user input, file). Start with a small size, reallocate as more data arrives. But each `realloc()` may imply copying all data – for performance, double the size each time (e.g., 10 → 20 → 40) to reduce the number of reallocations.

**Practical tip:** Never do `realloc(p, 0)` – that is equivalent to `free(p)` and returns `NULL` or an invalid pointer. It is ambiguous and not portable. Use `free(p)` explicitly if you want to free.

</details>

---

<details> 
<summary><b>📖 Reading Lines of Arbitrary Size (Section 12.5.1)</b></summary>
<br>

---

[Code for Section 12.5.1 can be found here](./CODE_BY_DAY/DAY_012/(SECTION-12-5)-CHANGING-THE-ALLOCATED-SIZE/(SECTION-12-5-1)-READING-LINES-OF-ARBITRARY-SIZE)

---

#### The example in section 12.5.0 demonstrates **two practical uses** of `realloc()`:

1. **Growing a buffer dynamically** as more data is read.

2. **Shrinking the buffer** to the exact size after reading finishes, saving memory.

The code implements a `readline()` function that reads a file character by character (`fgetc()`) until it finds a newline (`'\n'`) or end-of-file (`EOF`).

---

#### ©️ Growth strategy: doubling the size

Instead of increasing the buffer by 1 each time (which would cause many reallocations and copies), the common strategy is to **double the size** each time the buffer becomes full. This minimizes the number of `realloc()` calls.

- Initial size: 4 bytes (can be any value, but a power of 2 is common)

- When `offset == bufsize - 1` (one byte reserved for `\0`), double it: `bufsize *= 2`

---

#### 🧠 Flow of the `readline()` function

```c
char *readline(FILE *fp)
```

1. **Allocate initial buffer** (`malloc(4)`)

2. **Read character by character** with `fgetc()`

3. **If buffer is full** (except space for `'\0'`):

- Double `bufsize`

- Attempt `realloc()`

- If it fails, free the old buffer and return `NULL`

4. **Store the character in the buffer**

5. **Upon finding** `'\n'` or `EOF`:

- If `EOF` and no character was read → free and return `NULL`

- **Shrink the buffer** to the exact size (`offset + 1`) with `realloc()` (optional, if it's already tight)

Add the null terminator ('\0')

Return the pointer (caller must free() it)

#### 🔍 Annotated code snippet:

```c
// Checks if it's about to overflow (reserving 1 byte for '\0')
if (offset == bufsize - 1) {
    bufsize *= 2;   // Double
    char *new_buf = realloc(buf, bufsize);
    if (new_buf == NULL) {
        free(buf);
        return NULL;
    }
    buf = new_buf;
}
buf[offset++] = c;
```

---

#### 📤 Shrinking after reading:

```c
// If the buffer has extra space, reduce to the exact size
if (offset < bufsize - 1) {
    char *new_buf = realloc(buf, offset + 1); // +1 for '\0'
    if (new_buf != NULL)
        buf = new_buf;  // If it fails, keep the original (not critical)
}
buf[offset] = '\0';
```

- **Why shrink?** To avoid wasting memory. If the line has 5 characters, the final buffer will be 6 bytes (5 + `'\0'`) instead of, say, 16 or 32.

- **Safety**: If `realloc()` fails when shrinking, keep the larger buffer – the function still works correctly.

#### ⚠️ Responsibility of the `readline()` caller
The returned pointer came from `malloc()` / `realloc()`.
**The caller** of `readline()` must call `free()` after using the line.

```c
char *line;
while ((line = readline(fp)) != NULL) {
    printf("%s\n", line);
    free(line);   // ← mandatory
}
```

> 💡 **Developer Insight:**
> This `readline()` function is a classic example of how `realloc()` is used in real software (text editors, compilers, log processing). Doubling the size on each overflow is an exponential time optimization: the total number of copies is O(n) instead of O(n²) if it grew by 1 each time.
> The final shrink with `realloc()` is optional, but useful in programs that keep many lines in memory (e.g., loading an entire file). Every saved byte can make a difference.

- **Practical tip:** If you know most lines are short, start with a small initial size (e.g., 16 or 32). If they are very long, start larger to avoid reallocations early on.

</details>

---

<details>
<summary><b>📥 realloc() with NULL (Section 12.5.2)</b></summary>
<br>

---

[Code for Section 12.5.2 can be found here](./CODE_BY_DAY/DAY_012/(SECTION-12-5)-CHANGING-THE-ALLOCATED-SIZE/(SECTION-12-5-2)-REALLOC-WITH-NULL)

---

#### These two lines are equivalent:

```c
char *p = malloc(3490);
char *p = realloc(NULL, 3490);
```

- This can be useful when you have an **allocation loop** and don’t want to treat the first `malloc()` as a special case.

---

#### ©️ Example - incremental allocation without an initial malloc():

```c
int *p = NULL;
int length = 0;

while (!done) {
    // Allocate 10 more integers:
    length += 10;
    p = realloc(p, sizeof *p * length);

    // Do amazing things
    // ...
}
```

- In this example, we don't need an initial `malloc()` because `p` starts as `NULL`.

> 💡 **Developer Insight:**
> `realloc(NULL, size)` works exactly like `malloc(size)`. This simplifies loops where you don’t know in advance whether memory has already been allocated. It saves a conditional and makes the code cleaner.

- **Practical tip:** be careful when assigning the return of `realloc()` directly to the original pointer without checking for `NULL`; you can lose the old pointer if the reallocation fails. The advantage of `realloc(NULL, ...)` is that if it fails, it returns `NULL` and there is no previous memory to leak (since it was `NULL`).

</details>

</details>

---

<details>
<summary><b>🧵 Aligned Allocations (Section 12.6)</b></summary>
<br>

---

[Code for Section 12.6 can be found here](./CODE_BY_DAY/DAY_012/(SECTION-12-6)-ALIGNED-ALLOCATIONS)

---

There is a concept called **memory alignment**, which has to do with the **memory address** (pointer value) being a multiple of a certain number.

- For example, a system might require that 16-bit values start at addresses that are multiples of 2. Or that 64-bit values start at addresses that are multiples of 2, 4, or 8. It depends on the CPU.
- Some systems require this type of alignment for fast memory access, or even for access to work at all.

#### ©️ Alignment guaranteed by malloc() / calloc() / realloc()
If you use `malloc()`, `calloc()`, or `realloc()`, C will return a memory block that is properly aligned for any data type (even `structs`). **It works in all cases**.

---

#### 🧠 When would you need `aligned_alloc()`?
There may be times when you know that some data can be aligned to a smaller boundary, or needs to be aligned to a larger boundary for some reason. This is more common in programming for **embedded systems**.

In these cases, you can specify an alignment with `aligned_alloc()`.

- The alignment must be a power of two greater than zero: 2, 4, 8, 16, etc.

- The number of bytes allocated must be a multiple of the alignment (though this may change).

#### 📤 Example: allocating on a 64-byte boundary

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    // Allocates 256 bytes aligned on a 64-byte boundary (256 == 64 * 4)
    char *p = aligned_alloc(64, 256);

    strcpy(p, "Hello, world!");
    printf("%s\n", p);

    free(p);
}
```

---

#### ⚠️ `realloc()` and `aligned_alloc()`
`realloc()` **has no alignment guarantees**. If you need to reallocate aligned memory, you'll have to do it the "hard way" with `memcpy()`.

Below is a non-standard `aligned_realloc()` function, in case you need it:

```c
void *aligned_realloc(void *ptr, size_t old_size, size_t alignment, size_t size)
{
    char *new_ptr = aligned_alloc(alignment, size);

    if (new_ptr == NULL)
        return NULL;

    size_t copy_size = old_size < size ? old_size : size;  // take the smaller one

    if (ptr != NULL)
        memcpy(new_ptr, ptr, copy_size);

    free(ptr);

    return new_ptr;
}
```

> 💡 **Developer Insight:**
> This `aligned_realloc()` always copies the data, which takes time, whereas the real `realloc()` avoids copying when possible. Therefore, it is **inefficient**. Avoid needing to reallocate data with custom alignment.

- **Practical tip:** If you need specific alignment, allocate the final size all at once, rather than reallocating later.

</details>

</details>

---

<details>
  <summary><b>🔹 Day 13: Scope</b></summary>

---

[Day 13 code can be found here](./CODE_BY_DAY/DAY_013)

---

<details>
 <summary><b>🌐 Introduction - Scope (Section 13.0)</b></summary>
<br>

---

[Code for Section 13.0 can be found here](./CODE_BY_DAY/DAY_013/(SECTION-13-0)-INTRODUCTION-SCOPE)

---

In C, scope is primarily delimited by code blocks, functions, and files:

* **Block Scope (Local):** Variables that are born and die within curly braces `{}`.
* **File Scope (Global):** Variables declared outside any function, visible throughout the entire file (and potentially across other files in the project).
* **Function Scope:** Specific rules for function parameters.

> 💡 **Study Insight:**
> Strictly controlling scope is one of the best security practices in C. The smaller and more restricted the scope of a variable, the fewer failure points the code will have, making debugging easier and preventing accidental use of incorrect data.

</details>

---

<details>
<summary><b>📦 Block Scope (Section 13.1.0 - 13.1.2)</b></summary>

---

[Code for Sections 13.1.0 - 13.1.2 can be found here](./CODE_BY_DAY/DAY_013/(SECTION-13-1)-BLOCK-SCOPE)

---

<details>
<summary><b> 🧱 Block Scope (Section 13.1.0)</b></summary>
<br>

---

[Code for Section 13.1.0 can be found here](./CODE_BY_DAY/DAY_013/(SECTION-13-1)-BLOCK-SCOPE/(SECTION-13-1-0)-BLOCKS-SCOPE)

---

This is the scope where the vast majority of variables you declare reside. It encompasses what other languages often call "function scope", i.e., local variables declared inside a function.

#### 📜 The Basic Rule:

If you declared a variable inside a block delimited by curly braces `{ }`, the scope of that variable is strictly restricted to that block.

* **Nested Blocks:** If there is a block inside another block, variables declared in the inner block are local only to that block. The outer block cannot "see" what is inside.
* **End of the Line:** As soon as program execution leaves the block, the variable's scope ends. You can consider its value as having gone to the "bit limbo". Trying to access it will cause a compilation error.

---

#### 🧪 Practical Experiment with Nested Scopes:

See how the compiler behaves when dealing with variables at different isolation levels:

```c
#include <stdio.h>

int main(void) {
    int a = 12; // Local to the outer block, but visible in the inner block

    if (a == 12) {
        int b = 99; // Local ONLY to the inner block, invisible to the outer
        
        printf("%d %d\n", a, b); // OK: Prints "12 99"
    }

    printf("%d\n", a); // OK: We are still within the scope of 'a'
    
    // printf("%d\n", b); // ILLEGAL: Compilation error! 'b' is already dead.
}
```

> 💡 **Study Insight:**
> Block scope is directly linked to the `Stack` concept we saw in memory allocation. When the program enters the `if`, it reserves space for `b` on **top of the stack**. As soon as the `if` closes, that space is automatically "popped". Understanding this clears up any confusion: scope in syntax is merely a reflection of physical memory behavior.

</details>

---

<details>
 <summary><b>📍 Where to Define Variables (Section 13.1.1)</b></summary>
<br>

---

[Code for Section 13.1.1 can be found here](./CODE_BY_DAY/DAY_013/(SECTION-13-1)-BLOCK-SCOPE/(SECTION-13-1-1)-WHERE-TO-DEFINE-VARIABLES)

---

Another interesting fact about block scope is that you can define variables **anywhere** inside it. They will inherit the scope of that block, but with a mandatory condition: they cannot be used *before* their definition line.

#### 🛠️ Practical Example:

```c
#include <stdio.h>

int main(void) {
    int i = 0;
    printf("%d\n", i);     // OK: Prints "0"

    // printf("%d\n", j);  // ILLEGAL: Cannot use 'j' before defining it!

    int j = 5;
    printf("%d %d\n", i, j);   // OK: Prints "0 5"
}
```

#### ⏳ Historical Context: Old C vs. C99:
If you come across legacy C code or read books based on the original ANSI C standard, you will notice that all variables were mandatory declared at the **top of the block** (right after the opening brace `{`).

Starting with the **C99** standard, this restriction was lifted. Now you can declare variables on demand, exactly at the moment and place where they will be used for the first time, which brings C's readability closer to more modern languages.

> 💡 **Study Insight:**
> This flexibility introduced by C99 drastically improves code maintainability. Declaring variables "on demand" prevents the top of a function from becoming polluted with variables that will only be used dozens of lines below.

</details>

---

<details>
 <summary><b>🙈 Variable Shadowing (Section 13.1.2)</b></summary>

---

[Code for Section 13.1.2 can be found here](./CODE_BY_DAY/DAY_013/(SECTION-13-1)-BLOCK-SCOPE/(SECTION-13-1-2)-VARIABLE-SHADOWING)

---

If you declare a variable with the same name as a variable from an outer scope, the **inner scope variable takes precedence** while the program is executing inside that block. In other words, the inner variable "hides" (or shadows) the outer variable for its entire lifetime.

This concept is also widely known in programming as *Variable Shadowing*.

#### 🧪 Practical Example:

```c
#include <stdio.h>

int main(void) {
    int i = 10; // Outer scope 'i'

    {
        // An isolated block starts here
        int i = 20; // Inner scope 'i' (shadows the outer 'i')
        
        printf("%d\n", i);  // Prints the inner 'i': 20
    } // The inner 'i' is destroyed here

    printf("%d\n", i);  // Prints the outer 'i': 10 (it becomes visible again)
}
```

#### 🧱 Independent Blocks:
You may have noticed that in the example above, a block of curly braces `{}` was opened directly in the code, not attached to an `if`, `for`, `while`, or function signature.

This is **perfectly legal in C**. Although it is rare to see in everyday code, some developers use independent blocks to temporarily group local variables needed for a quick, isolated calculation. This ensures that the memory for those variables is released from the stack immediately after the closing brace, optimizing resource usage.

> 💡 **Study Insight:**
> Variable shadowing is a logical compiler behavior, but it requires extreme care in practice. Hiding an outer variable with the same name can cause confusion when reading the code and mask hard-to-track bugs (such as modifying the wrong variable thinking it was the other one).

</details>

</details>

---

<details>
 <summary><b>🌍 File Scope - Global Variables (13.2)</b></summary>
<br>

---

[Code for Section 13.2 can be found here](./CODE_BY_DAY/DAY_013/(SECTION-13-2)-FILE-SCOPE)

---

If you define a variable outside any block or function, it gets **file scope**. This means it becomes visible and shared by all functions in that file that come *after* its declaration.

This is the direct equivalent to what most programming languages call **global variables**.

#### 🛠️ Sharing Example

```c
#include <stdio.h>

int shared = 10;    // File scope! Visible to everything below this line.

void func1(void) {
    shared += 100;  // Modifies the global variable (now shared = 110)
}

void func2(void) {
    printf("%d\n", shared);  // Accesses the same variable and prints "110"
}

int main(void) {
    func1();
    func2();
}
```

#### ⚠️ The Top-Down Reading Rule:
The C compiler processes your code strictly from top to bottom. If the variable `shared` were declared at the end of the file (after `main`, `func1`, or `func2`), the **code would not compile**. The declaration must always exist in the code before its first use.

- Note: If there is a local variable named `shared` inside one of the functions, the "Variable Shadowing" rule from the previous topic comes into play, and the local one will temporarily hide the global.

> 💡 **Study Insight:**
> In structured programming, excessive use of global variables is considered a bad practice because it makes bug tracking and data flow very difficult to control (any function can change the system state without warning). However, exploring low-level environments and embedded systems (such as ARM-based firmwares), I've noticed that sometimes they are necessary.

</details>

---

<details>
 <summary><b>🔁 Scope of for Loops (Section 13.3)</b></summary>

---

[Code for Section 13.3 can be found here](./CODE_BY_DAY/DAY_013/(SECTION-13-3)-SCOPE-OF-FOR-LOOPS)

---

The C11 specification does not give an official specific name to this scope, but it refers to a very common situation we have already used a lot: when we declare a variable directly inside the first clause (the initialization) of a `for` loop.

#### 📜 The Loop Visibility Rule:

The variable declared in the `for` initialization is born at the exact moment the loop starts and its lifetime lasts strictly until the loop ends. It does not exist before and ceases to exist immediately after.

```c
for (int i = 0; i < 10; i++) {
    printf("%d\n", i); // OK: 'i' is within the loop's scope
}

// printf("%d\n", i);  // ILLEGAL: 'i' is out of scope and no longer exists!
```

If the loop body is delimited by a block of curly braces `{ }`, variables defined in the `for` initialization remain visible and accessible inside that inner scope... unless the shadowing rule comes into play.

---

#### 🙈 Extreme Shadowing Inside the Loop Body
Following the **Variable Shadowing** logic we studied in the previous section, it is technically possible to declare another variable with the same name inside the loop's inner block. This example, as confusing as it may seem, is perfectly legal and prints 999 five times:

```c
#include <stdio.h>

int main(void) {
    for (int i = 0; i < 5; i++) {
        int i = 999;  // Completely shadows the 'i' that controls the loop!
        printf("%d\n", i); // Prints 999
    }
}
```

Even if the inner `i` is modified or fixed to `999`, the `i` from the loop initialization continues to control the increment (`i++`) and the condition test (`i < 5`) in the background, ensuring the loop runs exactly 5 times.


>💡 **Study Insight:**
> Being able to declare variables like `int i = 0` inside the `for` loop itself was one of the great evolutions of modern C (C99 standard onwards). In the past, we were forced to declare `int i` at the top of the function, leaving the variable alive even after the loop finished. Limiting the scope of the index to the loop is an excellent clean code practice: if the variable is only used to count the iterations of that loop, it should die along with it, keeping the stack clean and free of side effects.

</details>

---

<details>
 <summary><b>🏷️ A Note on Function Scope (Section 13.4)</b></summary>

The C specification formally mentions **Function Scope**, but it is used *exclusively* for **labels** (branch targets), a feature we have not yet discussed in the guide.

Contrary to what the name might suggest to those coming from other modern languages, normal variables declared inside a function belong to *Block Scope* (seen in section 13.1) and not to function scope.

More details about *labels* and how they work will be left for another chapter!

---

> 💡 Study Insight:
> To give a little preview: in C, *labels* are identifiers used together with the `goto` statement to jump from one line of code to another. The specification defines that a label is visible **anywhere** inside that specific function, completely ignoring the barriers of curly braces `{}` (inner blocks). That is why it has function scope. Since the use of `goto` is strongly discouraged in modern programming for generating so-called "spaghetti code", this scope ends up being a technical curiosity that we rarely need to manipulate in everyday practice.

</details>


</details>

---

<details>
  <summary><b>🔹 Day 14: Types Part II: Many More Types!</b></summary>

---

[Day 14 code can be found here](./CODE_BY_DAY/DAY_014)

---

<details>
 <summary><b>🗂️ Introduction - Types Part II (Section 14.0)</b></summary>
<br>

---

[Section 14.0 code can be found here](./CODE_BY_DAY/DAY_014/(SECTION-14-0)-INTRODUCTION-TYPES-PART-II)

---

So far, we have worked extensively with C's fundamental data types, such as `char`, `int`, and `float`. They cover most everyday needs, but C offers a much broader arsenal in its type system to handle specific scenarios of optimization, precision, and memory organization.

In this chapter, we will take the next step to explore size modifiers, sign management (`signed`/`unsigned`), custom types, and other tools that elevate the programmer's control over the hardware.

> 💡 **Study Insight:**
> Understanding C's type system in depth is the key to writing high-performance code. In embedded systems, drivers, or network buffer manipulation, every bit counts. Knowing exactly when to use a specific size type or control whether it accepts negative values avoids memory waste and ensures that data is processed exactly as the processor architecture expects.

</details>

---

<details>
 <summary><b>🔢 Signed and Unsigned Integers (Section 14.1)</b></summary>
<br>

---

[Section 14.1 code can be found here](./CODE_BY_DAY/DAY_014/(SECTION-14-1)-SIGNED-AND-UNSIGNED-INTEGERS)

---

So far, we have used `int` as a *signed* type, which means it can store both negative and positive values. But C also has *unsigned* integer types, which are specifically designed to store only positive numbers (and zero).

These types are defined using the `unsigned` keyword before the type:

```c
int a;           // signed
signed int a;    // signed (explicitly)
signed a;        // signed (a rare short form for "int")

unsigned int b;  // unsigned
unsigned c;      // unsigned (standard short form for "unsigned int")
```

#### ❓ Why give up negative numbers?
- Why would you voluntarily decide that a variable should only accept positive numbers?
  The answer is simple: you gain the ability to **store much larger positive numbers in an `unsigned` variable** than in a `signed` one.

---

#### 🧠 How does this work under the hood?
Integers are internally represented by a **fixed number of bits**.
Each permutation of bits (zeros and ones) represents a unique number. The compiler needs to decide how to divide these available combinations:

- **Signed:** We use half of the bit combinations to represent **negative numbers and the other half for positive numbers**. The most significant bit (the leftmost) is usually reserved to indicate whether the number is positive (0) or negative (1) using the **Two's Complement** system.

- **Unsigned:** We completely ignore negative numbers. All possible bit combinations are used to **represent positive numbers**.

---

#### 📊 Limit Comparison (Example on 64-bit)

When using the **Two's Complement** representation system, signed types reserve one bit to indicate whether the number is positive or negative. Unsigned types, on the other hand, use all bits to represent positive values.

| Type | Minimum Value | Maximum Value |
|--------|----------------------------|-----------------------------|
| `int` | -9,223,372,036,854,775,808 | 9,223,372,036,854,775,807 |
| `unsigned int` | 0 | 18,446,744,073,709,551,615 |

- Notice that the maximum positive value of `unsigned int` is practically **double the positive limit** of a regular `int`.

</details>

---

<details>
<summary><b>🔤 Character Types (Section 14.2)</b></summary>
<br>

---

[Section 14.2 code can be found here](./CODE_BY_DAY/DAY_014/(SECTION-14-2)-CHARACTER-TYPES)

---

You are probably already used to using `char` to store a single character:

```c
char c = 'B';
printf("%c\n", c);  // Prints "B"
```

But here is the big secret: under the hood, it is strictly an integer. If we change the format specifier from `%c` to `%d`, C reveals the truth:

```c
char c = 'B';
printf("%d\n", c);  // Prints 66 (!!)
```

- `char` is just a very small integer that occupies exactly **1 byte** of memory space (`sizeof(char) == 1`).

---

#### 💾 What is a "Byte" in C?
The C specification guarantees that a `char` is 1 byte, but C11 (§3.6¶3) leaves a curious note: "A byte is composed of a contiguous sequence of bits, the number of which is implementation-defined." Although today a byte being equal to 8 bits is a universal truth, C kept this definition open because, in the past, some machines had exotic architectures where a byte could have 9, 12 or more bits. However, on practically any modern hardware you will program on, **1 byte = 8 bits**.

---

#### 🌗 The Sign Dilemma: Signed vs Unsigned char
Before we define the numeric limits of a `char`, there is an important detail: the language standard does not define whether a plain `char` is signed or unsigned. This is left up to the compiler. If your code strictly depends on mathematical signs, you should specify:

```c
char a;           // May be signed or unsigned (depends on the compiler)
signed char b;    // Guaranteed to be signed
unsigned char c;  // Guaranteed to be unsigned
```

Assuming the standard 8‑bit architecture and Two's Complement representation, these are the actual limits:

| Type          | Minimum Value | Maximum Value |
|---------------|--------------:|--------------:|
| signed char   | -128          | 127           |
| unsigned char | 0             | 255           |


---

#### 🧮 Doing Math with Letters:
Since a `char` is just a number, you can perform arithmetic operations on it normally (as long as the result stays within the type's limits):

```c
#include <stdio.h>

int main(void) {
    char a = 10, b = 20;
    printf("%d\n", a + b);  // Prints 30!
}
```

- And how do character literals inside single quotes (like `'B'`) get a numeric value?
  **Answer:** The compiler automatically converts the letter to its respective value mapped in the executable system's character table.

Since almost all modern systems use **ASCII** (or **Unicode**, which includes it), basic letters, digits 0‑9, and punctuation will always return their standardized ASCII values.

```c
#include <stdio.h>

int main(void) {
char a = 10;
char b = 'B';  // The numeric value of 'B' in ASCII is 66

    printf("%d\n", a + b);  // Prints 76! (10 + 66)
}
```

> 💡 **Study Insight:**
> This understanding is crucial for those working close to the hardware. In C, when we want to manipulate raw binary data coming from a file, a network packet, or a Bluetooth driver, we almost never use generic pointers to numbers; we use `unsigned char` pointers (or `uint8_t`).

</details>

---

<details>
<summary><b> 📏 More Integer Types: short, long, long long (Section 14.3)</b></summary>
<br>

---

[Section 14.3 code can be found here](./CODE_BY_DAY/DAY_014/(SECTION-14-3)-MORE-INTEGER-TYPES)

---

So far, we have focused on `char` and `int`, along with their `unsigned` variations. We have also seen that `char` is just a smaller integer. However, C offers a wider range of integer types, divided by their bit storage capacities.

The additional types are `short int`, `long int`, and `long long int`. In practice, C developers often omit the `int` keyword when declaring them, and the compiler accepts it perfectly:

```c
// These two lines are identical:
long long int x;
long long x;

// And so are these:
short int y;
short y;
```

- To ensure your code's portability, **never try to guess or hardcode the maximum limits of these types**. The `<limits.h>` library defines macros with the exact limits of the architecture you are compiling for.

---

#### 📋 1. Minimum Limits Guaranteed by the Specification
The table below shows the minimum size in bytes and value ranges that the C specification portably guarantees on **any system**. Your machine likely has larger limits, but these are the universal minimums:

| Type                 | Minimum Bytes | Minimum Value                | Maximum Value                |
|----------------------|---------------|-----------------------------|-----------------------------|
| `char`               | 1             | -128 or 0                   | 127 or 255                  |
| `signed char`        | 1             | -128                        | 127                         |
| `short`              | 2             | -32,768                     | 32,767                      |
| `int`                | 2             | -32,768                     | 32,767                      |
| `long`               | 4             | -2,147,483,648              | 2,147,483,647               |
| `long long`          | 8             | -9,223,372,036,854,775,808  | 9,223,372,036,854,775,807   |
| `unsigned char`      | 1             | 0                           | 255                         |
| `unsigned short`     | 2             | 0                           | 65,535                      |
| `unsigned int`       | 2             | 0                           | 65,535                      |
| `unsigned long`      | 4             | 0                           | 4,294,967,295               |
| `unsigned long long` | 8             | 0                           | 18,446,744,073,709,551,615  |

> **Note:** These are the minimum limits guaranteed by the C language specification. On modern (64‑bit) architectures, the actual sizes of some types may be larger.

---

#### 💻 2. Reality on a Modern System (64‑bit, Two's Complement)

Modern operating systems and processors often considerably expand the minimum limits required by the C language specification. The table below presents the sizes and value ranges found on modern 64‑bit architectures.

| Type                 | Actual Bytes | Minimum Value                | Maximum Value                |
|----------------------|-------------|-----------------------------|-----------------------------|
| `char`               | 1           | -128                        | 127                         |
| `signed char`        | 1           | -128                        | 127                         |
| `short`              | 2           | -32,768                     | 32,767                      |
| `int`                | 4           | -2,147,483,648              | 2,147,483,647               |
| `long`               | 8           | -9,223,372,036,854,775,808  | 9,223,372,036,854,775,807   |
| `long long`          | 8           | -9,223,372,036,854,775,808  | 9,223,372,036,854,775,807   |
| `unsigned char`      | 1           | 0                           | 255                         |
| `unsigned short`     | 2           | 0                           | 65,535                      |
| `unsigned int`       | 4           | 0                           | 4,294,967,295               |
| `unsigned long`      | 8           | 0                           | 18,446,744,073,709,551,615  |
| `unsigned long long` | 8           | 0                           | 18,446,744,073,709,551,615  |

> **Note:** The values above are common on modern 64‑bit systems based on the LP64 model (such as most Linux distributions and macOS). On 64‑bit Windows systems (LLP64 model), the `long` type typically has 4 bytes instead of 8.

---

#### 3. 🛡️ Macro Mappings in `<limits.h>`

To write truly portable code, use the constants defined by the standard `<limits.h>` library. These macros allow you to query integer type limits without depending on the architecture or compiler used.

| Type                 | Minimum Macro | Maximum Macro |
|----------------------|---------------|----------------|
| `char`               | `CHAR_MIN`    | `CHAR_MAX`     |
| `signed char`        | `SCHAR_MIN`   | `SCHAR_MAX`    |
| `short`              | `SHRT_MIN`    | `SHRT_MAX`     |
| `int`                | `INT_MIN`     | `INT_MAX`      |
| `long`               | `LONG_MIN`    | `LONG_MAX`     |
| `long long`          | `LLONG_MIN`   | `LLONG_MAX`    |
| `unsigned char`      | `0`           | `UCHAR_MAX`    |
| `unsigned short`     | `0`           | `USHRT_MAX`    |
| `unsigned int`       | `0`           | `UINT_MAX`     |
| `unsigned long`      | `0`           | `ULONG_MAX`    |
| `unsigned long long` | `0`           | `ULLONG_MAX`   |

- **Compiler trick:** Because `unsigned` variants are never negative, they don't need minimum macros (they are always `0`).

- **Discovering char behavior:** If you need to programmatically find out whether your compiler treats plain `char` as `signed` or `unsigned`, just test: `if (CHAR_MAX == UCHAR_MAX)`. If true, it is treated as unsigned.

> 💡 **Study Insight:**
> Looking at these tables makes it clear why assuming fixed sizes for types causes serious failures when porting software between different hardware. An `int` might be **4 bytes** on your main computer, but drop to **2 bytes** if you compile the same code for a microcontroller or simpler embedded processor.
> Making good use of `<limits.h>` and appropriate typing (such as choosing `short` when you know the number will never exceed 30,000) saves precious stack and heap space, ensuring stability and performance whether running on a robust server or a tiny embedded device.

</details>

---

<details>
<summary><b>🛟 More Float (Section 14.4.0 - 14.4.2)</b></summary>

---

[Code for Sections 14.4.0 - 14.4.2 can be found here](./CODE_BY_DAY/DAY_014/(SECTION-14-4)-MORE-FLOAT)

---

<details>
<summary><b> 浮 More Floats: double and long double (Section 14.4.0)</b></summary>
<br>

---

[Section 14.4.0 code can be found here](./CODE_BY_DAY/DAY_014/(SECTION-14-4)-MORE-FLOAT/(SECTION-14-4-0)-MORE-FLOATS-DOUBLE-AND-LONG-DOUBLE)

---

If we look coldly at what the official C specification (§5.2.4.2.2¶1-2) says about floating-point numbers, we find this mathematical model to define any real number ($x$):

$$x = s \cdot b^e \sum_{k=1}^{p} f_k \cdot b^{-k}, \quad e_{min} \le e \le e_{max}$$

| Parameter | Definition |
| :--- | :--- |
| $s$ | Sign ($\pm 1$) |
| $b$ | Base or *radix* of the exponent representation (an integer $> 1$) |
| $e$ | Exponent (an integer between $e_{min}$ and $e_{max}$) |
| $p$ | Precision (the number of digits in base $b$ in the significand) |
| $f_k$ | Non‑negative integers less than $b$ (the digits of the significand) |

Alright, the formal theory is delivered. **Now let's step back and see how this works in practice.**

---

### 🧠 The Anatomy of a Float (IEEE-754 Standard)

In the vast majority of modern architectures, floating-point numbers are encoded using a specific sequence of bits called the **IEEE-754 standard**.

Under the hood, the number is essentially broken into two main parts:
1.  **Significand (or Mantissa):** This is the raw numeric part, the significant digits themselves.
2.  **Exponent:** This is the power by which the digits will be multiplied. A negative exponent moves the decimal point to the left (making the number smaller), and a positive one moves it to the right.

To understand it simply in base 10 (decimal), imagine fixing the significand to `12345` and just varying the exponent:

* $12345 \times 10^{-3} = 12.345$
* $12345 \times 10^{4} = 123450000$
* $12345 \times 10^{0} = 12345$

> 💻 **On the Computer:** Since computers operate in binary, the exponent base ($b$) on your machine will almost certainly be **2**, not 10. You can check this by inspecting the value of the `FLT_RADIX` macro defined in the `<float.h>` header.

---

### 🛡️ The Precision Limit and the Larger Types

Because we have a finite number of bits in memory, there is a limited number of available bit combinations. This means that **not every real number can be represented with perfect precision**. Only a specific number of significant decimal digits will be stored exactly.

If you need more precision to avoid rounding errors, the solution is to expand the size of the data type. C offers three main options:

| Type | Common Size (`sizeof`) | Purpose |
| :--- | :---: | :--- |
| `float` | 4 bytes | Single precision. |
| `double` | 8 bytes | Double precision (the most recommended default for real calculations). |
| `long double` | 16 bytes* | Extended precision (unrelated to `long int`, except in name). |

- Note: The size of `long double` strictly depends on the system. On a 64‑bit machine, it typically occupies 16 bytes to deliver the maximum precision the hardware can extract.

To help us discover the exact limits and how many digits of precision each type can reliably maintain before it starts “guessing” values, C provides a series of macros in the `<float.h>` header.

---

#### 💡 Study Insight:
In computer graphics, physics simulations, and even frame‑rate (FPS) or network latency calculations for streaming solutions, the choice between `float` and `double` is a tug‑of‑war between performance and precision.
Your computer’s GPU or its registers process multiple 4‑byte `float`s at once (via SIMD instructions) much faster than they would with `double`. That is why, in the game and real‑time streaming industry, `float` is used for almost everything, leaving `double` (or `long double`) strictly for scenarios where accumulated rounding errors would be fatal, such as astronomical calculations, cryptography, or financial systems.

</details>

---

<details>
 <summary><b>🔢 How Many Decimal Digits Can We Store? (Section 14.4.1)</b></summary>
<br>

---

[Section 14.4.1 code can be found here](./CODE_BY_DAY/DAY_014/(SECTION-14-4)-MORE-FLOAT/(SECTION-14-4-0)-MORE-FLOATS-DOUBLE-AND-LONG-DOUBLE/(SECTION-14-4-1)-HOW-MANY-DECIMAL-DIGITS-CAN-WE-STORE)

---

The million-dollar question is: *"How many significant decimal digits can I store in a given floating-point type to guarantee that when I print it back, I get exactly the same number?"*

The safe and portable answer is not guessed: it is provided by specific macros from the `<float.h>` header. They dictate the number of decimal digits you can store with the absolute certainty that there will be no loss of precision:

| Type | Digit Macro | Minimum Guaranteed by the Specification |
| :--- | :--- | :---: |
| `float` | `FLT_DIG` | 6 digits |
| `double` | `DBL_DIG` | 10 digits (commonly 15-17 in practice) |
| `long double` | `LDBL_DIG` | 10 digits (commonly 18+ in practice) |

`FLT_DIG` equals **6**. This means that if you store and print a number with up to 6 significant digits in a `float`, the result will be 100% faithful.

Can it work with more? Yes, some numbers get lucky. But the guarantee dies at the sixth digit. Here is a test pattern progressively increasing the digits in a `float`:

```text
0.12345       - Ok
0.123456      - Ok
0.1234567     - Ok
0.12345678    - Oops, something went wrong down here!
0.123456791   <-- Precision broke and the computer started guessing values
0.1234567910
```

---

#### 🧪 Practical Demonstration: The Accumulated Error
In the code below, we define two floats with numbers that each have 6 significant digits (within the safe limit of `FLT_DIG`). In isolation, they are stored perfectly. However, when we add them, the result would be a number with 12 significant digits.

Since this exceeds the float's limit, see what happens when we print:

```c
#include <stdio.h>
#include <float.h>

int main(void) {
    // Both numbers have 6 significant digits, so they fit perfectly in float:
    float f = 3.14159f;
    float g = 0.00000265358f;

    printf("%.5f\n", f);   // 3.14159       -- Correct!
    printf("%.11f\n", g);  // 0.00000265358 -- Correct!

    // Now, we add them
    f += g;                // The actual value of 'f' should be 3.14159265358
    
    printf("%.11f\n", f);  // 3.14159274101 -- WRONG! The computer started inventing from the 7th digit onward.
}
```

⚠️ **Syntax Note:** Did you notice the `f` character glued at the end of the numeric constants (like 3.14159f)? In C, any number with a decimal point is treated as a double by default. Adding the `f` suffix explicitly tells the compiler: "Hey, treat this as a plain 4-byte float".

**The golden rule is simple:** if you keep your data within the FLT_DIG limit, you are safe. Sometimes you might get an extra digit or two as a bonus, but don't rely on luck in production code.

And that's the story of `FLT_DIG`. The end.

...Or is it not?

>💡 Study Insight:
> This precision loss phenomenon is the terror of physics simulation systems and game engines. If you calculate a character's position on a huge map using only float, as they move away from the zero point (origin), the number before the decimal point grows (e.g., 100000.0). Since the total significant digits are fixed at around 6 or 7, you start losing precision in the decimal places (after the dot). In practice, this causes a classic bug where the character or camera starts shaking (jittering) bizarrely on very large maps. That's why massive map coordinates often migrate to double (DBL_DIG), resetting the error accumulation.

</details>

---

<details>
 <summary><b>🔄 14.4.2 Converting to Decimal and Back (Section 14.4.2)</b></summary>

---

[Section 14.4.1 code can be found here](./CODE_BY_DAY/DAY_014/(SECTION-14-4)-MORE-FLOAT/(SECTION-14-4-2)-CONVERTING-TO-DECIMAL-AND-BACK)

---

Storing a base‑10 number inside a floating‑point variable and retrieving it on screen is only half the story.

The truth is that floating‑point numbers can internally encode values that would require *many more* decimal digits to be printed completely. The problem is that your "perfect" decimal number may simply not align with any of those mappable values.

#### 🕳️ The Concept of Gaps

As we move from one floating‑point number to the next immediately larger one in memory, **there is an empty space (a gap)** between them. If you try to encode a decimal number that falls exactly inside that gap, the compiler will round it to the nearest floating‑point number. It is because of this approximation that we can only trust `FLT_DIG` digits for general data input.

But what if we want to go the other way? If we take a native floating‑point value and want to convert it to text (base 10) without losing a single bit of the original value, how many digits do we need?

To guarantee that all the original base‑2 bits are preserved in base 10 (allowing you to read the text back and recover the identical binary value), we need safety‑limit macros with larger values:

| Macro | Description |
| :--- | :--- |
| `FLT_DECIMAL_DIG` | Number of decimal digits needed to preserve a `float`. |
| `DBL_DECIMAL_DIG` | Number of decimal digits needed to preserve a `double`. |
| `LDBL_DECIMAL_DIG` | Number of decimal digits needed to preserve a `long double`. |
| `DECIMAL_DIG` | Same as the widest encoding available (usually `LDBL_DECIMAL_DIG`). |

---

### 🧪 The Mystery of the 17 Digits (Practical Example)

Imagine a system where `DBL_DIG` is **15** (the safe limit for reading decimal constants), but `DBL_DECIMAL_DIG` is **17** (the digits needed not to lose a `double`'s bits).

If we try to add a very small number to another, exceeding the 15‑digit limit, see the bizarre behavior that happens:

```text
x = 0.123456789012345   (15 exact digits - printed with 17 places becomes: 0.12345678901234500)
y = 0.0000000000000006  (1 exact digit - printed with 17 places becomes: 0.00000000000000060)
```

- The theoretical mathematical sum should be `0.1234567890123456`. But because it goes beyond the traditional precision limit (`DBL_DIG`), the result printed with 17 places will be:

```text
x + y = 0.12345678901234559  <-- Ended in 59 instead of 60!
```

At first glance, this seems like a pure rounding error. But here is the twist: this weird number that ended in `59` is exactly representable in the machine's binary memory!

If we take that 17‑digit value and assign it directly to a new `double z`:

```c
double z = 0.12345678901234559;
printf("%.17f\n", z); // Prints exactly: 0.12345678901234559
```

The value returns with all 17 digits perfect! If we had truncated `z` to only 15 digits (`DBL_DIG`), we would have lost the state information of that specific binary bit pattern. That is why, to reconstruct the identical bits of a `double` from a string, we need 17 digits (`DBL_DECIMAL_DIG`).

---

#### 📐 Summary:
**For displaying data to users or doing common calculations:** Never exceed `FLT_DIG` or `DBL_DIG`. Otherwise, base‑2 rounding artifacts will pollute your numbers.

**For serialization (Round‑Tripping):** If you are going to save the state of a floating‑point variable to a text file, config file, or JSON, and later need to read that file while keeping the identical bits in memory, use `FLT_DECIMAL_DIG` or `DBL_DECIMAL_DIG`.

> 💡 **Study Insight:**
This concept defines the difference between human display and state persistence. In networking tools or performance monitoring (such as capturing GPU framebuffer render times), if you need to save those times to a text‑formatted log file for later analysis by another program, saving only with %f or limiting to a few decimal places will destroy the actual precision bits of the collected time. Using the _DECIMAL_DIG macros ensures a perfect round‑trip between text and binary, which is essential for reliable low‑level telemetry.

</details>

</details>

---
<details>
 <summary><b>🔢 More: Numeric Constant Types (Section 14.5 - 14.5.1)</b></summary>

---

[Code for Sections 14.5.0 - 14.5.1 can be found here](./CODE_BY_DAY/DAY_014/(SECTION-14-5)-MORE-NUMERIC-CONSTANT-TYPES)

---

<details>
<summary><b>🔟 Numeric Constant Types (Section 14.5.0)</b></summary>
<br>

---

[Section 14.5.0 code can be found here](./CODE_BY_DAY/DAY_014/(SECTION-14-5)-MORE-NUMERIC-CONSTANT-TYPES/(SECTION-14-5-0)-NUMERIC-CONSTANT-TYPES)

---

When you write a numeric literal (a constant) directly in your code, such as `1234` or `0xFF`, this value is not an "abstract" element for the compiler; it has a strict data type and occupies space in memory according to the language's rules.

But how does C decide, by default, which type to assign to a constant? And more importantly: how can we intervene and force the compiler to choose a specific type for that number?

In the next chapters, we will see the compiler's automatic decision rules and the use of suffixes (such as `L`, `U`, `LL`) to control literal typing.

---

> 💡 **Study Insight:**
> Mastering constant typing is vital to avoid silent *overflow* and *truncation* bugs in arithmetic operations. For example, if you multiply two integer constants whose result exceeds 2 billion, C will try to process the math using the default type (`int`). Even if you save the final result in a `long long` variable, the intermediate calculation will overflow and generate garbage before being assigned.
> Knowing how to force a constant to be `unsigned` (`1234U`) or `long long` (`1234LL`) ensures that the compiler uses the correct-sized registers from the very first instruction cycle, something indispensable when dealing with *bitmasks* and hardware registers.

</details>

---

<details>
 <summary><b>📑 Hexadecimal and Octal (Section 14.5.1)</b></summary>
<br>

---

[Section 14.5.1 code can be found here](./CODE_BY_DAY/DAY_014/(SECTION-14-5)-MORE-NUMERIC-CONSTANT-TYPES/(SECTION-14-5-1)-HEXADECIMAL-AND-OCTAL)

---

In addition to the good old decimal system, C also natively supports constants written in other numeric bases.

#### 🏛️ Hexadecimal (Base 16)
If you start a number with the `0x` prefix, the compiler will read it as a hexadecimal value. The letters A through F can be uppercase or lowercase interchangeably:

```c
int a = 0x1A2B;   // Hexadecimal
int b = 0x1a2b;   // Letter case doesn't matter
printf("%x", a);  // Prints in hexadecimal format: "1a2b"
```

---

#### 🌀 Octal (Base 8):
If you start a number with just a `0` (zero), C will read it as an octal number.

```c
int a = 012;
printf("%o\n", a);  // Prints in octal format: "12"
```

#### ⚠️ The Octal Trap for Beginners:
This often causes terrible bugs for those just starting out. Sometimes the programmer tries to visually align a list of decimal numbers by adding leading zeros to make it look "pretty" in the code editor. By doing so, you inadvertently change the number's base!

```c
int x = 11111;  // Decimal 11111
int y = 00111;  // Becomes Decimal 73 (Octal 111)
int z = 01111;  // Becomes Decimal 585 (Octal 1111)
```

---

#### 💾 A Note on Binary (Base 2):
Although not part of the strict classic C standard, a widely adopted unofficial extension present in almost all modern compilers (such as GCC and Clang) allows you to represent numbers directly in binary using the `0b` prefix:

```c
int x = 0b101010;    // Binary 101010
printf("%d\n", x);   // Prints 42 in decimal
```

- **`printf()` curiosity:** Unlike Hexadecimal (`%x`) and Octal (`%o`), there is no standard format specifier in `printf()` to print a number formatted in binary on screen. If you need to display the bits of a variable, you will have to create a custom function to extract and print one bit at a time using bitwise operators.


> 💡 Study Insight:
> For those working with memory mapping, device drivers, or custom firmware, the decimal base is practically useless in day-to-day work. We think and write in Hexadecimal and Binary.
> Each hexadecimal digit maps perfectly to exactly 4 bits (a nibble). For example, seeing the address `0x3F` immediately makes it obvious to the low-level developer that the active bits there are `0011 1111`. Trying to guess the same mask by looking at the decimal `63` requires mental gymnastics. Mastering these prefixes (`0x` and `0b`) allows you to write clean bitmasks and read hardware register manuals much more naturally.

</details>

---

<details>
 <summary><b>🔢 Integer Constants (Section 14.5.2)</b></summary>
<br>

---

[Section 14.5.2 code can be found here](./CODE_BY_DAY/DAY_014/(SECTION-14-5)-MORE-NUMERIC-CONSTANT-TYPES/(SECTION-14-5-2)-INTEGER-CONSTANTS)

---

You can force an integer constant to assume a specific type by appending a suffix to the end of the number.

Although most of the time developers omit these suffixes (since the compiler is very good at automatic coercion and ensuring compatibility), there are precision scenarios where they are indispensable.

See how to align types using assignments as an example:

```c
int                    x = 1234;
long int               x = 1234L;
long long int          x = 1234LL;

unsigned int           x = 1234U;
unsigned long int      x = 1234UL;
unsigned long long int x = 1234ULL;
```

- The suffix can be written in either uppercase or lowercase (`l` or `L`, `u` or `U`). Also, the order of `U` and `L` (or `LL`) does not matter: `UL` and `LU` are treated the same way by the compiler.

---

| **Suggested Type**        | **Suffix** |
| ------------------------ | ---------- |
| `int`                    | None       |
| `long int`               | `L`        |
| `long long int`          | `LL`       |
| `unsigned int`           | `U`        |
| `unsigned long int`      | `UL`       |
| `unsigned long long int` | `ULL`      |

---

#### 🕵️ The Hidden Rule: What happens if I DON'T use a suffix?
Saying that "the absence of a suffix means int" is a simplification. In reality, C's behavior under the hood is a bit more complex.

When you write something like `int x = 1234;`, what type does the bare number `1234` assume before being stored in `x`?

C will try to fit the value into the smallest type that can represent it, starting with `int` and moving up the size hierarchy. However, the exact list of types the compiler will test depends directly on the base of the number (decimal, hexadecimal, or octal).

The C11 specification (§6.4.4.1¶5) provides an official table detailing this rule. It states: *"The type of an integer constant is the first of the corresponding list in which its value can be represented."*

To understand the table in practice: imagine you write the number `123456789U` in your code. The compiler sees the `U` suffix and consults the corresponding row.

- First, it tests whether the number fits in an `unsigned int`.
- If it fits, the constant becomes an `unsigned int`.
- If the number is huge and doesn't fit, it jumps to the next option in the list (`unsigned long int`) and so on. It will always choose the smallest type in the list that prevents the literal from overflowing.

> 💡 **Study Insight:**
> The greatest practical use of this table is in creating macros via `#define` and in using hexadecimal constants for bitmasks.
> Notice a crucial detail in the table: **decimal** constants without a suffix *never* test `unsigned` types automatically. On the other hand, **hexadecimal** constants without a suffix (like `0xFFFFFFFF`) test `unsigned` variants as early as the second attempt.
> If you are writing code on a machine where `int` is 32 bits, writing `4000000000` (4 billion in decimal) will make the compiler treat it automatically as a `long int` (signed). But if you write `0xEE6B2800` (the same value in hexadecimal), the compiler will fit it as an `unsigned int`.
> Mixing these suffix‑less constants in mathematical operations or loop comparisons can inject invisible bugs of *sign‑extension*, where positive numbers accidentally become negative during type promotion. Explicitly adding the suffix (like `4000000000ULL` or `0xEE6B2800U`) removes any ambiguity and shields your code.

</details>

---

<details>
 <summary><b>🌊 Floating Point Constants (14.5.3)</b></summary>
<br>

---

[Section 14.5.3 code can be found here](./CODE_BY_DAY/DAY_014/(SECTION-14-5)-MORE-NUMERIC-CONSTANT-TYPES/(SECTION-14-5-3)-FLOATING-POINT-CONSTANTS)

---

You would probably think that a floating point constant like `1.23` would have the type `float` by default, right?

Surprise! C defines that any floating point constant without a suffix is, by default, of type `double`. Happy belated birthday!

If you want to force the compiler to treat the literal explicitly as another type, you must use the following suffixes (which are also case-insensitive, so uppercase or lowercase does not matter):

| Type          | Suffix    | Example                  |
| ------------- | --------- | ------------------------ |
| `float`       | `F` / `f` | `float x = 3.14f;`       |
| `double`      | None      | `double x = 3.14;`       |
| `long double` | `L` / `l` | `long double x = 3.14L;` |

But wait... we spent the entire guide writing code like this:

```c
float x = 3.14;
```

If the left side is a `float` (4 bytes) and the right side is a `double` (8 bytes), isn't that wrong? Technically, there is a mismatch, but C handles automatic numeric conversions very well. The compiler simply truncates the `double` so it can fit into the `float`. Because of that, omitting the suffix is an extremely common practice among developers, although adding the `f` is safer and avoids warnings in strict compilation.

#### 🚀 Scientific Notation (E Notation)

Remember that we saw that a floating point number is composed of significand, base, and exponent? There is a standard way to write very large or very small numbers using mathematical scientific notation, which assumes the format $x \times 10^y$.

In C, we write this using **E Notation**. The following representations are equivalent:

| Scientific Notation     | E Notation in C | Equivalent Real Value |
| ----------------------- | --------------- | --------------------- |
| $1.2345 \times 10^{-3}$ | `1.2345e-3`     | `0.0012345`           |
| $1.2345 \times 10^{8}$  | `1.2345e+8`     | `123450000`           |

To display a number using this formatting directly in the terminal, we use the `%e` format specifier in `printf()`:

```c
printf("%e\n", 123456.0);  // Prints: 1.234560e+05
```

#### 📌 Quick facts about E Notation:

You are not required to leave only one digit before the decimal point when writing the constant. You can do something like `double x = 123.456e+3;` (which results in `123456`). However, when `printf()` displays the number using `%e`, it will always normalize the value so that there is only one digit before the point.

The plus sign (`+`) in the exponent can be omitted, because it is the default: `1.2345e10` is strictly the same as `1.2345e+10`.

You can apply the suffixes `F` or `L` normally to constants with E notation: `1.2345e10F` (`float`) or `1.2345e10L` (`long double`).

#### ⚡ Floating Point Constants in Hexadecimal

To take low-level control to the extreme, C also supports hexadecimal floating point constants!

They work similarly to decimal ones, starting with the prefix `0x`, but with two crucial rules:

The exponent stops using the letter `e` and starts using the letter `p`.

The exponent does not multiply the number by a power of 10, but by a power of 2 ($x \times 2^y$).

See the example of the constant `0xa.1p3`:

`0xa` in hexadecimal is equal to $10$ in decimal.

`.1` in hexadecimal represents the fraction $1/16$, which is equivalent to $0.0625$.

Therefore, the raw significand is $10.0625$.

The suffix `p3` means multiplying it by $2^3$ (that is, by 8).

Doing the math: $10.0625 \times 8 = 80.5$.

To work with these values in `printf()`, we can use `%a` to display hexadecimal scientific notation or `%f` for traditional decimal formatting:

```c
double x = 0xa.1p3;
printf("%a\n", x);  // Prints the hex representation: 0x1.42p+6
printf("%f\n", x);  // Prints in pure decimal: 80.500000
```

> 💡 Study Insight:
> Why the hell would anyone use floating point in hexadecimal? The answer is absolute precision.
> As we saw in the previous section, converting a fractional decimal number (base 10) to binary (base 2) almost always creates repeating fractions and rounding errors (gaps). However, when you write a constant in hexadecimal (`0x`), each digit maps perfectly to 4 exact bits.
> Using the `p` notation (power of 2) ensures that the compiler builds the number in memory bit by bit, exactly as you wrote it, without going through any intermediate decimal rounding algorithm. This is widely used in extremely high-precision mathematical libraries, digital audio drivers, and in the calibration of projection matrices in graphics engines.
> With that, we finish the anatomy of literal constants in C! The next topic in the book enters into `Promotions and Conversions` (how C mixes all these types in the same calculation).

</details>

</details>

</details>

---

<details>
  <summary><b>🔹Day 15: Types III: Conversions</b></summary>

---

[Day 15 code can be found here](./CODE_BY_DAY/DAY_015)

---

<details>
<summary><b>🔄 Types III: Conversions (Section 15.0)</b></summary>
<br>

---

[Section 15.0 code can be found here](./CODE_BY_DAY/DAY_015/(SECTION 15-0)-CONVERSIONS)

---

In this chapter, we will dive deep into the mechanism of type conversion in the C language. C offers several ways to transform one data type into another, and some of these rules can be a bit counter‑intuitive or quite different from what you are used to seeing in high‑level languages (such as JavaScript, Python, or C#).

Before we learn how to force these transformations manually, we need to understand how the compiler handles these conversions automatically behind the scenes.

Conversions in C are essentially divided into two major categories, which we will cover next:
1. **Implicit Conversions (Coercion/Promotion):** Happen automatically when we mix different types in a mathematical expression or assignment. The compiler adjusts the sizes so that the operation is safe.
2. **Explicit Conversions (Casting):** When we, as programmers, intervene directly in the code to explicitly order the compiler: *"change the type of this variable now"*.

---

> 💡 **Study Insight:**
> Understanding type conversion is the dividing line between writing robust C code and creating software full of undefined behavior. Since C is a language that gives full freedom to the programmer, the compiler tries to "help" and guess your intention when you mix data (like adding a `char` to an `int`, or dividing an `int` by a `float`).
> If you do not master these automatic bit‑transition rules, you will eventually face silent precision loss or data truncation bugs that generate no compilation errors, but completely change the program's logic at runtime. In embedded systems or network protocols, a wrong implicit cast can break the alignment of an entire data packet.

</details>

---

<details>
 <summary><b>🧵 String Conversions (Section 15.1.0 - 15.1.2)</b></summary>

---

[Code for Sections 15.1.0 - 15.1.2 can be found here](./CODE_BY_DAY/DAY_015/(SECTION-15-1)-STRING-CONVERSIONS)

---

<details>
<summary><b>🔟 String Conversions - Intro (Section 15.1.0)</b></summary>
<br>

---

[Section 15.1.0 code can be found here](./CODE_BY_DAY/DAY_015/(SECTION-15-1)-STRING-CONVERSIONS/(SECTION-15-1-0)-STRING-CONVERSIONS-INTRO)

---

Unlike many modern high‑level languages (where you can simply add a number to a string and the language magically handles the conversion), C **does not** perform string‑to‑number (or vice‑versa) conversions automatically or in a simplified way.

Because C treats strings in a raw manner — merely as arrays of characters (`char`) terminated by `\0` — there is no implicit coercion between text and numeric types. To perform these transformations, we are forced to call specific functions from the standard library to do the dirty work.

> 💡 **Study Insight:**
> This lack of automatic conversion scares those coming from languages like JavaScript or Python, but it makes perfect sense when we look at the memory architecture. To the processor, an `int` is a pure 4‑byte binary block, while the string `"123"` is four distinct bytes containing the ASCII codes `49`, `50`, `51`, and `0`.
> There is no direct machine instruction that instantly transforms one into the other. In C, we must explicitly use functions like `atoi()`, `strtol()` (for text → number), or `sprintf()` (for number → text). Documenting these functions in the Roadmap will make it clear how to safely manipulate data coming from text interfaces, configuration files, or network payloads without crashing the program with invalid pointers.

</details>

---

<details>
<summary><b>🔢 Numeric Value to String (Section 15.1.1)</b></summary>
<br>

---

[Section 15.1.1 code can be found here](./CODE_BY_DAY/DAY_015/(SECTION-15-1)-STRING-CONVERSIONS/(SECTION-15-1-1)-NUMERIC-VALUE-TO-STRING)

---

When we want to convert a number into a string, we have two main tools at our disposal: the `sprintf()` function and its armored version, `snprintf()`.

They work in practically the same way as the `printf()` you already know, with one crucial difference: instead of spitting the result to the screen (standard output), they write the formatted result into a string (a character buffer). Once saved in the buffer, you can manipulate that text, transmit it over a network, or display it later.

Here is a practical example converting an approximation of the value of $\pi$ into text:

```c
#include <stdio.h>

int main(void) {
    char s[10];
    float f = 3.14159;

    // Converts "f" to a string and stores it in "s".
    // The argument 10 limits writing to at most 10 characters,
    // ensuring space for the null terminator ('\0').
    snprintf(s, 10, "%f", f);

    printf("Value as string: %s\n", s);  // Prints: Value as string: 3.141590
}
```

Just as we use `%f` for floats, you can use `%d` for plain integers, `%u for unsigned variants, or any other format specifier you already master.

> 💡 **Study Insight:**
> Although the material mentions the existence of `sprintf()`, the golden rule in modern C development (especially if you value safety and stability) is to never use `sprintf()`.
> `sprintf()` naively assumes that the destination array is large enough to hold the generated text. If you try to convert a huge number into a small buffer using `sprintf()`, it will exceed the array's limit and overwrite adjacent memory on the stack. This causes the infamous **Buffer Overflow**, which can crash the program with a Segmentation Fault or open critical security holes.
> The `snprintf()` function solves this by requiring the maximum buffer size as the second parameter (sizeof(s) or 10, in the example above). If the converted number needs more space than the buffer has, it will be safely truncated, and the \0 character will be forcibly inserted at the end, protecting your memory integrity.

</details>

---

<details>
 <summary><b>🧵 String to Numeric Value (Section 15.1.2)</b></summary>
<br>

---

[Section 15.1.2 code can be found here](./CODE_BY_DAY/DAY_015/(SECTION-15-1)-STRING-CONVERSIONS/(SECTION-15-1-2)-STRING-TO-NUMERIC-VALUE)

---

To go the opposite way, transforming text into numbers, there are two main families of functions in the C standard library, both residing in `<stdlib.h>`.

Let's call them the **`atoi`** (*a-to-i*) family and the **`strtol`** (*stir-to-long*) family.

---

#### 🛑 1. The `atoi` Family — Fast Conversion, but Dangerous

For straightforward conversions without any frills, the `atoi` functions get the job done quickly.

Fun fact: the `"a"` at the start of these functions stands for **ASCII**, so `atoi` means *"ASCII to Integer"* — though nowadays focusing only on ASCII is a bit of a dated term.

| Function | Description |
| --- | --- |
| `atoi` | Converts string to `int` |
| `atof` | Converts string to `double` |
| `atol` | Converts string to `long int` |
| `atoll` | Converts string to `long long int` |

Here is a basic example converting a string containing the value of π to a `double`:

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *pi = "3.14159";
    double f;

    f = atof(pi);
    printf("%f\n", f); // Prints: 3.141590
}
```

⚠️ **The hidden danger:**

These functions have very poor error handling mechanisms.

They do not clearly signal whether the conversion succeeded or failed.

```c
int x = atoi("what?"); // "what?" is not a number!
```

In many environments, this returns `0`, but you cannot tell whether the user actually typed `"0"` or if the conversion failed.

Moreover, if the converted number does not fit into the destination type, the behavior is undefined.

---

#### 🛡️ 2. The `strtol` Family — Robust and Customizable

If you need safer code, forget `atoi` and adopt the `strtol` family.

Besides handling errors much better, these functions allow converting numbers in **any numeric base** — decimal, binary, octal, hexadecimal, etc. — and cover a much wider range of data types.

| Function | Description |
| --- | --- |
| `strtol` | String to `long int` |
| `strtoll` | String to `long long int` |
| `strtoul` | String to `unsigned long int` |
| `strtoull` | String to `unsigned long long int` |
| `strtof` | String to `float` |
| `strtod` | String to `double` |
| `strtold` | String to `long double` |

These functions follow a very similar usage pattern and are often the first encounter many programmers have with **pointers to pointers**, such as `char **`.

But don't panic: the logic is quite straightforward.

---

#### 🔹 Example 1: Simple Conversion — Discarding Errors

If we pass `NULL` as the second parameter, we tell the function we do not care where the conversion stopped.

We also need to pass the numeric base as the third parameter. In this case, we use base `10`, i.e., decimal.

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *s = "3490";

    // Converts the string 's' in base 10 to unsigned long int.
    // NULL indicates we will ignore where the conversion stopped.
    unsigned long int x = strtoul(s, NULL, 10);

    printf("%lu\n", x);  // Prints: 3490
}
```

**Crucial difference from `atoi`:**

Even when discarding errors with `NULL`, if the string were completely invalid, `strtoul` would not cause undefined behavior because of that.

It would return `0`, but you would still lose the chance to know exactly where the conversion failed.

That is why, in more robust code, it is best to use the second parameter.

---

#### 🔹 Example 2: Converting Other Bases — Binary

Changing the base is as simple as changing the last parameter.

Let's extract the decimal value from a binary string, i.e., a string written in base `2`.

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *s = "101010";

    // Converting the string 's' in base 2, i.e., binary.
    unsigned long int x = strtoul(s, NULL, 2);

    printf("%lu\n", x);  // Prints: 42
}
```

The string `"101010"` in binary represents the number `42` in decimal.

---

#### 🕵️ The Mystery of the Pointer to Pointer: `char **`

What is the purpose of that second parameter that accepts a pointer to a pointer?

It allows the function to tell us **exactly where the conversion stopped** within the string.

If we pass the address of a character pointer, like `&badchar`, the function will modify that pointer to point to the first character that could not be converted.

---

#### 🔹 Example 3: Detecting the Invalid Character

See what happens if we try to convert the string `"34x90"` in base `10`:

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *s = "34x90";  // 'x' is not a valid digit in base 10.
    char *badchar;

    // We pass &badchar to capture where the conversion stopped.
    unsigned long int x = strtoul(s, &badchar, 10);

    // The function converts as much as it can before the error.
    printf("%lu\n", x);  // Prints: 34

    // badchar now points to the first invalid character inside s.
    printf("Invalid character found: %c\n", *badchar);  // Prints: x
}
```

The function was able to convert `"34"`.

When it reached the character `'x'`, it stopped, because `'x'` is not a valid digit in base `10`.

So `badchar` now points to that character.

---

#### 🔹 Example 4: Validating a Perfect Conversion

If the string is perfectly converted from start to finish, where will `badchar` point?

It will point to the null terminator, i.e., `'\0'`, at the end of the string.

Knowing this, we can create a more robust validation:

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *s = "3490";
    char *badchar;

    unsigned long int x = strtoul(s, &badchar, 10);

    // If the character where the conversion stopped is '\0',
    // it means the entire string was converted.
    if (*badchar == '\0') {
        printf("Total success! Value: %lu\n", x);
    } else {
        printf("Partial conversion or failure: %lu\n", x);
        printf("Garbage found in the string: %c\n", *badchar);
    }
}
```

---

#### 📐 Summary

The `atoi()`-style functions are useful for quick work in controlled environments or simple scripts.

But the `strtol()`-style functions are the real champions when you need:

- strict error control;
- input data validation;
- handling of alternative numeric bases;
- more safety when dealing with external input.

---

> 💡 **Study Insight**
> In infrastructure and embedded systems scenarios — such as reading server configuration files or interpreting command-line parameters in embedded Linux systems — using `strtol` with `badchar` validation is practically mandatory.
> Imagine that a user types an incorrect configuration parameter:

</details>

</details>

---

<details>
<summary><b>🔤 char Conversions (Section 15.2)</b></summary>
<br>

---

[Section 15.2 code can be found here](./CODE_BY_DAY/DAY_015/(SECTION-15-2)-CHAR-CONVERSIONS)

---

What if you have a single character that represents a digit, like `'5'`... Is that the same as the numeric value `5`?

Let's test this in code:

```c
printf("%d %d\n", 5, '5');
```

On a modern system (like those based on UTF-8 or ASCII), this will print:

```txt
5 53
```

As you can see, the answer is **no**.

- But where did that `53` come from?

That is the code point (the numeric code in the ASCII/UTF‑8 table) that represents the visual symbol for the **character '5'**.

---

- So, how do we convert the character `'5'` (whose internal value is 53) into the actual numeric value `5`?

We use a classic and extremely elegant trick! The C Language Standard explicitly guarantees that the numeric characters from 0 to 9 have sequential and mandatory codes in this exact order:

```txt
0  1  2  3  4  5  6  7  8  9
```

- Think for a moment: how can we use this guarantee to our advantage?

Looking at the characters and their respective numeric values in the ASCII/UTF‑8 table, we have the following mapping:

| Character | '0' | '1' | '2' | '3' | '4' | '5' | '6' | '7' | '8' | '9' |
|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|
| Internal Value (ASCII) | 48 | 49 | 50 | 51 | 52 | 53 | 54 | 55 | 56 | 57 |

Notice that the character `'5'` is worth `53`, and the character `'0'` is worth `48`.

Since the sequence is perfectly linear, just subtract the character `'0'` from any digit character to get its actual numeric value:

```c
char c = '6';
int x = c;       // x receives 54 (the ASCII code for the character '6')
int y = c - '0'; // y receives 6 (54 - 48), exactly the numeric value we wanted!
```

And the reverse path works the same way! If you have an integer from 0 to 9 and want to turn it into the corresponding character, just add the character `'0'`:

```c
int x = 6;
char c = x + '0';  // c receives the value 54

printf("%d\n", c);  // Prints 54 (using %d to see the raw numeric value)
printf("%c\n", c);  // Prints 6  (using %c to see the formatted character)
```

- You may even find this a somewhat bizarre or archaic way to perform a type conversion. And by today's high‑level language standards, it certainly is. But back in the old days, when computers were almost made of wood, this was the ultra‑optimized method to make that magic happen. Since the mechanism works perfectly and wastes no processing cycles, C never needed to "fix" it.

> 💡 Study Insight:
> This trick of subtracting or adding `'0'` is not just a historical curiosity; it is the foundation of how low‑level functions (like the very `atoi` we saw before) are implemented under the hood.
> When you need to process a string character by character (for example, when manually parsing a custom data packet coming from a serial port or network socket), doing `pointer[i] - '0'` avoids the need to allocate temporary memory or call heavy standard library functions to convert simple numbers. It is a direct arithmetic operation between bytes in the CPU register: fast, clean, and with zero dynamic memory consumption.

</details>

---

<details>
 <summary><b>🔢 Numeric Conversions (Section 15.3.0 - 15.3.3)</b></summary>

---

[Code for Sections 15.3.0 - 15.3.3 can be found here](./CODE_BY_DAY/DAY_015/(SECTION-15-3)-NUMERIC-CONVERSIONS)

---

<details>
<summary><b>🧪 Boolean (Section 15.3.1)</b></summary>
<br>

---

[Section 15.3.1 code can be found here](./CODE_BY_DAY/DAY_015/(SECTION-15-3)-NUMERIC-CONVERSIONS/(SECTION-15-3-1)-BOOLEAN)

---

The conversion rules for Boolean types (`_Bool` or `bool`) in C are extremely straightforward and based on the presence or absence of value:

* If you convert the number zero (`0` for integers or `0.0` for floating-point) to Boolean, the result will be strictly **`0`** (`false`).
* Otherwise, if the value is **absolutely anything other than zero** (whether `1`, `-5`, `0.0001`, or a valid pointer), the conversion result will always be **`1`** (`true`).

</details>

---

<details>
<summary><b>🔄 Integer-to-Integer Conversions (Section 15.3.2)</b></summary>
<br>

---

[Section 15.3.2 code can be found here](./CODE_BY_DAY/DAY_015/(SECTION-15-3)-NUMERIC-CONVERSIONS/(SECTION-15-3-2)-INTEGER-TO-INTEGER-CONVERSIONS)

---

When you assign an integer value from one type to another with different limits (for example, trying to put a `long` into a `short`, or an `int` into an `unsigned int`), and the original value **does not fit** in the destination space, C splits the behavior into two strict rules:

#### 🏎️ 1. The Destination is an Unsigned Type (`unsigned`)
If the destination type is an unsigned integer and the value does not fit in it, C mathematically guarantees that the value will undergo a "car odometer" effect (the infamous *wrap-around*). The value cycles around until it fits within the allowed range.

Technically, the final result will be the original value mapped via modular arithmetic (the remainder of the original value divided by $2^n$, where $n$ is the number of bits in the destination type).

* **Practical Example:** If you try to force the decimal number `258` into an `unsigned char` (which only stores `0` to `255`), the value exceeds the maximum limit, the odometer resets to zero, and it keeps counting. The final stored value will be `2`.

#### ⚠️ 2. The Destination is a Signed Type (`signed`)
Here the story changes completely. If the destination type is a **signed** integer and the original value does not fit in it, the result is classified by the C standard as **Implementation-Defined Behavior**.

This means the C language does not dictate a universal rule about what should happen. The compiler you are using (whether GCC, Clang, or MSVC) will do something predictable and consistent with your CPU architecture (usually it simply truncates the upper bits in memory, causing a very large positive number to become negative due to Two's Complement representation). However, because it is not a universal rule in the standard, to be absolutely certain of how the final binary will behave, you are required to consult your compiler's documentation.

---

> 💡 **Study Insight:**
> For those working close to the hardware or optimizing C code, understanding the difference between these two rules is crucial for software portability.
> The *wrap-around* behavior of `unsigned` types is guaranteed by law in the language standard. Embedded systems developers often deliberately take advantage of this to create hardware tick counters or simple hashes, knowing that when the `unsigned` counter overflows, it will cleanly and safely wrap back to zero without crashing the program.
> On the other hand, relying on overflow or truncated conversion of `signed` types is flirting with danger. Because the behavior depends on the compiler and processor architecture, code that works perfectly when compiled with GCC on an x86_64 architecture can break and generate completely bizarre calculations if ported and compiled for an ARM chip using a different compiler. Whenever you need to downsize a signed variable, explicitly mask the bits or manually validate the limits before the assignment.

</details>

---

<details>
<summary><b>🧾 Conversions between Integers and Floating Point (Section 15.3.3)</b></summary>
<br>

---

[Section 15.3.3 code can be found here](./CODE_BY_DAY/DAY_015/(SECTION-15-3)-NUMERIC-CONVERSIONS/(SECTION-15-3-3)-CONVERSIONS-BETWEEN-INTEGERS-AND-FLOATING-POINT)

---

The transition rules when mixing integers with fractional numbers (floating point) follow a "best effort" logic, but hide fatal code‑crashing dangers.

---

#### 🪓 1. From Floating Point to Integer (`float`/`double` ➔ `int`)
If you convert a floating‑point type to any integer type, the fractional part is summarily discarded with total prejudice. There is no automatic rounding up or down; C simply chops off the decimal places (truncation operation).

- `3.14` becomes `3`
- `2.99999` becomes `2`
- `-5.67` becomes `-5`

⚠️ **The Undefined Behavior Trap:**
If the floating‑point number you are trying to convert is too large to fit into the destination integer type, the result is **Undefined Behavior**. Trying to stuff `3000000000.0` (3 billion) into a `short int` (which only goes up to 32,767) will make your program generate bizarre garbage or crash on the spot. Always check the limits before performing this kind of truncation.

---

#### 🎯 2. From Integer/Floating Point to Floating Point (➔ `float`/`double`)
When going the other way, or converting a smaller floating‑point type to a larger one (like `int` to `float`, or `float` to `double`), the C language makes a best‑effort attempt to find the closest possible floating‑point representation of the original value.

Because floats use powers of base 2 under the hood, the fit is not always 100% perfect, but the compiler will approximate as much as the bits allow. However, the danger rule still applies: if the original value is so ridiculously colossal that it cannot be represented by the destination type at all, you fall back into Undefined Behavior.

> 💡 **Study Insight:**
> A common 32‑bit `int` can represent the number 2147483647 with perfect bit‑by‑bit accuracy. A `float` (also 32 bits), on the other hand, needs to use part of its space to store the exponent in scientific notation, leaving only 24 bits for the mantissa (the actual number).
> If you convert that maximum `int` to `float`, the number will "fit" (the compiler won't trigger undefined behavior because the float's exponent can handle gigantic numbers), but the final digits will be rounded and lost due to lack of mantissa space. If your code depends on exact IDs, accurate packet counters, or bit‑by‑bit memory addressing, an implicit conversion to `float` will silently corrupt your data. If you need floating point for massive integers, always prefer `double` (64 bits).

</details>

</details>

---

<details>
<summary><b>🔄 Implicit Conversions (Section 15.4.0 - 15.4.3)</b></summary>

---

[Section 15.4.0 - 15.4.3 code can be found here](./CODE_BY_DAY/DAY_015/(SECTION-15-4)-IMPLICIT-CONVERSIONS)

---

<details>
<summary><b>🧪 Implicit Conversion (Section 15.4.0)</b></summary>
<br>

---

[Section 15.4.0 code can be found here](./CODE_BY_DAY/DAY_015/(SECTION-15-4)-IMPLICIT-CONVERSIONS/(SECTION-15-4-0)-IMPLICIT-CONVERSION)

---

Implicit conversions are those that the compiler executes automatically for you, without the need for any special operator or intervention, whenever you mix different types in an expression or assignment.

</details>

---

<details>
<summary><b>🔄 The Usual Arithmetic Conversions (Section 15.4.2)</b></summary>
<br>

---

[Section 15.4.2 code can be found here](./CODE_BY_DAY/DAY_015/(SECTION-15-4)-IMPLICIT-CONVERSIONS/(SECTION-15-4-1)-THE-USUAL-ARITHMETIC-CONVERSIONS)

---

These are the automatic conversions that C quietly performs when you run arithmetic operations that mix different numeric types. (By the way, this is exactly the official name given by the language standard in C11 §6.3.1.8). It is worth noting that in this section we are talking exclusively about numeric types; conversions involving strings come later.

These rules are meant to answer that classic doubt when we mix things in code:

```c
int x = 3 + 1.2;   // Mixing int and double
// The mathematical result 4.2 is converted to int
// The value 4 is what actually gets stored in x

float y = 12 * 2;  // Mixing float and int
// The number 24 is converted to float
// The value 24.0 is stored in y
```

Do they become `int`? Do they become `float`? How does the compiler decide? Here are the steps simplified and translated for human consumption:

1. **If there is floating point in the expression:** If at least one of the elements involved in the operation is of a floating‑point type (`float`, `double`, or `long double`), C will automatically convert all the other elements to that same floating‑point type. The leveling is always done to the "widest" type in the expression.

2. **If only integer types are present:** If both sides are integers of different sizes, the compiler first applies the Integer Promotions (which we saw in the previous section) to each of them. Then it promotes the smaller type to match the size of the larger type that can hold the common value. In some mixing scenarios, this may even turn a signed type into an unsigned type.

If you have a morbid curiosity for the grittier, more mathematical details of this machinery, feel free to open the C11 §6.3.1.8 specification. But let's face it, you probably have more fun things to do with your free time.

As a general survival rule, keep this in mind: integer types always "lose" and are promoted to floating point if there is a `float` or `double` nearby in the expression, and the compiler does its best to ensure that mixing different integers does not cause an overflow.

Finally, when converting one floating‑point type to another (e.g., squeezing a `double` into a `float`), the compiler will try to make an exact conversion. If the bits do not allow a perfect fit, it will use the best possible approximation. Now, if the original number is so colossally large that it absolutely cannot fit into the destination type… boom: you fall into Undefined Behavior, and the program may act completely unpredictably.

> 💡 **Study Insight:**
> One of the biggest dangers of the Usual Arithmetic Conversions happens totally silently in divisions.
> Consider the following calculation: `float result = 5 / 2;`. You might expect `result` to receive `2.5`. However, because `5` and `2` are plain integer constants (no suffix and no decimal point), C applies integer arithmetic before looking at the destination variable's type. The division of 5 by 2 yields the integer 2. Only later, when assigning the value to the `float result`, does 2 become 2.0.

</details>

---

<details>
 <summary><b>🔍 The void* Type (15.4.3)</b></summary>
<br>

---

[Section 15.4.3 code can be found here](./CODE_BY_DAY/DAY_015/(SECTION-15-4)-IMPLICIT-CONVERSIONS/(SECTION-15-4-3)-THE-VOID-TYPE)

---

The `void*` type is one of the most fascinating and powerful features of the C language because it works as a universal pointer (or generic pointer). The great magic here is that it can be implicitly converted, that is, automatically by the compiler, to or from any other pointer type, without requiring you to use a cast (explicit conversion).

See how this identity swap happens naturally in code:

```c
int x = 10;
void *p = &x;  // &x is of type int*, but we store it in a void* without complaint
int *q = p;    // p is void*, but C accepts storing it back into an int*
```

Notice that the compiler does not generate any warnings or errors on these lines. `void*` essentially acts as a blank slate: it stores a raw, pure memory address, but chooses to temporarily "forget" what type of data is stored at that address.

> 💡 **Study Insight:**
> This flexibility of `void*` is the foundation of practically all dynamic memory management and generic data structures in C. When you call functions like `malloc()`, for example, it needs to allocate memory for you without having the slightest idea whether you are going to store there a list of integers, an array of floats, or a custom structure.

</details>

</details>

---

<details>
 <summary><b>🛠️ Explicits Conversions (15.5.0 - 15.5.1)</b></summary>

---

[Code for Sections 15.5.0 - 15.5.1 can be found here](./CODE_BY_DAY/DAY_015/(SECTION-15-5)-EXPLICITS-CONVERSIONS)

---

<details>
<summary><b>🧪 Explicit Conversion (Section 15.5.0)</b></summary>
<br>

---

[Section 15.5.0 code can be found here](./CODE_BY_DAY/DAY_015/(SECTION-15-5)-EXPLICITS-CONVERSIONS/(SECTION-15-5-0)-EXPLICIT-CONVERSION)

---

Unlike the implicit conversions that the compiler performs silently, **explicit conversions** are those that you, actively and intentionally, order the compiler to perform. If you do not explicitly request it, the compiler will not lift a finger to adjust the types (or it may generate warnings and compilation errors).

There are two main ways to perform an explicit conversion in C:
1. **By Assignment:** When you directly assign a value of one type to a variable of another type using the `=` operator.
2. **By Casting:** When you use the *cast* operator to force the conversion of a value or an entire expression at that exact moment. (Next Section)

---

#### 🔀 1. Conversion by Assignment

C allows you to force conversion simply by throwing a value of one type into a variable of another type. The compiler will reformat the bits under the hood so that they fit into the destination, even if it costs data loss:

```c
float pi = 3.14159;
int x;

x = pi;  // Conversion by assignment: the float pi is converted and stored as int.
         // x now holds exactly 3.
```

Although this works, this method hides a danger: the compiler may generate a warning about loss of precision, and whoever is reading your code might think you made a typo because you did not make your intention clear on paper.

</details>

---

<details>
<summary><b>🎯 The Cast Operator (Section 15.5.1)</b></summary>
<br>

---

[Section 15.5.1 code can be found here](./CODE_BY_DAY/DAY_015/(SECTION-15-5)-EXPLICITS-CONVERSIONS/(SECTION-15-5-1)-THE-CAST-OPERATOR)

---

You can explicitly change the type of an expression by placing the new type in parentheses right before it. Although some C developers frown upon this practice when it is not strictly necessary, it is almost certain that you will come across many codes full of *casts* out there.

Let's look at an initial example where we want to convert an `int` to `long` to store it in a `long` variable:

> **Note:** This example is purely didactic and the *cast* here is completely **unnecessary**. The expression `x + 12` would be automatically promoted to `long int` at the moment of assignment to match the wider type of variable `y`.

```c
int x = 10;
long int y = (long int)x + 12;
```

#### 🕵️ Where is Cast Really Useful?
1. *Dereferencing generic pointers (`void*`)*
   - It is very common to see casts being used to convert a `void*` into a specific pointer so that its value can finally be accessed (dereferenced). A sorting callback for the classic `qsort()` function from the standard library often exhibits this behavior, since it injects `void*` pointers into the parameters:

```c
int compar(const void *elem1, const void *elem2) {
    // Explicitly cast void* to int* and dereference all in the same line
    if (*((const int*)elem2) > *((const int*)elem1)) return 1;
    if (*((const int*)elem2) < *((const int*)elem1)) return -1;
    return 0;
}
```

But, let's be honest, you could also write the same logic in a much cleaner and more readable way using only assignments (taking advantage of the fact that C converts `void*` implicitly):

```c
int compar(const void *elem1, const void *elem2) {
    const int *e1 = elem1;
    const int *e2 = elem2;
    return *e2 - *e1; // The code breathes much better without the visual pollution of casts
}
```

2. Printing pointers with `printf()`

- Another classic place where cast shines is to silence compiler warnings when printing memory addresses. The `%p` format specifier is very strict and strictly expects a pointer of type `void*`.

If you do this:

```c
int x = 3490;
int *p = &x;
printf("%p\n", p);
```

The compiler will shout a warning on your screen:
`warning: format '%p' expects argument of type 'void *', but argument 2 has type 'int *'`

The fix is to apply a simple, straightforward cast:

```c
printf("%p\n", (void *)p);
```

3. Direct inspection of memory blocks
  - Sometimes you want to explicitly change a pointer's type to access the same memory chunk in a completely different way, without using a `void*` in between.

```c
long x = 3490;
long *p = &x;
unsigned char *c = (unsigned char *)p;
```

4. Functions from the `<ctype.h>` library
A third place where cast is often required is when dealing with the character conversion and analysis functions from the standard library (such as `toupper`, `isalpha`, etc.). In certain scenarios, you must cast values with questionable signs to `unsigned char` before passing them as an argument, to avoid undefined behavior during processing.

---

#### ⚖️ Verdict on Cast
In daily practice, the use of explicit conversions is rarely necessary for basic arithmetic operations. If you find yourself filling your code with `(int)` and `(float)`, there is probably a more elegant way to structure the logic, or maybe you are just making unnecessary casts.
However, sometimes it is indispensable. The golden rule is: try to avoid it to keep the code lean, but don't be afraid to use it when precision demands.

</details>

</details>

</details>

---

<details>
<summary><b>🔹Day 16: Types IV: Qualifiers and Specifiers</b></summary>

---

[Day 16 code can be found here](./CODE_BY_DAY/DAY_016)

---

<details>
 <summary><b>🔄 Types IV: Qualifiers and Specifiers (Section 16.0)</b></summary> 
<br>

---

[Section 16.0 code can be found here](./CODE_BY_DAY/DAY_016/(SECTION-16-0)-QUALIFIERS-AND-SPECIFIERS)

---

Now that we have a few more types in our utility belt, it turns out we can assign them some additional attributes that directly control their behavior.

These special modifiers are known as **type qualifiers** and **storage-class specifiers**.

---

> 💡 **Study Insight:**
> To understand what is coming, think of it this way: while basic types (like `int`, `float`, `char`) tell the compiler **what** is stored in memory and **what its size is**, qualifiers and specifiers tell the compiler **how** it should manage and optimize that memory.
> They are divided into two major practical groups:
> * **Qualifiers** (such as `const`, `volatile`, `restrict`): Dictate strict access rules for the variable. They can either forbid changing a value or warn the compiler not to perform aggressive optimizations because that memory might change unpredictably (widely used in driver programming and embedded systems).
> * **Specifiers** (such as `static`, `extern`, `register`): Change the lifetime and visibility (scope) of the variable. They can make a variable survive past the end of a function or warn the compiler that the true definition of that variable is hidden in another file in the project.
> They represent the next level of control over the infrastructure of your C program!

</details>

---

<details>
 <summary><b>🏷️ Type Qualifiers (15.5.0 - 15.5.1)</b></summary>

---

[Code for Sections 16.1.0 - 16.1.4 can be found here](./CODE_BY_DAY/DAY_016/(SECTION-16-1)-TYPE-QUALIFIERS)

---

<details>
<summary><b>🛠️ Type Qualifiers - Introduction (Section 16.1.0)</b></summary>
<br>

---

[Section 16.1.0 code can be found here](./CODE_BY_DAY/DAY_016/(SECTION-16-1)-TYPE-QUALIFIERS/(SECTION-16-1-0)-INTRODUCTION)

---

Type qualifiers will allow you to declare constant (immutable) values and, in addition, serve to provide valuable optimization "hints" that the compiler can use to generate more efficient and safer machine code.

---

> 💡 **Study Insight:**
> When it mentions "optimization hints", it is touching on one of the most critical points of the C language, especially when we go down to the hardware level.
> For example, by marking a global variable as `const`, you are not only preventing a future typo bug; you are actively telling the compiler (and the operating system) that it can place that variable in a **read‑only** memory section (such as the `.rodata` section of the binary). If the code tries to write there, the processor triggers a hardware fault (*Segmentation Fault*) on the spot.
> On the other hand, there is a qualifier called `volatile` (which will probably appear in the coming pages) that does exactly the opposite: it **forbids** any optimization. In scenarios of direct hardware manipulation or firmware writing for ARM processors, the value of a memory address can be changed at any time by an external peripheral (such as a Bluetooth adapter or a network controller). `volatile` warns the compiler: *"never assume the value of this variable by caching it in registers; go to RAM and read the actual value every time"*.

</details>

---

<details>
 <summary><b>🧱 The `const` Qualifier (Section 16.1.1)</b></summary>

---

[Section 16.1.1 code can be found here](./CODE_BY_DAY/DAY_016/(SECTION-16-1)-TYPE-QUALIFIERS/(SECTION-16-1-1)-THE-CONST-QUALIFIER)

---

This is, by far, the most common type qualifier you will encounter. It means the variable is **constant**, and any attempt to modify its value will result in a compiler that is extremely angry with you.

```c
const int x = 2;
x = 4;  // SOUNDS OF THE COMPILER HAVING A MELTDOWN: cannot assign to a constant
```

- The rule is simple: you cannot change a `const` value.

Besides plain variables, it is very common to see `const` being used to protect parameters in function signatures:

```c
void foo(const int x) {
printf("%d\n", x + 30);  // OK, the addition only reads the value, it does not modify "x"
}
```

---

#### 🔒 `const` and Pointers

This part often trips up many people, because the use of `const` with pointers has two applications with completely different meanings, depending on where the keyword is placed.

---

#### 1. Locking the pointed value (Pointer to a Constant)

We can configure the pointer so that you cannot change **the thing it points to**. To do this, we place `const` at the very beginning of the declaration, along with the type name (before the asterisk `*`).

```c
int x[] = {10, 20};
const int *p = x;

p++;      // All good! We can change the pointer itself without problems.
*p = 30;  // Compilation error! We cannot change the pointed content.
```

---

#### 2. Locking the pointer itself (Constant Pointer)
Great, so we cannot change the target, but we can move the pointer. What if we want the opposite? We want to be allowed to change the value in memory, but forbid the pointer from pointing elsewhere?

```c
int x = 10;
int *const p = &x;

*p = 20;  // All good! We changed the value of "x" to 20.
p++;      // Compilation error! We cannot move "p" with pointer arithmetic.
```

---

#### 3. Locking both
You can also apply both restrictions simultaneously, locking both the memory address and the value stored in it:

```c
const int *const p;  // Cannot modify "p" nor "*p"!
```

---

#### 4. Multiple Levels of Indirection
If you are dealing with double (or higher) pointers, you must apply `const` at the appropriate levels. Just because a top-level pointer is `const`, it does not mean that the pointer it points to should also be. You can set the restrictions layer by layer:

```c
char **p;
p++;     // OK!
(*p)++;  // OK!

char **const p;
p++;     // Error! (The top-level pointer is locked)
(*p)++;  // OK! (The second-level pointer is free)

char *const *p;
p++;     // OK! (The top-level pointer is free)
(*p)++;  // Error! (The second-level pointer is locked)

char *const *const p;
p++;     // Error!
(*p)++;  // Error!
```

---

#### ✔️ `const` Correction

One more thing I need to mention is that the compiler will issue a warning if you try to do something like this:

```c
const int x = 20;
int *p = &x;
```

It will spit out a message saying something along the lines of:
`initialization discards 'const' qualifier from pointer type target`

- What is happening here?

Well, we need to look at the types on both sides of the assignment:

```c
const int x = 20;
    int *p = &x;
//    ^       ^
//    |       |
//  int*    const int*
```

The compiler is warning us that the value on the right side of the assignment has the `const` protection, but the variable that will receive it on the left side does not. With this warning, the compiler is making it clear that it is discarding the "constness" (the read‑only protection) of the expression on the right.

In other words, we may even try to force it and write the code below, but it is simply wrong. The compiler will complain, and this generates the dreaded **Undefined Behavior**:

```c
const int x = 20;
int *p = &x;

*p = 40;  // Undefined Behavior -- might modify "x", might not!
printf("%d\n", x);  // 40, if you're very lucky
```

</details>

---

<details>
 <summary><b>🚫 The `restrict` Qualifier (Section 16.1.2)</b></summary>

---

[Section 16.1.2 code can be found here](./CODE_BY_DAY/DAY_016/(SECTION-16-1)-TYPE-QUALIFIERS/(SECTION-16-1-2)-THE-RESTRICT-QUALIFIER)

---

**TL;DR:** You never *need* to use this and you can simply ignore it whenever you come across it. If you use it correctly, you'll probably gain some performance. If you use it incorrectly, you'll get a nice dose of Undefined Behavior.

`restrict` is a hint to the compiler that a specific piece of memory will be accessed **only by a single pointer** and by no other. In other words, you are guaranteeing that there will be no *aliasing* (multiple pointers pointing to the same location) of the object referenced by the restricted pointer.

If a developer declares a pointer as `restrict` and then accesses the object it points to in another way (e.g., using a second pointer), the program's behavior becomes undefined.

Basically, you are telling C: *"Hey — I guarantee that this single pointer is the only way I will access this memory. If I'm lying, feel free to throw Undefined Behavior in my face."*

The compiler uses this information to perform certain aggressive optimizations. For example, if you are dereferencing a `restrict` pointer repeatedly inside a loop, C may decide to cache the result in a fast CPU register and only write the final result back to main memory when the loop ends. If any other pointer referred to that same memory and accessed it during the loop, the results would become completely out of sync.

*(Note: `restrict` has no effect if the pointed object is never modified/overwritten. Its entire usefulness revolves around optimizations involving memory writes).*

Let's write a function to swap the value of two variables. We'll use the `restrict` keyword to assure C that we will never pass pointers pointing to the same thing. Then we'll mess it up and try to pass exactly that:

```c
// We promise the compiler: 'a' and 'b' will never point to the same memory
void swap(int *restrict a, int *restrict b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main(void) {
    int x = 10, y = 20;

    swap(&x, &y);  // OK! "a" and "b" up there point to different things.
    swap(&x, &x);  // Undefined Behavior! "a" and "b" now point to the same thing.
}
```

If we removed the `restrict` keyword from the code above, both calls would work safely. However, the compiler might not be able to optimize the function as well.

#### Scope Rules:

`restrict` has block scope. This means the restriction only lasts for the block in which it was declared. If it is in a function's parameter list, the restriction applies for the entire scope of that function.

- **Arrays:** If the restricted pointer points to an array, the restriction applies to the individual objects of the array. Other pointers can read and write to the same array, as long as they do not read or write to the same elements as the restricted pointer.

- **File Scope:** If declared outside any function (global file scope), the restriction covers the entire program.

You will probably see this frequently in standard library functions, like `printf()`:

```c
int printf(const char * restrict format, ...);
```

Again, this is just C telling the compiler that, inside `printf()`, there will be only one pointer referencing any part of that format string.

**One final note:** If, for some reason, you are using array notation in your function parameters instead of pointer notation, you can use restrict as follows:

```c
void foo(int p[restrict])     // Without a defined size
void foo(int p[restrict 10])  // Or with a defined size
```

But pointer notation (with the `*`) is usually much more common in everyday practice.

</details>

---

<details>
 <summary><b>⚡ The `volatile` Qualifier (Section 16.1.3)</b></summary>

---

[Section 16.1.3 code can be found here](./CODE_BY_DAY/DAY_016/(SECTION-16-1)-TYPE-QUALIFIERS/(SECTION-16-1-3)-THE-VOLATILE-QUALIFIER)

---

It is unlikely that you will see or need to use this in everyday standard software programming. You will only run into `volatile` if you are dealing **directly with hardware**.

The `volatile` keyword warns the compiler that a given value in memory may change "behind its back", and therefore it must be read from actual memory *every single time* it is requested.

A classic example is when the code is monitoring a memory address that is being continuously updated behind the scenes by the hardware itself — such as a motherboard *timer* or a sensor read register.

If the compiler decides to optimize this process and store the value in a fast CPU register for an extended period, the physical component will update the value in memory, but your program will not find out. Your code will keep reading the old, "frozen" value that got stuck in the register.

By declaring something as `volatile`, you are telling the compiler: *"Hey, the thing this points to can change at any moment for reasons completely unrelated to the code in this program. Turn off cache optimizations for this variable!"*

```c
volatile int *p;
```

</details>

---

<details>
 <summary><b> ⚛️ The `_Atomic` Qualifier (Section 16.1.4)</b></summary>

---

[Section 16.1.4 code can be found here](./CODE_BY_DAY/DAY_016/(SECTION-16-1)-TYPE-QUALIFIERS/(SECTION-16-1-4)-THE-_ATOMIC-QUALIFIER)

---

This is an optional feature of the C language that we will discuss in more depth in the chapter dedicated to *Atomics* (Atomic Operations).

---

> 💡 Study Insight: A Preview on Concurrency
> Although the book leaves the details for later, it is worth already having the concept in mind: `_Atomic` shines in multithreaded programming and high‑performance systems.
> In software that deals with massive parallel processing — such as network servers handling multiple connections or systems that perform real‑time video capture and encoding — several *threads* often share the same control variables (for example, a counter of processed *frames*). If two threads try to add `+1` to this counter at the exact same nanosecond, the CPU may get confused and register only one of the additions, corrupting the data (what we call a *Race Condition*).
> The `_Atomic` qualifier tells the compiler to use special CPU instructions that ensure that reading and writing to that variable are **indivisible** (atomic). When one thread starts changing the value, the hardware guarantees that no other thread can touch the variable until the operation is 100% complete. This is the foundation for creating ultra‑fast algorithms that do not depend on the slow *locks* of the operating system.

</details>

</details>

---

<details>
 <summary><b>🗄️ Storage-Class Specifiers (16.2.0 - 16.2.5)</b></summary>

---

[Code for Sections 16.2.0 - 16.2.5 can be found here](./CODE_BY_DAY/DAY_016/(SECTION-16-2)-STORAGE-CLASS-SPECIFIERS)

---

<details>
<summary><b>🛠️ Storage-Class Specifiers - Introduction (Section 16.2.0)</b></summary>
<br>

---

[Section 16.2.0 code can be found here](./CODE_BY_DAY/DAY_016/(SECTION-16-2)-STORAGE-CLASS-SPECIFIERS/(SECTION-16-2-0)-INTRODUCTION)

---

Storage-class specifiers are similar to type qualifiers. They serve to provide the compiler with additional and crucial information about the nature and behavior of a variable behind the scenes.

---

> 💡 Study Insight: What is the practical difference?
> To avoid confusing Qualifiers (which we have just covered) with Specifiers (which we are about to start), keep the following practical rule in mind:
> * **Qualifiers** (`const`, `volatile`, `restrict`): Dictate the **ACCESS** rules. *(Can I overwrite this value? Can the hardware change this by itself? Is there more than one pointer looking at this address?)*
> * **Specifiers** (`auto`, `static`, `extern`, `register`): Dictate the **HOSTING**, **LIFETIME**, and **VISIBILITY** (scope).
> While qualifiers protect data integrity, specifiers organize your program's memory architecture. It is with specifiers that you decide whether a variable will be born and die quickly on the *Stack* with each function call, whether it will persist in RAM from the beginning to the end of the program, whether it should try to host itself directly in a fast CPU register, or whether it needs to be visible to other `.c` files in your project.

</details>

---

<details>
 <summary><b>♻️ The `auto` Specifier (Section 16.2.1)</b></summary>
<br>

---

[Section 16.2.1 code can be found here](./CODE_BY_DAY/DAY_016/(SECTION-16-2)-STORAGE-CLASS-SPECIFIERS/(SECTION-16-2-1)-THE-AUTO-SPECIFIER)

---

You will almost never see this keyword in the wild, since `auto` is the default behavior for variables declared within a block scope (such as inside functions or loops). It is always implicit.

These two snippets are exactly the same thing:
```c
{
    int a;         // 'auto' is the default...
    auto int a;    // ...so writing this is completely redundant
}
```

The `auto` keyword indicates that this object has **automatic storage duration**. That is, it exists only within the scope where it was defined and is automatically deallocated (destroyed) as soon as the program flow leaves that scope.

A dangerous trap regarding automatic variables is that their value is indeterminate until you explicitly initialize them. We often say that they are **born filled with "random" or "garbage" data**.

**Always initialize all automatic variables before using them!**

</details>

---



---

</details>

</details>
