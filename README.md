## 📚 About This Project

Programming in C without the standard library can feel a bit like trying to build furniture without tools 🛠️.  
The goal of this project is to better understand how some of the most fundamental C functions actually work by rebuilding them from scratch.

This project is part of my software engineering journey at 42 Berlin, where the focus is not only on writing code, but on understanding what happens behind the abstractions 🚀

In short: this repository is my own reimplementation of a selection of functions from the standard C library (`libc`).

Each function:
- follows the original prototype and expected behavior
- is implemented according to the official man pages
- is written manually to deepen understanding of memory management, strings, pointers, and low-level programming concepts

The only intentional difference is the naming convention: all recreated functions use the `ft_` prefix.  
For example:

strlen   -> ft_strlen

memcpy   -> ft_memcpy

atoi     -> ft_atoi
