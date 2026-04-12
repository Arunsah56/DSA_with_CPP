# Day 07 — Loops, Switch & Scope in C++ 🔄

> Taking full control of how and when my program runs.

---

## 📌 What I Learned Today

Today was a power-packed day — covering while loops, do-while loops, break, continue, switch statements, and the concept of variable scope. These are the tools that give you **complete control over the flow of your program**.

---

## 🔄 While Loop

A `while` loop is used when you want to **repeat something but don't know exactly how many times** upfront. It keeps running as long as the condition is true and stops the moment it becomes false.

The key difference from a `for` loop is that a `while` loop is condition-driven — you use it when the number of repetitions depends on what happens during the program, not a fixed count decided beforehand.

**When to use:** Reading input until the user types a specific value, running a game loop until the player loses, or processing data until a file ends.

---

## 🔄 Do-While Loop

A `do-while` loop is almost the same as a while loop with **one important difference** — it always runs at least once, even if the condition is false from the start.

The condition is checked **after** the block runs, not before. This makes it perfect for situations where you want something to happen first and then decide whether to repeat.

**When to use:** Showing a menu to the user and asking for input — you always want to show the menu at least once before checking if the user wants to continue.

---

## ⚡ Difference — For vs While vs Do-While

| Loop | Use when | Condition checked |
|---|---|---|
| `for` | You know the exact count | Before each iteration |
| `while` | Count is unknown, condition-driven | Before each iteration |
| `do-while` | Must run at least once | After each iteration |

---

## 🛑 Break Statement

`break` is used to **immediately exit a loop or switch** before it naturally finishes. The moment the program hits `break`, it jumps out of the loop and continues with the code after it.

**When to use:** Searching for a value in a list — once you find it, there's no point continuing the loop. Break out immediately.

---

## ⏭️ Continue Statement

`continue` is used to **skip the current iteration** and jump straight to the next one. Unlike `break` which exits the loop entirely, `continue` just skips what's left in the current round and moves on.

**When to use:** Printing all numbers from 1 to 10 but skipping multiples of 3 — use `continue` when the condition hits and move to the next number.

---

## 🔀 Switch Statement

A `switch` statement is a cleaner alternative to writing multiple `if-else if` chains when you are comparing **one variable against many specific values**.

Instead of checking the same variable over and over with `if`, you give switch the variable and define `case` blocks for each possible value. The matching case runs and `break` exits the switch.

**When to use:** Building a menu system, checking the day of the week, handling user choices — anywhere you have one variable with many possible fixed values.

> **Important:** Always add `break` at the end of each case — without it, the program will "fall through" and run the next case too, which is usually a bug.

---

## 📦 Scope of a Variable

Scope refers to **where in your program a variable can be accessed**. A variable only exists and is accessible within the block it was declared in — outside that block, it simply doesn't exist.

### Types of Scope

**Local Scope** — A variable declared inside a function, loop, or block `{}` only exists within that block. Once the block ends, the variable is destroyed.

**Global Scope** — A variable declared outside all functions exists throughout the entire program and can be accessed from anywhere.

> **Best practice:** Prefer local variables over global ones. Global variables can be changed from anywhere in the code, which makes bugs harder to track down as your programs grow larger.

---

## 🧠 Key Takeaways

- `while` loop is for unknown repetitions driven by a condition
- `do-while` guarantees the block runs **at least once** — condition is checked after
- `break` exits the loop immediately — useful in search operations
- `continue` skips the current iteration — useful for filtering
- `switch` is cleaner than long `if-else if` chains when checking one variable against fixed values
- Always use `break` inside switch cases to prevent unwanted fall-through
- Variables only live within the `{}` block they are declared in — that is their scope
- Global variables are accessible everywhere but should be used sparingly

---

## ⚡ Quick Comparison — Break vs Continue

| Statement | What it does | Loop ends? |
|---|---|---|
| `break` | Exits the loop entirely | ✅ Yes |
| `continue` | Skips current iteration, continues loop | ❌ No |

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
| Day 08 | Functions | 🔜 |
| Day 09 | Arrays | 🔜 |

---

## 🎯 Goal
Master DSA with C++ to crack **placement interviews** and **FAANG** rounds.

---

*Learning in public — one day at a time.* 💪