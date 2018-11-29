#include "minermgr.h"
#include "waterminer.h"
#include "siliconminer.h"
#include "sodiumminer.h"
#include "chlorideminer.h"
#include "ironminer.h"
#include "magnesiumminer.h"
#include "potassiumminer.h"
#include "miner.h"

minermgr::~minermgr()
{
	for (auto it = miners.begin(); it != miners.end(); it++)
	{
		delete *it;
	}
}

void minermgr::addMiner(int number, string resource)
{
	if(resource == "water")
	{
		addWater(number, resource);
	}
	if(resource == "silicon")
	{
		addSilicon(number, resource);
	}
	if(resource == "sodium")
	{
		addSodium(number, resource);
	}
	if(resource == "chloride")
	{
		addChloride(number, resource);
	}	
	if(resource == "iron")
	{
		addIron(number, resource);
	}
	if(resource == "magnesium")
	{
		addMagnesium(number, resource);
	}
	if(resource == "potassium")
	{
		addPotassium(number, resource);
	}
}

void minermgr::addWater(int number, string resource)
{
	miner * wtr = new waterminer(number, resource);
	miners.push_back(wtr);
}

void minermgr::addSilicon(int number, string resource)
{
	miner * sil = new siliconminer(number, resource);
	miners.push_back(sil);
}

void minermgr::addSodium(int number, string resource)
{
	miner * sod = new sodiumminer(number, resource);
	miners.push_back(sod);
}

void minermgr::addChloride(int number, string resource)
{
	miner * chl = new chlorideminer(number, resource);
	miners.push_back(chl);
}

void minermgr::addIron(int number, string resource)
{
	miner * irn = new ironminer(number, resource);
	miners.push_back(irn);
}

void minermgr::addMagnesium(int number, string resource)
{
	miner * mag = new magnesiumminer(number, resource);
	miners.push_back(mag);
}

void minermgr::addPotassium(int number, string resource)
{
	miner * pot = new potassiumminer(number, resource);
	miners.push_back(pot);
}

void minermgr::runMiners()
{
	cout << "== Boston Station Miner Manager ==" << endl << endl;
	cout << "Authenticating with Van Halen facilities..." << endl;
	cout << "Connected and registered." << endl;
	for(auto it = miners.begin(); it != miners.end(); it++)
	{
		cout << "=======" << endl;
		cout << "== Command: start" << endl;
		(*it)->start();
		cout << "== Command: detect" << endl;
		(*it)->detect();
		cout << "== Command: collect" << endl;
		(*it)->collect();
		cout << "== Command: stop" << endl;
		(*it)->stop();
	}
}	
