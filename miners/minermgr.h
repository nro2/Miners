#include "miner.h"
#include <iostream>
#include <list>

using namespace std;

#ifndef MINERMGR_H
#define MINERMGR_H

class minermgr
{
	public:

		~minermgr();
		void addMiner(int number, string resource);
		void addWater(int number, string resource);
		void addSilicon(int number, string resource);
		void addSodium(int number, string resource);
		void addChloride(int number, string resource);
		void addIron(int number, string resource);
		void addMagnesium(int number, string resource);
		void addPotassium(int number, string resource);

		void runMiners();



	private:

		list<miner*> miners;
	
};

#endif	

	
