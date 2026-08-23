# Practical-03: Process Creation and Process State Observation Using `fork()`

## Aim

To create a parent and child process using the `fork()` system call, display the Process ID (PID) and Parent Process ID (PPID), and observe process state transitions using Linux monitoring tools.

## Problem Statement

1. Develop a C program using `fork()` that creates a parent and child process.
2. Display the Process ID (PID), Parent Process ID (PPID), and process states at different stages of execution.
3. Design an experiment to observe process state transitions (Ready, Running, Waiting, Terminated) using Linux monitoring tools such as `ps`, `top`, and `/proc`.
4. Document the observations.

## Process

* Create a parent and child process using `fork()`.
* Display the Parent PID using `getpid()`.
* Display the Child PID using `getpid()`.
* Display the Parent PID of the child using `getppid()`.
* Run the program and observe both processes.
* Use `ps` to view the running processes.
* Use `top` to monitor the process state.
* Use `/proc/<PID>/status` to check the detailed process information.

## Functions and Commands Used

* `fork()` – Creates a child process.
* `getpid()` – Returns the current process ID.
* `getppid()` – Returns the parent process ID.
* `ps` – Displays running processes.
* `top` – Shows real-time process information.
* `/proc/<PID>/status` – Displays detailed process status.

## Compilation and Execution

### Step 1: Compile the Program
gcc filename.c

### Step 2: Run the Program
./a.out

### Step 3: View Process Information
ps 


### Step 4: Monitor Running Processes
top

### Step 5: Check Process Status
cat /proc/325/status


> Replace `<PID>` with the child process ID obtained from the `ps` command.

