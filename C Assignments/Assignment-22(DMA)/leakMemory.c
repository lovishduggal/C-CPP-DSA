// Write a program to demonstrate memory leak in C.
#include<stdio.h>
void leak()
{
  int *p=(int*)malloc(sizeof(int));
  p=NULL;
  //when this function ends and control return from where leak function call (in main() block)
  //p (pointer variable) destroy bcz it is SMA variable but DMA variable(block) is not destroy which is created by malloc()
  //So,DMA variable consume memmory,that memory is not useful for us that was why this memory is known as leak memory.
  //Ways to handle leak memory
  //1.If we require DMA block then return (address of DMA var).
  //2.I we does not require DMA block then use free() function in order to release the memory occupy by DMA block.EX->free(address of DMA var)
}
int main()
{
  leak();
  return 0;
}