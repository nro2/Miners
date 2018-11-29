#ifndef POTASSIUMMINER_H
#define POTASSIUMMINER_H

#include <string>
#include <iostream>
#include "magnesiumminer.h"
#include "miner.h"

using namespace std;


class potassiumminer : public magnesiumminer
{
	public:

		potassiumminer(int num, string rsc) : magnesiumminer(num, rsc){}			
		void start();
		void stop();
		void collect();
		void detect();

};

#endif

