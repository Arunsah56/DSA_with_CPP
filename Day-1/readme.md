# Day 01 — DSA with C++ 🚀

> Starting from zero. Documenting every step of my DSA journey in C++.

---

## 📌 What I Learned Today

### 1. `#include <iostream>`
Imports the **iostream library** — gives access to input/output tools like `cin` and `cout`. Without it, C++ has no idea what `cout` or `cin` means.

```cpp
#include <iostream>  // Always the first line
```

---

### 2. `using namespace std;`
Everything in iostream lives inside a container called `std` (standard). This line lets you skip writing `std::` before every `cout` and `cin`.

```cpp
// Without it:
std::cout << "Hello";

// With it:
cout << "Hello";  // much cleaner!
```

---

### 3. Variables
A variable is a **named box that stores a value** in memory.

```cpp
int age = 20;       // box named "age" stores 20
string name = "Raj"; // box named "name" stores "Raj"
```

---

### 4. Data Types
Tells C++ **what kind of data** to store — so it allocates the right amount of memory.

| Type | Stores | Example |
|---|---|---|
| `int` | Whole numbers | `int x = 10;` |
| `float` | Decimal (7 digits) | `float f = 3.14;` |
| `double` | Decimal (15 digits) | `double d = 3.14159;` |
| `char` | Single character | `char c = 'A';` |
| `bool` | True or false | `bool b = true;` |
| `string` | Text / words | `string s = "hello";` |

---

## 💻 First Program

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 20;
    double gpa = 8.5;
    char grade = 'A';
    bool isStudent = true;
    string name = "Your Name";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;

    return 0;
}
```

---

## 🧠 Key Takeaways

- `#include <iostream>` loads the I/O tools
- `using namespace std` removes the need to type `std::` every time
- Variables are named memory boxes
- Data types tell C++ how much memory to reserve
- Type must match value — `int x = 3.9` silently stores `3` (common bug!)
- As a beginner, focus on `int`, `double`, `string`, and `bool` first

---

## 📅 Progress Tracker

| Day | Topic | Status |
|---|---|---|
| Day 01 | iostream, namespace, variables, data types | ✅ Done |
| Day 02 | Operators & expressions | 🔜 |
| Day 03 | Conditionals (if/else, switch) | 🔜 |
| Day 04 | Loops (for, while, do-while) | 🔜 |
| Day 05 | Functions | 🔜 |

---

## 🎯 Goal
Master DSA with C++ to crack **placement interviews** and **FAANG** rounds.

---

*Learning in public — one day at a time.* 💪