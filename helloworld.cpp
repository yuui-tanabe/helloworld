#include <iostream>
#include <cstdlib>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>

using namespace spdlog;
using namespace std;
int main(int, char* [])
{
  auto console = stdout_color_mt("console");
  console->info("Hello World");
  exit(EXIT_SUCCESS);
}
