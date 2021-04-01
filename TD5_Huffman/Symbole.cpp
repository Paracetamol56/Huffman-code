#include "Symbole.h"

CSymbole::CSymbole(char l, size_t f, std::string c)
{
}

char CSymbole::getLettre() const
{
	return _mot.front();
}

std::string CSymbole::getMot() const
{
	return _mot;
}

std::string CSymbole::getCode() const
{
	return _cod;
}

void CSymbole::addFrequence(size_t f)
{
	++_freq;
}

void CSymbole::addBit(std::string bit)
{
	_cod = _cod + bit;
}

void CSymbole::fusion(CSymbole& symb2)
{
	
}

void CSymbole::reverseCode()
{

}
