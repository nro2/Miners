#include <iostream>
#include <string>


using namespace std;

#ifndef MINER_H
#define MINER_H

class miner
{
	public:
		
		virtual ~miner(){}
		miner(int num, string rsc);
		int getNumber();
		string getResource();


		virtual void start();
		virtual void stop();
		virtual void collect();
		virtual void detect();
	
	private:
		int number;
		string resource;
};

#endif


