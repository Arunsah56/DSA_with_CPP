# Day 08 — Functions in C++ ⚙️

> Stop repeating yourself — write once, use everywhere.

---

## 📌 What I Learned Today

### Understanding Functions

A function is a **named block of code that performs a specific task**. Instead of writing the same logic again and again in different parts of your program, you write it once inside a function and simply call it whenever you need it.

Functions are the foundation of clean, organized, and reusable code. Every serious program — and every DSA solution — is built using functions.

---

## 🧱 Structure of a Function

Every function in C++ has four parts:

**Return type** — what kind of value the function sends back after it finishes. If it doesn't send anything back, use `void`.

**Function name** — what you call it by. Make it meaningful — a function that adds two numbers should be called `add`, not `x`.

**Parameters** — the inputs the function needs to do its job. These are optional — some functions need inputs, some don't.

**Body** — the actual code that runs when the function is called, written inside `{}`.

---

## 🔄 Types of Functions

### 1. Function with No Parameters and No Return Value
Does a job and finishes — doesn't need any input and doesn't send anything back. Example: a function that just prints a greeting message.

---

### 2. Function with Parameters but No Return Value
Takes input, does something with it, but doesn't send a result back. Example: a function that takes a name and prints a personalized greeting.

---

### 3. Function with Parameters and a Return Value
Takes input, processes it, and sends a result back to whoever called it. This is the most commonly used type in DSA. Example: a function that takes two numbers and returns their sum.

---

### 4. Function with No Parameters but a Return Value
Does something on its own and returns a result without needing any input. Example: a function that returns the current count of something.

---

## 📞 Function Declaration vs Definition vs Call

**Declaration (Prototype)** — tells the compiler that a function exists before it is defined. Written before `main()`. Ends with a semicolon.

**Definition** — the actual full function with its body and logic.

**Call** — where you actually use the function in your program by writing its name with the required arguments.

---

## 🔁 Recursion

Recursion is when a **function calls itself**. It is one of the most powerful concepts in DSA and is used to solve problems that can be broken down into smaller versions of the same problem.

Every recursive function has two parts:
- **Base case** — the condition where the function stops calling itself. Without this, it runs forever.
- **Recursive case** — where the function calls itself with a smaller or simpler input, moving closer to the base case.

**Classic examples of recursion:**
- Factorial of a number
- Fibonacci series
- Binary search
- Tree traversals

> **Important:** Always define the base case first. A recursive function without a base case causes infinite recursion and crashes the program.

---

## 📦 Function Overloading

C++ allows you to have **multiple functions with the same name** as long as their parameters are different — either in number or type. The compiler figures out which one to call based on the arguments you pass.

This makes your code cleaner — instead of naming functions `addInt`, `addDouble`, `addThree`, you can just call all of them `add` and let C++ decide.

---

## 🎯 Pass by Value vs Pass by Reference

**Pass by Value** — a copy of the variable is sent to the function. Changes made inside the function do NOT affect the original variable outside.

**Pass by Reference** — the actual variable is sent using `&`. Changes made inside the function DO affect the original variable. This is important for DSA problems where you need to modify arrays or variables directly.

---

## 🧠 Key Takeaways

- Functions make your code **reusable, readable, and organized**
- Every function should do **one thing and do it well**
- The return type must match what you actually return — `void` means nothing is returned
- Parameters are the inputs, return value is the output
- Recursion = a function calling itself — always needs a base case to stop
- Function overloading lets you reuse names with different parameter types
- Pass by value = copy, Pass by reference = original — knowing the difference is critical in DSA
- `main()` itself is a function — the entry point of every C++ program
- Functions are the building blocks of every algorithm you will write in DSA

---

## ⚡ Pass by Value vs Pass by Reference

| | Pass by Value | Pass by Reference |
|---|---|---|
| What is sent | A copy of the variable | The actual variable |
| Original affected? | ❌ No | ✅ Yes |
| Syntax | `void func(int a)` | `void func(int &a)` |
| When to use | When you don't want changes | When you need to modify original |

---

## 📅 Progress Tracker

| Day | Topic | Status |
|---|---|---|
| Day 01 | iostream, namespace, variables, data types | ✅ Done |
| Day 02 | If / else statements | ✅ Done |
| Day 03 | For loops — Fibonacci, prime, factorial & more | ✅ Done |
| Day 04 | Pattern printing with nested loops | ✅ Done |
| Day 05 | Operators — arithmetic, logical, bitwise & more | ✅ Done |
| Day 06 | Number system conversions | ✅ Done |
| Day 07 | While, do-while, break, continue, switch & scope | ✅ Done |
| Day 08 | Functions, recursion, overloading & pass by reference | ✅ Done |
| Day 09 | Arrays | 🔜 |
| Day 10 | Strings | 🔜 |

---

## 🎯 Goal
Master DSA with C++ to crack **placement interviews** and **FAANG** rounds.

---

*Learning in public — one day at a time.* 💪