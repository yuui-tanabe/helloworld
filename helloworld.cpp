#include <iostream>
#include <endl.hpp>

using namespace std;
int main(void)
{
  #ifdef __MINGW32__
  cout << "Hello World" << winendl;
  #else
  cout << "Hello Worlds << endl;
}
