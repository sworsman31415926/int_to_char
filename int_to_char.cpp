/*int转char*的，不可以转数组的*/
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	int a = 123;
	ostringstream s;
	s << a;
    /*
	char out[20];
	out = s.str();
	$ g++ int_to_char.cpp
	int_to_char.cpp: In function ‘int main()’:
	int_to_char.cpp:10:6: error: incompatible types in assignment of ‘std::basic_ostringstream<char>::__string_type’ {aka ‘std::basic_string<char>’} to ‘char [20]’
	   10 |  out = s.str();
		  |  ~~~~^~~~~~~~~

    */	
    char* out;
	string temp_s = s.str();
	/*
    out = (char*)temp_s.c_str();
	$ g++ int_to_char.cpp
	int_to_char.cpp: In function ‘int main()’:
	int_to_char.cpp:21:9: error: incompatible types in assignment of ‘char*’ to ‘char [20]’
    21 |     out = (char*)temp_s.c_str();
      |     ~~~~^~~~~~~~~~~~~~~~~~~~~~~

	*/
	out = (char*)temp_s.c_str();
	cout <<a<< endl;
	return 0;
}
/*$ ./a
123
*/