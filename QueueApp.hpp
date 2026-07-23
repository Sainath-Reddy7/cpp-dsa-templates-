#ifndef QUEUEAPP_H
#define QUEUEAPP_H

#include "Queue.hpp"


#include <iostream>
#include <string>

namespace QueueSpace
{
  void Demo()
  {
    Queue<int> Q;
    int x;
    bool popstatus;

    for(int i=0; i<10; i++)
      {
	Q.enqueue(i);
      }

    std::cout << "Queue Size | Element " << std::endl;

    for(int i=0; i<10; i++)
      {
	popstatus = Q.dequeue(x);
	if (popstatus == true)
	  std::cout <<"   " << Q.size()+1 << "    " << x << " " << std::endl;
      }
  }

}

#endif
