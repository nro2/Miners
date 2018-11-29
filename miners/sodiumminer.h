#ifndef SODIUMMINER_H
#define SODIUMMINER_H

#include <string>
#include <iostream>
#include "miner.h"

using namespace std;


class sodiumminer : public miner
{
	public:

		sodiumminer(int num, string rsc) : miner(num, rsc){}			
		void start();
		void stop();
		void collect();
		void detect();

};

#endif

