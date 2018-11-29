#include "siliconminer.h"

void siliconminer::start()
{
	miner::start();
}

void siliconminer::detect()
{
	cout << "Sample grinder activated." << endl;
	cout << "10 um seive applied." << endl;
	cout << "Infrared laser activated." << endl;
	cout << "Spectrophotometer activated and results analyzed." << endl;
	cout << "Silica vein located." << endl;
}

void siliconminer::collect()
{
	miner::collect();
}

void siliconminer::stop()
{
	miner::stop();
}

