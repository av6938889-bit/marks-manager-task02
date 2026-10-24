# Task 02 — Marks Manager

A simple C++ console program that reads marks for multiple subjects and reports the total, average, highest mark, lowest mark, and a letter grade.

## Features

- Stores marks in a `vector` (a resizable array-like container).
- Uses a separate function for each calculation: total, average, highest, lowest, and letter grade.
- Rejects marks below 0 or above 100 and asks again.
- Validates that the number of subjects is a positive whole number.
- Displays results neatly to two decimal places.

## Grade scale

The letter grade is based on the average:

| Average | Grade |
|---|---|
| 90–100 | A |
| 80–89.99 | B |
| 70–79.99 | C |
| 60–69.99 | D |
| 50–59.99 | E |
| Below 50 | F |

This is a simple grading scale chosen for this project; replace it if your internship brief specifies another scale.

## Compile and run

You need a C++ compiler such as `g++`.

On macOS or Linux, open Terminal in this folder and run:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o marks_manager
./marks_manager
```

On Windows with MinGW, run:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o marks_manager.exe
marks_manager.exe
```

## Example

```text
=== Marks Manager ===
Enter the number of subjects: 3
Enter marks for subject 1 (0-100): 85
Enter marks for subject 2 (0-100): 92
Enter marks for subject 3 (0-100): 78

=== Results ===
Total marks : 255.00 / 300
Average     : 85.00
Highest     : 92.00
Lowest      : 78.00
Letter grade: B
```

## Files

- `main.cpp` — program source code.
- `README.md` — project description and instructions.
