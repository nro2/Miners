#ifndef IRONMINER_H
#define IRONMINER_H

#include <string>
#include <iostream>
#include "miner.h"

using namespace std;

class ironminer : public miner
{
	public: 

		ironminer(int num, string rsc) : miner(num, rsc){}
		void start();
		void stop();
		void collect();
		void detect();
};

#endif
