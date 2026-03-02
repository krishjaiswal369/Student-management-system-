# Student Management System (C-Based)

A lightweight, console-based **Student Information Management System** written in C. This program uses a structured array to store student records, allowing for efficient data handling and basic database operations within a single session.

## 🛠️ Features

* **Add Student:** Register new students with unique Roll Numbers, Names, Ages, and Marks.
* **Display Records:** View a formatted list of all currently registered students.
* **Search Functionality:** Quickly find specific student details using their Roll Number.
* **Update Records:** Modify existing student information (Name, Age, or Marks) without deleting the entry.
* **Delete Student:** Remove a student record from the system; the program automatically shifts the remaining data to maintain list integrity.

## 🏗️ Data Architecture

The program is built around a `struct` (Structure) that acts as a blueprint for student data:

The system uses an array of these structures, capped at **1,000 entries** (defined by `MAX_STUDENTS`), and a global counter to track the current number of records.

---

## 💻 How to Run

### 1. Compile the Code

Use any C compiler (like `gcc`) to build the executable:

```bash
gcc student_system.c -o student_system

```

### 2. Launch the Application

```bash
./student_system

```

## 📋 Menu Preview

Upon running, you will interact with the following menu:

1. **Add Student** (Input details)
2. **Display All Students** (View table)
3. **Search Student** (Find by Roll No.)
4. **Update Student** (Edit existing)
5. **Delete Student** (Remove record)
6. **Exit**
---

**Would you like me to help you modify the code so it saves and loads the student data from a `.txt` or `.dat` file so you don't lose your data?**
