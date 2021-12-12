#include <reg51.h>


unsigned char volatile xdata *  Xbyte=0;



main()
{

char a=9;
int b=0x5678;

Xbyte[0x0000]=0;
Xbyte[0x0001]=1;
Xbyte[0x0002]=2;
Xbyte[0x0003]=3;
Xbyte[0x0004]=4;
Xbyte[0x0005]=5;
Xbyte[0x0006]=6;
Xbyte[0x0007]=7;

	while(1)
	  {
	   
	  
	  }

}



/*#include <reg51.h>
#include <absacc.h>




main()
{

char a=9;
int b=0x5678;

XBYTE[0x0000]=0;
XBYTE[0x0001]=1;
XBYTE[0x0002]=2;
XBYTE[0x0003]=3;
XBYTE[0x0004]=4;
XBYTE[0x0005]=5;
XBYTE[0x0006]=6;
XBYTE[0x0007]=7;

	while(1)
	  {
	   
	  
	  }

}
*/






