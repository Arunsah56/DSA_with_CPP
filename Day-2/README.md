# Day 02 — If / Else Statements in C++ 🧠

> Teaching my program how to make decisions.

---

## 📌 What I Learned Today

### Understanding If / Else

An `if/else` statement lets your program **make decisions** based on a condition. If the condition is `true`, one block runs — if it's `false`, another block runs.

```cpp
if (condition) {
    // runs if condition is true
} else if (another condition) {
    // runs if above is false and this is true
} else {
    // runs if all above are false
}
```

---

## 💻 Programs I Built Today

### 1. Odd or Even

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is Even" << endl;
    } else {
        cout << num << " is Odd" << endl;
    }

    return 0;
}
```

**Logic:** If a number divided by 2 has remainder `0`, it's even — otherwise it's odd.

---

### 2. Positive or Negative

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << num << " is Positive" << endl;
    } else if (num < 0) {
        cout << num << " is Negative" << endl;
    } else {
        cout << "The number is Zero" << endl;
    }

    return 0;
}
```

**Logic:** Check if greater than 0 (positive), less than 0 (negative), or neither (zero).

---

### 3. Student Pass or Fail

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Result: A Grade — Outstanding!" << endl;
    } else if (marks >= 75) {
        cout << "Result: B Grade — Pass with Distinction" << endl;
    } else if (marks >= 50) {
        cout << "Result: C Grade — Pass" << endl;
    } else {
        cout << "Result: Fail — Better luck next time!" << endl;
    }

    return 0;
}
```

**Logic:** Multiple conditions checked in order — the first one that matches runs.

---

## 🧠 Key Takeaways

- `if` checks a condition — runs the block if `true`
- `else if` checks another condition if the previous was `false`
- `else` is the fallback — runs if nothing above matched
- Conditions use comparison operators: `==`, `!=`, `>`, `<`, `>=`, `<=`
- `%` (modulo) gives the **remainder** of a division — very useful in logic
- Order matters — conditions are checked **top to bottom**, first match wins

---

## ⚡ Operators Used Today

| Operator | Meaning | Example |
|---|---|---|
| `==` | Equal to | `x == 5` |
| `!=` | Not equal to | `x != 5` |
| `>` | Greater than | `x > 0` |
| `<` | Less than | `x < 0` |
| `>=` | Greater than or equal | `x >= 50` |
| `<=` | Less than or equal | `x <= 100` |
| `%` | Modulo (remainder) | `x % 2 == 0` |

---

## 📅 Progress Tracker

| Day | Topic | Status |
|---|---|---|
| Day 01 | iostream, namespace, variables, data types | ✅ Done |
| Day 02 | If / else statements + 3 programs | ✅ Done |
| Day 03 | Loops (for, while, do-while) | 🔜 |
| Day 04 | Functions | 🔜 |
| Day 05 | Arrays & strings | 🔜 |

---

## 🎯 Goal
Master DSA with C++ to crack **placement interviews** and **FAANG** rounds.

---

*Learning in public — one day at a time.* 💪