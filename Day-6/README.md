# Day 06 — Number System Conversions in C++ 🔢

> Understanding how computers actually see numbers.

---

## 📌 What I Learned Today

### Why Number Systems Matter

Computers don't understand numbers the way humans do. Under the hood, everything is **binary — just 0s and 1s**. As a programmer, understanding how numbers convert between different systems is not just a theory topic — it directly connects to **bitwise operators, memory, and low-level programming** that you will use throughout your DSA journey.

---

## 🔢 Number Systems at a Glance

| System | Base | Digits Used | Example |
|---|---|---|---|
| Decimal | 10 | 0 - 9 | 25 |
| Binary | 2 | 0, 1 | 11001 |
| Octal | 8 | 0 - 7 | 31 |

---

## 🔄 Conversions I Learned Today

### 1. Decimal to Binary

Decimal is the number system humans use every day (base 10). Binary is what computers use (base 2 — only 0s and 1s).

**How it works:**
Repeatedly divide the decimal number by 2 and collect the remainders. Read the remainders from **bottom to top** to get the binary number.

**Example — 25 to Binary:**
- 25 ÷ 2 = 12 remainder **1**
- 12 ÷ 2 = 6 remainder **0**
- 6 ÷ 2 = 3 remainder **0**
- 3 ÷ 2 = 1 remainder **1**
- 1 ÷ 2 = 0 remainder **1**

Read bottom to top → **11001**

---

### 2. Binary to Decimal

Going the other way — converting a binary number back into a decimal that humans can read.

**How it works:**
Multiply each binary digit by 2 raised to the power of its position (starting from 0 on the right). Add all the results together.

**Example — 11001 to Decimal:**
- 1 × 2⁴ = 16
- 1 × 2³ = 8
- 0 × 2² = 0
- 0 × 2¹ = 0
- 1 × 2⁰ = 1

16 + 8 + 0 + 0 + 1 = **25**

---

### 3. Decimal to Octal

Octal uses base 8 — digits from 0 to 7. It is a compact way to represent binary since every 3 binary digits map to exactly one octal digit.

**How it works:**
Repeatedly divide the decimal number by 8 and collect the remainders. Read the remainders from **bottom to top** to get the octal number.

**Example — 25 to Octal:**
- 25 ÷ 8 = 3 remainder **1**
- 3 ÷ 8 = 0 remainder **3**

Read bottom to top → **31**

---

### 4. Binary to Octal

Converting binary directly to octal without going through decimal first.

**How it works:**
Group the binary digits into sets of **3 from right to left**. Convert each group of 3 bits into its octal equivalent (0 to 7).

**Example — 11001 to Octal:**
- Group: 011 | 001
- 011 = **3**
- 001 = **1**

Result → **31**

---

## 🧠 Key Takeaways

- Everything inside a computer is ultimately stored in **binary** — understanding this makes you a better programmer
- Decimal to binary uses **repeated division by 2**, remainders read bottom to top
- Binary to decimal uses **powers of 2** multiplied by each bit
- Decimal to octal uses **repeated division by 8**, same pattern as binary conversion
- Binary to octal is fastest by **grouping 3 bits at a time** — no division needed
- Octal and binary are closely related — every 3 binary digits = 1 octal digit
- These conversions directly connect to **bitwise operators** you learned yesterday
- Number system knowledge is tested in **placement written exams** very frequently

---

## ⚡ Quick Reference

| Decimal | Binary | Octal |
|---|---|---|
| 0 | 0000 | 0 |
| 1 | 0001 | 1 |
| 2 | 0010 | 2 |
| 3 | 0011 | 3 |
| 4 | 0100 | 4 |
| 5 | 0101 | 5 |
| 6 | 0110 | 6 |
| 7 | 0111 | 7 |
| 8 | 1000 | 10 |
| 10 | 1010 | 12 |
| 25 | 11001 | 31 |

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
| Day 07 | While & do-while loops | 🔜 |
| Day 08 | Functions | 🔜 |

---

## 🎯 Goal
Master DSA with C++ to crack **placement interviews** and **FAANG** rounds.

---

*Learning in public — one day at a time.* 💪cd