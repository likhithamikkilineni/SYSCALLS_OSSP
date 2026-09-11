#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
int main()
{
char message[100];
char response[100];
int fd1, fd2;
printf("Enter message: ");
fgets(message, sizeof(message), stdin); // reads msg from user (keyboard)
fd1 = open("server_fifo", O_WRONLY);
write(fd1, message, sizeof(message));
close(fd1);
fd2 = open("client_fifo", O_RDONLY); // reponse from server
read(fd2, response, sizeof(response));
printf("Server says: %s\n", response);
close(fd2);
 return 0;
}
