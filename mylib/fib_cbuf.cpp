#include "mylib/fib_cbuf.hpp"

namespace mylib
{

  void calc_fib_cbuf(int max_iter, ICBuffer* icb)
  {
    int t,i1=1,i2=0;
  
  
    while(max_iter-- >0)
    {
      icb->add(i1);
      t=i2;
      i2=i1;
      i1+=t;
    }
  }

}
