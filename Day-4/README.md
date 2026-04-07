# Day 04 — Pattern Printing in C++ 🔷

> Where loops meet logic — printing shapes with code.

---

## 📌 What I Learned Today

### Understanding Pattern Printing

Pattern printing is one of the most important exercises for a beginner because it teaches you how to **think in rows and columns** — which is the exact same thinking you need for 2D arrays, matrices, and grid-based DSA problems later.

Every pattern is built using **nested loops** — one loop for the rows and another loop inside it for the columns. The outer loop controls how many rows to print and the inner loop controls what gets printed on each row.

---

### What is a Nested Loop?

A nested loop is simply a **loop inside another loop**. The outer loop runs once, and for each run of the outer loop, the inner loop completes all its repetitions. This is what creates the row-by-row structure of every pattern.

---

## 🔷 Patterns I Practiced Today

### 1. Square Pattern
A solid grid of stars arranged in equal rows and columns — like a filled square. Both the outer and inner loop run the same number of times, giving equal width and height.

---

### 2. Right-Angled Triangle Pattern
A triangle that starts with 1 star on the first row and adds one more star on every row going down. The inner loop runs as many times as the current row number — teaching the relationship between row number and column count.

---

### 3. Inverted Triangle Pattern
The opposite of the right-angled triangle — starts with the most stars at the top and reduces by one on every row going down. Great for understanding how to count backwards.

---

### 4. Number Pattern
Instead of printing stars, this pattern prints the row number or a sequence of numbers on each row. It reinforces the idea that you can print anything inside a loop — not just symbols.

---

### 5. Pyramid Pattern
A centered triangle that looks like a proper pyramid. This one introduces the concept of **printing spaces before the stars** to create the centered alignment — teaching that blank space is just as important as the content itself.

---

### 6. Diamond Pattern
A full diamond shape — a pyramid on top combined with an inverted pyramid on the bottom. One of the most satisfying patterns to get right, and it combines everything learned in the previous patterns.

---

## 🧠 Key Takeaways

- Pattern printing is not just about shapes — it builds the **nested loop thinking** that DSA problems demand
- The outer loop always controls **rows**, the inner loop always controls **columns**
- Spaces are not empty — they are characters too, and placing them correctly is part of the logic
- Once you can print any pattern, you can traverse any 2D grid or matrix — same thinking, different data
- Pyramid and diamond patterns are commonly asked in **placement written tests and interviews**
- The real skill here is not memorizing patterns but understanding **how row number and column count relate to each other**

---

## ⚡ Pattern Thinking Formula

| What you want | How to think |
|---|---|
| Same stars every row | Inner loop runs fixed times |
| Increasing stars per row | Inner loop runs = row number |
| Decreasing stars per row | Inner loop runs = total - row number |
| Centered pattern | Print spaces first, then stars |
| Diamond | Upper half + lower half separately |

---

## 📅 Progress Tracker

| Day | Topic | Status |
|---|---|---|
| Day 01 | iostream, namespace, variables, data types | ✅ Done |
| Day 02 | If / else statements | ✅ Done |
| Day 03 | For loops — Fibonacci, prime, factorial & more | ✅ Done |
| Day 04 | Pattern printing with nested loops | ✅ Done |
| Day 05 | While & do-while loops | 🔜 |
| Day 06 | Functions | 🔜 |

---

## 🎯 Goal
Master DSA with C++ to crack **placement interviews** and **FAANG** rounds.

---

*Learning in public — one day at a time.* 💪