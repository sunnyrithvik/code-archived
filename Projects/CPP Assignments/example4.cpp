#include<iostream>
#include<string.h>
using namespace std;
main() { 
   char s[] = "Hello\0Hi";
   cout<<strlen(s)<<" "<<sizeof(s);
}