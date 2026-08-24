# Skill-02: Interactive Command Loop and Keyboard Input

## Aim

To create a simple interactive command loop that accepts user input, handles exit conditions, manages keyboard input, and supports multi-character commands.

## Objective

- Create a main interactive loop.
- Display a command prompt.
- Read input from the keyboard.
- Handle the `exit` condition.
- Manage the input buffer.
- Process Enter key input.
- Support multi-character input.
- Test user interaction.

## Description

This practical implements a simple shell-like interactive command loop in C. The program displays a prompt `myshell>`, accepts input from the user using the `read()` system call, stores the input in a character buffer, and displays the entered input.

The program continues to accept input repeatedly until the user enters the `exit` command. This demonstrates basic keyboard input handling, input buffering, loops, and conditional statements in Linux.

## Interactive Command Loop

1. **Main Loop:**  
   A `while` loop is used to repeatedly accept input from the user.

2. **Display Prompt:**  
   `printf()` displays `myshell>` before each input.

3. **Read User Input:**  
   The `read()` system call reads input from the keyboard and stores it in `buf[100]`.

4. **Exit Condition:**  
   The program checks whether the entered input is `exit`. If it is, the loop terminates.


   **Keyboard Input and Command Handling**
Capture Keyboard Input:
The read() system call captures the input entered through the keyboard.
Input Buffer:
The character array buf[100] temporarily stores the user's input.
Enter Key:
When the user presses Enter, the input is completed and processed by the program.
Multi-Character Input:
The program can accept multiple characters and words such as hello, welcome, process, and os practical.
User Interaction:
Different inputs are entered and displayed to verify that the interactive loop works correctly.
Functions and System Calls Used
