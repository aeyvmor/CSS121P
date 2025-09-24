# Algorithm Design Lectures - Study Guide

## Table of Contents

- [Part 1: Intro to Algorithm Design](#part-1-intro-to-algorithm-design) - [📺 Lecture](https://www.youtube.com/watch?v=bki-ygeIKJo)
- [Part 2: Constants, Variables, and Expressions](#part-2-constants-variables-and-expressions) - [📺 Lecture](https://www.youtube.com/watch?v=0kE2s8kTico)
- [Part 3: Arithmetic, String, and Relational Expressions](#part-3-arithmetic-string-and-relational-expressions) - [📺 Lecture](https://www.youtube.com/watch?v=OJusYq1Guco)
- [Part 4: Relational and Logical Expressions](#part-4-relational-and-logical-expressions) - [📺 Lecture](https://www.youtube.com/watch?v=PL3f7mBqPfk)
- [Part 5: Logical Operators and Expression Evaluation](#part-5-logical-operators-and-expression-evaluation) - [📺 Lecture](https://www.youtube.com/watch?v=hE9e6Bt0tZA)

---

## Part 1: Intro to Algorithm Design

### What is an Algorithm?

An **algorithm** is a step-by-step procedure for solving a problem. It can be sequential, include decision-making, or use repetition. Algorithms do not follow grammatical rules (no syntax) and represent high-level solutions.

### Algorithm Representation Methods

**🔹 Pseudocode**
- English-like format using written instructions
- Preferred by programmers as it resembles actual code

**🔹 Flowchart**
- Graphical or diagrammatic representation
- Uses conventional symbols to show sequence of events

### Flowcharting Fundamentals

**Core Components:** Nearly every program involves **Input → Processing → Output**

**Logic Structures:**
- Sequential execution
- Branching (for decisions)
- Looping (for repetition)
- Combinations of the above

### Essential Flowchart Symbols

<div align="center">

**🔵 Terminal (Oval) - Start/End**

<svg width="150" height="60">
  <ellipse cx="75" cy="30" rx="65" ry="25" fill="#e3f2fd" stroke="#1976d2" stroke-width="2"/>
  <text x="75" y="35" text-anchor="middle" font-family="Arial" font-size="12" fill="#1976d2">START</text>
</svg>

**📄 Input/Output (Parallelogram) - Data Flow**

<svg width="180" height="60">
  <polygon points="20,10 160,10 170,50 30,50" fill="#f3e5f5" stroke="#7b1fa2" stroke-width="2"/>
  <text x="100" y="35" text-anchor="middle" font-family="Arial" font-size="11" fill="#7b1fa2">Read: name, age</text>
</svg>

**⬜ Process (Rectangle) - Operations**

<svg width="180" height="60">
  <rect x="10" y="10" width="160" height="40" fill="#e8f5e8" stroke="#388e3c" stroke-width="2"/>
  <text x="90" y="35" text-anchor="middle" font-family="Arial" font-size="11" fill="#388e3c">total = a + b + c</text>
</svg>

**♦️ Decision (Diamond) - Conditions**

<svg width="150" height="100">
  <polygon points="75,10 140,50 75,90 10,50" fill="#fff3e0" stroke="#f57c00" stroke-width="2"/>
  <text x="75" y="50" text-anchor="middle" font-family="Arial" font-size="10" fill="#f57c00">age >= 18?</text>
</svg>

**⬡ Initialization (Hexagon) - Setup**

<svg width="160" height="60">
  <polygon points="30,10 130,10 150,30 130,50 30,50 10,30" fill="#fce4ec" stroke="#c2185b" stroke-width="2"/>
  <text x="80" y="35" text-anchor="middle" font-family="Arial" font-size="11" fill="#c2185b">counter = 0</text>
</svg>

</div>

**Connection Elements:**

**Flow Lines:** → ↓ ← ↑  
**On-Page Connector:** ⭕ (Circle with label)  
**Off-Page Connector:** 🔷 (Pentagon with label)

### Program Elements: Constants

**📊 Numeric Constants**
- **Integers:** Whole numbers (e.g., `123`, `-45`)
- **Real Numbers:** Include decimals (e.g., `3.14`, `0.5`)
- **❌ Important:** No commas or special characters (`10,000` should be `10000`)

**🔤 Character Constants**
- Single character enclosed in single quotes (`' '`)
- Can be letters, numbers, or symbols
- Examples: `'A'`, `'%'`, `'1'` (note: `'1'` is a character, not a number)

---

## Part 2: Constants, Variables, and Expressions

### 🧪 Practice Problems

1. Which are valid variable names? `age`, `1stPlace`, `total_Amount`, `while`, `_temp`
2. Evaluate: `6 / 2 + 3 * 4`
3. Result of: `"Hello" + " " + "World"`
4. True/False: Variable names are case-sensitive
5. Type of constant: `3.14159`

### Constants (Continued)

**📝 String Constants**
- Character(s) enclosed in double quotes (`" "`)
- Examples: `"glorian"`, `"."`, `"1225"`
- **Note:** Numbers in quotes are strings, not numeric values
- Must start AND end with double quotation marks

### Variables

A **variable** is a memory location with a unique name that stores one value at a time.

**📋 Variable Naming Rules**
1. Must begin with a letter
2. Contains only letters, numbers, and underscores (`_`)
3. Cannot be a reserved keyword
4. **Case-sensitive** (`total` ≠ `Total`)

**Examples:**

| ✅ Valid Names | ❌ Invalid Names | 🚫 Reason |
|----------------|------------------|-----------|
| `age` | `1stPlace` | Starts with number |
| `totalAmount` | `total-amount` | Contains hyphen |
| `x1` | `while` | Reserved keyword |
| `_temp` | `Total Amount` | Contains space |
| `myVar` | `my_var!` | Special character |

### Arithmetic Expressions

**📐 Operator Hierarchy (Order of Operations)**

**Visual Priority Pyramid**

| Priority | Operators | Description |
|:--------:|:---------:|-------------|
| **1** (Highest) | `( )` | Parentheses |
| **2** | `* / %` | Multiply, Divide, Modulus (Left → Right) |
| **3** | `+ -` | Add, Subtract (Left → Right) |
| **4** | `> < >= <= == !=` | Relational Operators |
| **5** (Lowest) | `!` then `&&` then `\|\|` | Logical: NOT, AND, OR |

**Key Operations:**
- **Division `/`:** Returns quotient
- **Modulus `%`:** Returns remainder

**Examples:**

| Expression | Step-by-Step | Result |
|------------|--------------|--------|
| `5 + 3 * 2` | `5 + (3 * 2)` | `11` |
| `(5 + 3) * 2` | `(8) * 2` | `16` |
| `10 / 3` | Integer division | `3` |
| `10 % 3` | Remainder operation | `1` |
| `2 * 4 + 6 / 2` | `(2 * 4) + (6 / 2)` | `11` |

---

## Part 3: Arithmetic, String, and Relational Expressions

### 🧪 Practice Problems

1. Difference between `9 / 4` and `9 / 4.0`?
2. Calculate: `15 % 7`
3. Concatenate: `"First"` and `"Last"` with a space
4. Evaluate: `8 > 5 && 3 <= 3`
5. Is `"apple" == "Apple"` true or false? Why?

### Advanced Arithmetic Operations

**🔢 Division Types**

| Type | Description | Example | Result |
|------|-------------|---------|---------|
| **Integer Division** | Whole ÷ Whole = Whole (drops decimals) | `3 / 2` | `1` |
| **Floating-Point** | At least one decimal = decimal result | `3 / 2.0` | `1.667` |

**⚡ Modulus (`%`) Rules**
- Both operands must be integers
- **Shortcut:** If left < right, result = left number
- Example: `20 % 114 = 20`

**Complex Examples:**

| Operation | Example | Result | Explanation |
|-----------|---------|--------|-------------|
| Integer Division | `7 / 3` | `2` | Quotient only |
| Floating-Point | `7 / 3.0` | `2.333` | Includes decimal |
| Modulus | `7 % 3` | `1` | Remainder |
| Modulus Shortcut | `5 % 10` | `5` | Left < Right |
| Mixed Operations | `10 / 4 * 2` | `5` | Left to right |

### String Expressions

**🔗 String Concatenation**
- Uses `+` operator to join strings
- **Both operands must be strings**
- Cannot mix strings and numbers directly

**Examples:**

| Expression | Result | Note |
|------------|--------|------|
| `"Hello" + " World"` | `"Hello World"` | Basic joining |
| `"A" + "B" + "C"` | `"ABC"` | Multiple concatenation |
| `"Name: " + "John"` | `"Name: John"` | Adding labels |
| `"123" + "456"` | `"123456"` | Numbers as strings |

### Relational (Comparison) Expressions

**🔍 Comparison Operators**

| Operator | Meaning | Example | Result |
|----------|---------|---------|---------|
| `>` | Greater than | `5 > 3` | `true` |
| `<` | Less than | `3 < 5` | `true` |
| `>=` | Greater than or equal | `10 >= 10` | `true` |
| `<=` | Less than or equal | `7 <= 8` | `true` |
| `==` | Equal to | `'a' == 'a'` | `true` |
| `!=` | Not equal to | `7 != 8` | `true` |

**More Examples:**

| Expression | Result | Explanation |
|------------|--------|-------------|
| `3.14 > 3` | `true` | Floating point comparison |
| `100 < 50` | `false` | 100 is not less than 50 |
| `"A" == "a"` | `false` | Case-sensitive |

---

## Part 4: Relational and Logical Expressions

### 🧪 Practice Problems

1. Fix chained comparison: `20 <= age <= 65`
2. Result of: `!(5 == 5)`
3. Evaluate: `true && false || true`
4. Verify with truth tables: `A || !A` is always true
5. Expression for "score between 50 and 100 inclusive"

### ⚠️ Common Mistakes with Relational Expressions

**❌ Chained Comparisons**
- **Wrong:** `30 <= x <= 40`
- **Why it fails:** Evaluates left-to-right, comparing boolean result to number
- **✅ Correct:** `(x >= 30) && (x <= 40)`

**Example of the Problem:**
If `x = 45`, then `30 <= 45 <= 40`:
1. `30 <= 45` → `true` (represented as 1)
2. `1 <= 40` → `true` (WRONG! Should be false)

### Logical Expressions

**📊 Operator Hierarchy**
1. **Parentheses `()`**
2. **NOT `!`**
3. **AND `&&`**
4. **OR `||`**

### Truth Tables

**🔗 AND (`&&`) - All must be true**

| A | B | A && B |
|:-:|:-:|:------:|
| T | T | **T** ← Only TRUE when both are TRUE |
| T | F | F |
| F | T | F |
| F | F | F |

**🔄 OR (`||`) - At least one must be true**

| A | B | A \|\| B |
|:-:|:-:|:--------:|
| T | T | **T** ← TRUE when at least one is TRUE |
| T | F | **T** ← |
| F | T | **T** ← |
| F | F | F ← Only FALSE when both are FALSE |

**🔄 NOT (`!`) - Inverts the value**

| A | !A |
|:-:|:--:|
| T | **F** ← Flips TRUE to FALSE |
| F | **T** ← Flips FALSE to TRUE |

---

## Part 5: Logical Operators and Expression Evaluation

### 🧪 Practice Problems

1. Evaluate: `2 + 3 * 4 == 14 && 5 > 2`
2. Order of operations in: `a + b * c > d && e || f`
3. Simplify: `!!true`
4. Result of: `10 / 2 + 3 * 2 != 11 || 4 == 4`
5. Why does `&&` have higher precedence than `||`?

### Complete Order of Operations

### Complete Order of Operations

**🎯 Full Hierarchy (Highest to Lowest Priority)**

| Priority | Category | Operators | Direction |
|:--------:|----------|-----------|:---------:|
| **1** | Parentheses | `( )` | N/A |
| **2** | Arithmetic | `*` `/` `%` | Left → Right |
| **3** | Arithmetic | `+` `-` | Left → Right |
| **4** | Relational | `>` `<` `>=` `<=` `==` `!=` | Left → Right |
| **5** | Logical | `!` (NOT) | Right → Left |
| **6** | Logical | `&&` (AND) | Left → Right |
| **7** | Logical | `\|\|` (OR) | Left → Right |

**Memory Aid: "Please Always Remember Logic"**
- **P**arentheses
- **A**rithmetic  
- **R**elational
- **L**ogical (!, &&, ||)

### Complex Expression Examples

| Expression | Step-by-Step Evaluation | Result |
|------------|-------------------------|---------|
| `5 + 3 * 2 > 10 && 4 / 2 == 2` | `(5 + (3 * 2)) > 10 && (4 / 2) == 2`<br>→ `11 > 10 && 2 == 2`<br>→ `true && true` | `true` |
| `!(5 > 3) \|\| 2 * 3 == 6` | `!true \|\| (2 * 3) == 6`<br>→ `false \|\| 6 == 6`<br>→ `false \|\| true` | `true` |
| `10 % 3 + 2 < 5 && 7 / 2 == 3` | `(10 % 3) + 2 < 5 && (7 / 2) == 3`<br>→ `1 + 2 < 5 && 3 == 3`<br>→ `3 < 5 && true`<br>→ `true && true` | `true` |
| `(8 - 2) * 3 != 18 \|\| 4 + 1 == 6` | `(6) * 3 != 18 \|\| 4 + 1 == 6`<br>→ `18 != 18 \|\| 5 == 6`<br>→ `false \|\| false` | `false` |

---

## 📝 Summary

This study guide covers fundamental concepts in Algorithm Design:

- **Algorithm definition and representation** (pseudocode and flowcharts)
- **Program elements**: constants, variables, and expressions
- **Expression types**: arithmetic, string, relational, and logical
- **Operator precedence and evaluation order**
- **Common pitfalls and best practices**

**💡 Key Takeaways:**
- Always use parentheses to clarify complex expressions
- Remember operator precedence: arithmetic → relational → logical
- Avoid chained comparisons; use logical operators instead
- Variables are case-sensitive and follow specific naming rules
- String concatenation requires both operands to be strings

