#include <iostream>
#include "clogger.h"

using namespace std;

int main()
{
  string msg1 = "first msg";
  string msg2 = "second msg";

  int nNum = 10;

  CLogger::getLogger()->Log("msg to be loaded");
  CLogger::getLogger()->Log(msg1);
  LOGGER->Log(" Msg is: %s Num is: %d", msg2.c_str(), nNum);
  return 0;
}
