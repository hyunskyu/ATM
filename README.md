# Untitled

# Bear_Robotics home project

This is bear_robotics home project

# **Implement a simple ATM controller**

Write code for a simple ATM. It doesn't need any UI (either graphical or console), but a controller should be implemented and tested.

# Requirements

At least the following flow should be implemented:

Insert Card => PIN number => Select Account => See Balance/Deposit/Withdraw

For simplification, there are only 1 dollar bills in this world, no cents. Thus account balance can be represented in integer.

Your code doesn't need to integrate with a real bank system, but keep in mind that we may want to integrate it with a real bank system in the future. It doesn't have to integrate with a real cash bin in the ATM, but keep in mind that we'd want to integrate with that in the future. And even if we integrate it with them, we'd like to test our code. Implementing bank integration and ATM hardware like cash bin and card reader is not a scope of this task, but testing the controller part (not including bank system, cash bin etc) is within the scope.

A bank API wouldn't give the ATM the PIN number, but it can tell you if the PIN number is correct or not.

Based on your work, another engineer should be able to implement the user interface. You don't need to implement any REST API, RPC, network communication etc, but just functions/classes/methods, etc.

You can simplify some complex real world problems if you think it's not worth illustrating in the project.

# How to submit

Please upload the code for this project to GitHub or anywhere, and post a link to your repository below. Please attach the instruction to clone your project, build and run tests in README.md file in the root directory of the repository.

---

# How do I implementation

## Accounter

I made accounter class for management. There are some constructors in there, specially ‘copy assignment constructor’. I want to check the ID at first in DB and assign the object class.  And also there is ‘method’ like GetName, GetCash, Deposit, Withrawal as you know. I use the keyword ‘const’, because I don’t want to change in function such as cash in account.

## main

I made accounter DB and run the code for test. There are 3 people and they have different pin, id, cash each other.  ID is selected ‘123’ so program search the who have an ID ‘123’ in DB. After find it, you should put in the PIN number (default is ‘10’ you can change as you wish). If your PIN number is correct then user can select the number in console just like blow

1. Show money → Show current cash in the account
2. Deposit money → Deposit money
3. Withdrawal money → Withdrawl money

# How to run it

Tested in **Ubuntu 20.04(Linux)**

```bash
git clone https://github.com/hyunskyu/ATM.git
```

```bash
cd ./ATM //Or your own path
mkdir build && cd build
cmake ..
make
```

```bash
./ATM //run it
```
