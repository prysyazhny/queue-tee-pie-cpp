#include <iostream>

#include "src/hello.hpp"
#include "src/cutie.hpp"
#include "src/queuetrees.hpp"

int main()
{
  // Create a bunch of objects that implement the Cutie base class
  Puppy puppy;
  Kitty kitty;
  PygmyMarmoset marmoset;

  // Create a queue data structure
  QueueTees queue;

  // The size of the queue should equal zero since there are no objects in it
  std::cout << queue.size() << std::endl;

  // Add the cuties to the queue
  queue.enqueue(puppy);
  queue.enqueue(kitty);
  queue.enqueue(marmoset);

  // The size of the queue should equal three since there are three objects in it
  std::cout << queue.size() << std::endl;

  // The first dequeue should return the puppy
  std::cout << queue.dequeue()->get_description() << std::endl;

  // The second dequeue should return the kitty
  std::cout << queue.dequeue()->get_description() << std::endl;

  // The third dequeue should return the pygmy marmoset
  std::cout << queue.dequeue()->get_description() << std::endl;
}