#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    int number = 123456;
    char buffer[25];
    //itoa(number,string,10);
	//没有字符串
	//sprintf(buffer, "%s", number);
	sprintf(buffer, "%d", number);
    printf("integer=%d buffer=%s\n",number,buffer);
	cout<<buffer<<endl;
    return 0;
}
/*
test ok
$ ./a
integer=123456 buffer=123456
123456
*/