#pragma once
// La classe Symbole va correspondre � une ligne du tableau de Huffman
// Il contient 3 donn�es membres : un std::string _mot (qui correspond au d�marrage � une lettre puis par fusion successive se transforme en std::string
//                               : un size_t pour compter les fr�quences d'apparition des lettres puis des _mot
//                               : un std::string _cod qui va correspondre au code "binaire" de la lettre (puis _mot)

// J'ai rajout� un Foncteur pour trier le tableau de Huffman et du coup une fonction getFrequence() qui l'utilise

// Vous avez 8 fonctions membres � d�finir :
//          1 constructeur (un avec un char pour une lettre)
//		    3 getteurs : getLettre -> char  ��� getMot -> std::string   ��� getCode() -> std::string
//          2 setteurs : addFrequence(size_t)  ��� addBit(std::string)
//			la fonction de fusion(CSymbole&) : permet de cr�er un nouveau symbole fusion des 2 symboles
//			reverseCode() qui va permettre � la fin de l'algorithme d'inverser le code de Huffman

#include <string>

class CSymbole
{
public:
	CSymbole(char l, size_t f = 0, std::string c = "");
	
	// getters
	char getLettre()const;
	std::string getMot()const;
	std::string getCode()const;
	// setters
	void addFrequence(size_t f);
	void addBit(std::string bit);
	// permet de cr�er un nouveau symbole fusion des 2 symboles
	void fusion(CSymbole& symb2);
	// va permettre � la fin de l'algorithme d'inverser le code de Huffman
	void reverseCode();

	size_t getFrequence() const { return _freq; }

private:
	// correspond au d�marrage � une lettre puis par fusion successive se transforme en std::string
	std::string _mot;
	// compte les fr�quences d'apparition des lettres puis des _mot
	size_t _freq;
	// va correspondre au code "binaire" de la lettre (puis _mot)
	std::string _cod;
};

// foncteur pour trier les symboles en fonction de la fr�quence d�croissante
struct ByFrequence
{
	bool operator () (const CSymbole& lhs, const CSymbole& rhs)
	{
		return lhs.getFrequence() > rhs.getFrequence();
	}
};