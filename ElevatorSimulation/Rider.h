// COMSC-200
// Assignment 9 (Elevator v2)
// The instructor's solutions file

#ifndef Rider_h
#define Rider_h

struct Rider
{
  const int from, to;
  const bool goingUp, goingDown;
  Rider(int,int); 
  Rider& operator=(const Rider&);
};

#endif
