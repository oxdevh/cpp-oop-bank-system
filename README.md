# 🏦 Bank Management System (C++ OOP)

A comprehensive console-based **Bank Management System** developed as the capstone project for Course 11 (Object-Oriented Programming & Applications) by Dr. Mohammed Abu-Hadhoud.

---

## 🚀 Features

* **Client Management:** Add, update, delete, find, and list bank clients.
* **Transactions System:** Perform Deposits, Withdrawals, Total Balances tracking, and secure money Transfers between accounts.
* **Currency Exchange:** Integrated currency calculator, currency list viewer, and update rates interface.
* **User & Access Management:** Multi-user system with permissions control, login screens, and activity logs (`LoginRegister.txt`).
* **Persistent Storage:** File-based data persistence using text files (`Clients.txt`, `Users.txt`, `Currencies.txt`, `TransfersLog.txt`).

---

## 🛠️ Tech Stack & Architecture

* **Language:** C++
* **Paradigm:** Object-Oriented Programming (OOP)
* **Architecture:** Modular multi-header structure separating Core Classes, Screens, and Utilities.
* **Environment:** Developed and compiled on Linux using VS Code.

---

## 📁 Project Structure

The project is structured following clean architecture principles:
- `clsPerson.h`, `clsBankClient.h`, `clsUser.h`: Core business logic entities.
- `clsScreen.h`: Base class for all system screens.
- `*Screen.h`: Specific user interfaces (Transactions, Currency Exchange, Manage Users, etc.).
- `clsInputValidate.h`, `clsUtil.h`, `clsString.h`, `clsDate.h`: Custom reusable utility and validation libraries.

---

## ⚙️ How to Run

1. Ensure you have a C++ compiler installed (e.g., `g++` or MinGW).
2. Clone the repository:
   ```bash
   git clone [https://github.com/YOUR-USERNAME/cpp-oop-bank-system.git](https://github.com/YOUR-USERNAME/cpp-oop-bank-system.git)

1 Compile the main file
g++ main.cpp -o BankSystem

2 Run the executable:
./BankSystem

Developed with passion by Dev H 🚀
