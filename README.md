# ⚡ C++ Modules (CPP 00 – CPP 09)

A comprehensive suite of C++98 engineering modules focused on Object-Oriented Programming (OOP), manual memory management, template metaprogramming, design patterns, and standard library algorithms (STL).

## 📖 Overview

This repository tracks the evolution from procedural C programming to robust Object-Oriented Software Engineering in C++98. The focus lies on understanding low-level mechanics behind object lifecycles, memory safety, type casting, abstraction layers, and high-performance data structures built under strict technical constraints.

## ⚙️ Technical Standards & Architecture

* **Standard:** C++98 compiled with `-Wall -Wextra -Werror -std=c++98`.
* **Class Design:** Rigorous adherence to the **Orthodox Canonical Form** (Default Constructor, Copy Constructor, Assignment Operator `operator=`, Destructor).
* **Memory Management:** Implementation of **RAII** (*Resource Acquisition Is Initialization*). Zero memory leaks guaranteed across all allocations (audited using Valgrind/Sanitizers).
* **Exception Safety:** Custom exception handling (`std::exception`) ensuring exception-safe resource management and clean execution flow.
* **Standard Library:** Progressive mastery of low-level streams up to optimal container selection in the Standard Template Library (STL).

---

## 🗺️ Module Breakdown

| Module | Focus | Key Technical Concepts & Implementation |
| :--- | :--- | :--- |
| **CPP 00** | *Namespaces & Base Classes* | `std::iostream`, namespaces, class members, member functions, initialization lists, static members. |
| **CPP 01** | *Memory Allocation & Pointers* | Stack vs Heap allocation (`new`/`delete`), references vs pointers, pointers to member functions, file I/O streams. |
| **CPP 02** | *Operator Overloading & Fixed-Point* | Ad-hoc polymorphism, Orthodox Canonical Class Form, fixed-point number representation, operator overloading (`+`, `-`, `*`, `/`, `++`, `--`, comparison). |
| **CPP 03** | *Inheritance & Class Hierarchies* | Single & multiple inheritance, base/derived class construction order, virtual inheritance resolving the *Diamond Problem*. |
| **CPP 04** | *Polymorphism & Interfaces* | Subtype polymorphism, virtual destructors, pure virtual functions, abstract base classes (interfaces), deep copy verification. |
| **CPP 05** | *Exception Handling & Hierarchies* | `try/catch` execution blocks, nested custom exception classes, exception safety guarantees during object instantiation and operations. |
| **CPP 06** | *C++ Casts & Serialization* | C++ explicit casting operators (`static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast`), scalar type conversion, RTTI, binary serialization. |
| **CPP 07** | *Templates & Metaprogramming* | Function templates, class templates, template specialization, generic algorithms (`iter`, generic `Array<T>`). |
| **CPP 08** | *STL Containers & Iterators* | Sequential containers (`std::vector`, `std::list`), stack adaptors, standard iterators, generic container algorithms (`easyfind`, `Span`, iterable `MutantStack`). |
| **CPP 09** | *Advanced STL & Data Structures* | Time-complexity optimization, container evaluation (`std::map`, `std::stack`, `std::deque`, `std::vector`), Reverse Polish Notation (RPN), Ford-Johnson merge-insertion sorting algorithm (*PmergeMe*). |

---

## 🛠️ Repository Structure & Execution

Each module contains subdirectories for individual exercises with dedicated Makefiles.

```bash
# Navigate to a specific exercise
cd CPP05/ex02

# Compile with strict C++98 flags
make

# Execute binary
./form_execution
