#include "stdio.h"
#include <sys/stat.h> 
#include <fcntl.h>
void get_tmp()
{
	FILE *fp;
	char tmp[32];
	int cnt;
	fp=open("/sys/devices/virtual/thermal/thermal_zone0/temp",O_RDONLY);
	if(fp<0) {printf("error\r\n");return;}
	memset(tmp,0,32);
	if((cnt=read(fp,tmp,32))>0) printf("t:%s",tmp);
	close(fp);
}

void main()
{
	int i=0;
	for(i=0;i<5000;i++)
	{
	 get_tmp();
	}

}
