#include <iostream>
#include <thread>
void hello() {
  std::cout << "helloworld\n";
}
int main() {
  std::thread t(hello);
  std::thread t2(hello);
  std::thread t3(hello);
  t.join();
  t2.join();
  t3.join();
  return 0;
}
