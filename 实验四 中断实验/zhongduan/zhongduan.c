#include <reg51.h>


void main()
{

 EA=1;
 EX0=1;
 IT0=1;

 while(1)
 {
 
 
 }
}

void int0_srv(void)interrupt 0
{
 P1=~P1;
}