Practical-01: Linux Process Creation and Command Execution
# Linux Process Execution Using fork(), exec(), and wait()

About the Assignment:

This project demonstrates how the Linux operating system executes a command entered by a user. The program creates a new process using fork(), executes the user-entered command in the child process using an execlp system call   makes the parent process wait until the child process finishes using wait().

 System Calls Used:
#fork()

fork() is used to create a new child process from the parent process.

* Returns 0 in the child process.
* Returns the child's Process ID (PID) in the parent process.
* Both parent and child continue execution independently after the fork.

#execlp()

The exec() family of system calls is used to execute a Linux command inside the child process.

* Replaces the child process with the new program.
* The child process keeps the same PID.
* If execution is successful, the statements after execlp() are not executed.

#wait()

wait() is used by the parent process to wait until the child process completes.

* Prevents the parent from terminating before the child.
* Synchronizes the execution of both processes.
* Returns the child's exit status after completion.

## Process Execution Flow

1. The user enters a Linux command.
2. The parent process calls fork() to create a child process.
3. The child process executes the command using exec().
4. The parent process calls wait() and pauses until the child finishes.
5. After the child exits, the parent resumes execution and displays the process information.

## How Linux Executes the Command

When the user enters a command, the operating system creates a separate child process using fork(). Instead of running the same program again, the child process replaces its program with the requested Linux command using execlp(). While the command is running, the parent process waits using wait(). Once the child process finishes execution, control returns to the parent process, completing the process execution cycle.

## Outcome

This implementation demonstrates how Linux manages process creation, program execution, and synchronization using fork(), exec()lp, and wait(), while also showing the Process IDs (PIDs) of both the parent and child processes.
