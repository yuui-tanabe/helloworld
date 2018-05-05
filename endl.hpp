#include <iostream>
namespace std
{
  template <class charT, class traits>
  basic_ostream<charT,traits>& winendl (basic_ostream<charT,traits>& os)
  {
    os << "\r\n";
    return os;
  }
}
