#include "ironminer.h"

void ironminer::start()
{
	miner::start();
}

void ironminer::detect()
{
	cout << "Magnetometer activated." << endl;
	cout << "Searching for magnetic field deviations." << endl;
	cout << "Iron deposits located." << endl;
}

void ironminer::collect()
{
	miner::collect();
}

void ironminer::stop()
{
	miner::stop();
}

