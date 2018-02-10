#include <iostream>
#include <thread>

int main() {
  using namespace std::chrono_literals;
  int i, c;
  char fcolor[][10] = {
      "\033[1;31m", "\033[1;32m", "\033[1;33m", "\033[1;34m",
      "\033[1;35m", "\033[1;36m", "\033[1;37m",
  };
  std::cout << fcolor[2] << "\n\t\tLOADING...\n\n\033[0m";
  for (i=0,c = 0;c < 10; i++,c++) {
    if(i==20)
      break;
    if (c == 7)
      c = 0;
    std::cout << fcolor[c] << "\e[?25l\r\t\t   \u280B" << std::flush;
    std::this_thread::sleep_for(0.10s);
    std::cout << "\r\t\t   \u2819" << std::flush;
    std::this_thread::sleep_for(0.10s);
    std::cout << "\r\t\t   \u2838" << std::flush;
    std::this_thread::sleep_for(0.10s);
    std::cout << "\r\t\t   \u2834" << std::flush;
    std::this_thread::sleep_for(0.10s);
    std::cout << "\r\t\t   \u2826" << std::flush;
    std::this_thread::sleep_for(0.10s);
    std::cout << "\r\t\t   \u2807\033[0m" << std::flush;
    std::this_thread::sleep_for(0.10s);
  }
  std::cout<<"\e[?25h\n\n";
  return 0;
}