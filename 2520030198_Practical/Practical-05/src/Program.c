#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<time.h> // for CLOCK_PER_SEC and clock() system call 
int main()
{
int fd[2]; // parameter for anonymus pipe 
int data; // varaible that writes data to pipe 
int start,end; // variable that takes start and end times 
double timetaken , communicationEfficiency; // 
pipe(fd); //creating a anonyumus pipe 
start=clock(); // sorting the start time 
if(fork()==0) // creating a child as cosumer 
{
close(fd[1]); // clsoing the write end of the pipe
printf("consumer \n"); // starting the cosumer 
for(int i=0;i<5;i++) // getting the cosumer data from the pipe 
{
read(fd[0],&data,sizeof(data)); // cosumer is rading the data from pipe 
printf("consumed %d\n", data); // printing the read data 
}
close(fd[0]); // closing the read end of pipe in the child 
}
else 
{
close(fd[0]);// closing the read end of pipe in tht parent 
printf("producer \n"); // initalizing the parent with producer 
for(int i=1;i<=5;i++) // defining the producer data 
{
data=i * 10; // initialzing the data values in the producer 
write(fd[1],&data,sizeof(data)); // ritinng t]data into th e pipe
printf("produce %d\n", data); // printing the produced data 
}
close(fd[1]); // clos write e dn og pipe 
wait(NULL);  // parent waits for child to complte 
end=clock(); // cloasing clock to take the communication time 
timetaken=(double)(end-start)/CLOCKS_PER_SEC; // calculating the overall time 
printf("communication time is %lf\n",timetaken); // printing the timetaken 
communicationEfficiency=(5)/timetaken;
printf("communication efficency %lf\n",communicationEfficiency);
}
}




