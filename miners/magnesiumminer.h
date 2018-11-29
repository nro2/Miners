#ifndef MAGNESIUMMINER_H
#define MAGNESIUMMINER_H

#include <string>
#include <iostream>
#include "miner.h"

using namespace std;

class magnesiumminer : public miner
{
	public: 

		magnesiumminer(int num, string rsc) : miner(num, rsc){}
		void start();
		void stop();
		void collect();
		void detect();
};

#endif
