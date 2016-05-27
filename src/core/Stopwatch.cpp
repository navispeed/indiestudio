//
// Stopwatch.cpp for plazza in /home/lewis_e/rendu/cpp/cpp_plazza
// 
// Made by Esteban Lewis
// Login   <lewis_e@epitech.net>
// 
// Started on  Mon Apr 18 16:11:08 2016 Esteban Lewis
// Last update Fri May 27 14:27:11 2016 Esteban Lewis
//

#include "Stopwatch.hh"

gauntlet::core::Stopwatch::Stopwatch()
{ }

gauntlet::core::Stopwatch::~Stopwatch()
{ }

void
gauntlet::core::Stopwatch::set()
{
  gettimeofday(&startTime, NULL);
}

long
gauntlet::core::Stopwatch::ellapsedMs()
{
  struct timeval checkTime;

  gettimeofday(&checkTime, NULL);
  return ((checkTime.tv_sec - startTime.tv_sec) * 1000 +
	  (checkTime.tv_usec - startTime.tv_usec) / 1000);
}
