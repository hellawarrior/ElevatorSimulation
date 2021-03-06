// COMSC-200
// Assignment 9 (Elevator v2)
// The instructor's solutions file
#ifndef BUILDING_H
#define BUILDING_H

#include "Floor.h"
#include "Elevator.h"


struct Building
{
  static Floor floors[];
  static Elevator elevators[];
  static const int FLOORS;
  static const int ELEVATORS;

  static void getDifferentInts(int&, int&);
  static int getPoisson(double);
  static void action(double);

  // actions
  static void placeNewRiders(double);
  static bool openDoorToDisembarkRider(int);
  static bool disembarkRider(int); // lab 8
  static bool boardRider(int); // lab 8
  //static bool waitingForMoreRiders(int); // lab 12
  //static bool doneWaitingMove(int); // lab 12
  //static bool moveableMove(int); // lab 14
  //static bool setIdleElevatorInMotion(int); // lab 14
  //static bool sendIdleElevatorToCallingFloor(int); // lab 14
};
#endif
