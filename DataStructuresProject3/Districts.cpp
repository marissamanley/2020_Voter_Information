#include "Districts.h"

Districts::Districts(int district, int voterCapacity, float percentDem, float percentRep, string democratRep, string republicanRep) {
	this->district = district;
	this->voterCapacity = voterCapacity;
	this->initPercentDem = percentDem;
	this->initPercentRep = percentRep;
	this->democrat = democratRep;
	this->republican = republicanRep;
	this->initPercentOther = 1 - (percentDem + percentRep);
}

int Districts::getDistrict() {
	return this->district;
}

void Districts::setDistrict(int district)
{
	this->district = district;
}

int Districts::getVoterCapacity() {
	return this->voterCapacity;
}

void Districts::setVoterCapacity(int voterCapacity)
{
	this->voterCapacity = voterCapacity;
}

int Districts::getVotersDem() {
	return this->votersDem;
}

void Districts::setVotersDem(int v)
{
	this->votersDem = v;
}

int Districts::getVotersRep() {
	return this->votersRep;
}

void Districts::setVotersRep(int v)
{
	this->votersRep = v;
}

int Districts::getVotersOther() {
	return this->votersOther;
}

void Districts::setVotersOther(int v)
{
	this->votersOther = v;
}

int Districts::getVotersPresDem()
{
	return votersPresDem;
}

void Districts::setVotersPresDem(int v)
{
	votersPresDem = v;
}

int Districts::getVotersPresRep()
{
	return votersPresRep;
}

void Districts::setVotersPresRep(int v)
{
	votersPresRep = v;
}

int Districts::getVotersPresOther()
{
	return votersPresOther;
}

void Districts::setVotersPresOther(int v)
{
	votersPresOther = v;
}

float Districts::getInitPercentDem()
{
	return initPercentDem;
}

void Districts::setInitPercentDem(float percentDem)
{
	initPercentDem = percentDem;
}

float Districts::getInitPercentRep()
{
	return initPercentRep;
}

void Districts::setInitPercentRep(float percentRep)
{
	initPercentRep = percentRep;
}

float Districts::getInitPercentOther()
{
	return initPercentOther;
}

void Districts::setInitPercentOther(float percentOther)
{
	initPercentOther = percentOther;
}

string Districts::getDemocrat() {
	return this->democrat;
}

void Districts::setDemocrat(string dem)
{
	democrat = dem;
}

string Districts::getRepublican() {
	return this->republican;
}

void Districts::setRepublican(string rep)
{
	republican = rep;
}

float Districts::getPercent(int num)
{
	if (num == 0)
	{
		return (float)votersPresDem / (float)voterCapacity;
	}
	else if (num == 1)
	{
		return (float)votersPresRep / (float)voterCapacity;
	}
	else if (num == 2)
	{
		return (float)votersPresOther / (float)voterCapacity;
	}
	else if (num == 3)
	{
		return (float)votersDem / (float)voterCapacity;
	}
	else if (num == 4)
	{
		return (float)votersRep / (float)voterCapacity;
	}
	else if (num == 5)
	{
		return (float)votersOther / (float)voterCapacity;
	}
}
