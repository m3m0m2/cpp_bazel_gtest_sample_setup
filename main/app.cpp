#include "mylib/cbuffer.hpp"
#include "mylib/fib_cbuf.hpp"
#include <iostream>

using namespace std;


int main(int argc, char** argv)
{
  int i;
  mylib::CBuffer buf(4);
  mylib::calc_fib_cbuf(6,&buf);
  for(i=0;i<buf.size();i++)
    cout << "cbuf[" << i <<"] = " <<buf.get(i)<<endl;

  return EXIT_SUCCESS;
}
