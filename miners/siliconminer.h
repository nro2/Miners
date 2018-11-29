#ifndef SILICONMINER_H
#define SILICONMINER_H

#include <string>
#include <iostream>
#include "miner.h"

using namespace std;

class siliconminer : public miner
{
	public: 

		siliconminer(int num, string rsc) : miner(num, rsc){}
		void start();
		void stop();
		void collect();
		void detect();
};

#endif
