#include <stdio.h>
#include <unistd.h>

#include "holy_thread.h"
#include "holy_test.h"
#include "pink.pb.h"

using namespace pink;

int main()
{
  Thread *t = new PinkThread(9211, 1000);

  t->StartThread();


  sleep(1000);
  return 0;
}
