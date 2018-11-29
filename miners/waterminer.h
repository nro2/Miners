#ifndef WATERMINER_H
#define WATERMINER_H

#include <string>
#include <iostream>
#include "miner.h"

using namespace std;


class waterminer : public miner
{
	public:

		waterminer(int num, string rsc) : miner(num, rsc){}			
		void start();
		void stop();
		void collect();
		void detect();

};

#endif

