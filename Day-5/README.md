# Day 05 — Operators in C++ ⚡

> Teaching my program how to calculate, compare, and decide.

---

## 📌 What I Learned Today

### Understanding Operators

An operator is a **symbol that performs an operation** on one or more values. Operators are the tools that make your program actually *do* something with the data stored in variables — without them, variables are just sitting there doing nothing.

C++ has several types of operators and each one serves a different purpose.

---

## ⚡ Types of Operators

### 1. Arithmetic Operators
These are the basic **math operators** — the ones you use to perform calculations on numbers.

| Operator | What it does | Example |
|---|---|---|
| `+` | Addition | `a + b` |
| `-` | Subtraction | `a - b` |
| `*` | Multiplication | `a * b` |
| `/` | Division | `a / b` |
| `%` | Modulo (remainder) | `a % b` |

> **Important:** When both values are integers, `/` gives an integer result — decimals are dropped. Use `double` if you need decimal output.

---

### 2. Relational (Comparison) Operators
These operators **compare two values** and return either `true` or `false`. You already used these inside `if` statements on Day 2.

| Operator | What it does | Example |
|---|---|---|
| `==` | Equal to | `a == b` |
| `!=` | Not equal to | `a != b` |
| `>` | Greater than | `a > b` |
| `<` | Less than | `a < b` |
| `>=` | Greater than or equal | `a >= b` |
| `<=` | Less than or equal | `a <= b` |

---

### 3. Logical Operators
These operators combine **multiple conditions** together. Used heavily in if statements and loops.

| Operator | What it does | Example |
|---|---|---|
| `&&` | AND — true only if both are true | `a > 0 && b > 0` |
| `\|\|` | OR — true if at least one is true | `a > 0 \|\| b > 0` |
| `!` | NOT — flips true to false | `!a` |

---

### 4. Assignment Operators
These operators **assign or update the value** of a variable in a shorthand way.

| Operator | What it does | Example |
|---|---|---|
| `=` | Assign | `a = 5` |
| `+=` | Add and assign | `a += 3` means `a = a + 3` |
| `-=` | Subtract and assign | `a -= 3` means `a = a - 3` |
| `*=` | Multiply and assign | `a *= 3` means `a = a * 3` |
| `/=` | Divide and assign | `a /= 3` means `a = a / 3` |
| `%=` | Modulo and assign | `a %= 3` means `a = a % 3` |

---

### 5. Increment & Decrement Operators
These are **shorthand operators** to increase or decrease a value by 1 — used constantly in loops.

| Operator | What it does | Example |
|---|---|---|
| `++` | Increases value by 1 | `a++` or `++a` |
| `--` | Decreases value by 1 | `a--` or `--a` |

> **Pre vs Post:**
> - `++a` — increments first, then uses the value
> - `a++` — uses the value first, then increments

---

### 6. Bitwise Operators
These operators work directly on the **binary (bits) representation** of numbers. Very important for competitive programming and optimization.

| Operator | What it does | Example |
|---|---|---|
| `&` | Bitwise AND | `a & b` |
| `\|` | Bitwise OR | `a \| b` |
| `^` | Bitwise XOR | `a ^ b` |
| `~` | Bitwise NOT | `~a` |
| `<<` | Left shift | `a << 1` |
| `>>` | Right shift | `a >> 1` |

---

## 🧠 Key Takeaways

- Operators are the **action words** of your program — without them, data just sits idle
- `=` is assignment, `==` is comparison — confusing these is one of the most common bugs in C++
- `%` (modulo) is extremely useful in DSA — used in odd/even, circular arrays, hashing
- Logical operators `&&` and `||` let you combine conditions — essential for complex if statements
- `++i` and `i++` look the same but behave differently — know the difference
- Bitwise operators are heavily used in **competitive programming** and **bit manipulation problems**
- Operator **precedence** matters — multiplication happens before addition just like in maths

---

## ⚡ Operator Precedence (High to Low)

| Priority | Operators |
|---|---|
| Highest | `++` `--` `!` `~` |
| High | `*` `/` `%` |
| Medium | `+` `-` |
| Low | `<` `>` `<=` `>=` |
| Lower | `==` `!=` |
| Lowest | `&&` then `\|\|` then `=` |

> When in doubt — use **parentheses `()`** to make the order clear.

---

## 📅 Progress Tracker

| Day | Topic | Status |
|---|---|---|
| Day 01 | iostream, namespace, variables, data types | ✅ Done |
| Day 02 | If / else statements | ✅ Done |
| Day 03 | For loops — Fibonacci, prime, factorial & more | ✅ Done |
| Day 04 | Pattern printing with nested loops | ✅ Done |
| Day 05 | Operators — arithmetic, logical, bitwise & more | ✅ Done |
| Day 06 | While & do-while loops | 🔜 |
| Day 07 | Functions | 🔜 |

---

## 🎯 Goal
Master DSA with C++ to crack **placement interviews** and **FAANG** rounds.

---

*Learning in public — one day at a time.* 💪