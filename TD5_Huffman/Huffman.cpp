#include "Huffman.h"

#include <iostream>
#include <algorithm>

CHuffman::CHuffman()
{
	//Rien
}

void CHuffman::read()
{
	std::cout << "Entrez la phrase à coder \n";
	std::getline(std::cin,_phrase, '\n');
}



std::string CHuffman::code()
{
	constructionDictionnaire();
	constructionCode();
	for (auto lettre : _phrase)
		_codePhrase += getCode(lettre);
	return _codePhrase;
}

bool CHuffman::newLettre(char lettre)
{
	for (auto iHuffman : _tabHuffman)
	{
		if (iHuffman == lettre)
		{
			return true;
		}
	}
	return false;
}

void CHuffman::addFrequence(char lettre)
{
	for (CSymbole iHuffman : _tabHuffman)
	{
		if (iHuffman. == lettre)
		{
			return true;
		}
	}
}

void CHuffman::constructionDictionnaire()
{
}

std::string CHuffman::getCode(char lettre) const
{
	return std::string();
}

void CHuffman::addCode(std::string bit, const CSymbole& Symb)
{
}

void CHuffman::reverseCode()
{
}

void CHuffman::constructionCode()
{
	auto arbreHuffman = _tabHuffman;
	while (arbreHuffman.size() >= 2)
	{
		std::sort(arbreHuffman.begin(), arbreHuffman.end(), ByFrequence());
		auto lessFreqSymb = arbreHuffman.back();
		addCode("0", lessFreqSymb);
		arbreHuffman.pop_back();
		auto secondLessFreqSymb = arbreHuffman.back();
		addCode("1", secondLessFreqSymb);
		arbreHuffman.pop_back();
		secondLessFreqSymb.fusion(lessFreqSymb);
		arbreHuffman.push_back(secondLessFreqSymb);
	}
	reverseCode();
}

bool CHuffman::isCode(std::string cod) const
{
	return false;
}

char CHuffman::getLettre(std::string cod) const
{
	return 0;
}


std::string CHuffman::decode()const
{
	std::string phraseDecodee;
	// A FAIRE  EN DERNIER !!!
	return phraseDecodee;
}
