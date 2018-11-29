#ifndef CHLORIDEMINER_H
#define CHLORIDEMINER_H

#include <string>
#include <iostream>
#include "sodiumminer.h"
#include "miner.h"

using namespace std;


class chlorideminer : public sodiumminer
{
	public:

		chlorideminer(int num, string rsc) : sodiumminer(num, rsc){}			
		void start();
		void stop();
		void collect();
		void detect();

};

#endif

