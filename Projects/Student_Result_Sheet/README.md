# Student Result Sheet (C Project)

A small console project that builds a student result sheet step by step.
It practises the C topics already learned: variables, data types, arrays,
loops, if-else and switch-case.

## Build Plan

- [x] **Step 1:** Take one student's name, roll and marks of 5 subjects as input, and display them — `01_student_input_display.c`
- [ ] **Step 2:** Calculate total marks, percentage and grade (A+, A, A-, B, C, D, F) using if-else
- [ ] **Step 3:** Handle many students with arrays — a full class result sheet
- [ ] **Step 4:** Class statistics — highest total, lowest total and class average
- [ ] **Step 5:** Final program with a menu (add students, show the sheet, search by roll) using switch-case

## Subjects

Bangla, English, Math, Science, ICT — each out of 100.

## Concepts Practised

- Variables and data types (`03`, `04`)
- Arrays and loops with arrays (`11`, `13`)
- Later steps: if-else grading (`09`), switch-case menu (`10`)

## How to Run

```bash
gcc 01_student_input_display.c -o result
./result
```

Example input and output (Step 1):

```
Name: Rahim
Roll: 12
Marks:
  Bangla   : 85
  English  : 78
  Math     : 92
  Science  : 88
  ICT      : 95
```
