#pragma once

#include "Symbole.h"
#include <vector>

// La classe de Huffman va g�rer tout notre algorithme

// Elle est constitu�e de 3 donn�es priv�es : std::string _phrase qui contient la phrase que l'on veut coder
//											: std::vector<CSymbole> _tabHuffman (tableau de Huffman qui contient � l'origine juste les lettres de la phrase et ses fr�quences)
//											: std::string _codePhrase qui contiendra une fois l'algorithme termin� le code "binaire" de la phrase

// Je vous ai fournis le constructeur (il ne fait rien !!!)

// Vous avez 3 fonctions publiques  : read() qui va permettre de lire la phrase (je vous la fournis)
//									: code() -> std::string qui renvoit le code binaire de la phrase (je vous la fournis)
//									: decode() -> std::string qui renvoit la phrase d�cod�e � partir du code binaire ( � compl�ter)

// Vous devrez faire les 9 fonctions priv�es : voir plus bas



class CHuffman
{
public:
	CHuffman();
	void read();
	std::string decode()const;
	// cr�e le dictionnaire puis encode chaque lettre de la phrase et enfin renvoie le code "binaire"
	std::string code();
private:
	// tableau de Huffman qui contient � l'origine juste les lettres de la phrase et ses fr�quences
	std::vector<CSymbole> _tabHuffman;
	// contient la phrase que l'on veut coder
	std::string _phrase;
	// contiendra une fois l'algorithme termin� le code "binaire" de la phrase
	std::string _codePhrase;

	// permet de savoir si la lettre existe dans le tableau des symboles de Huffman
	bool newLettre(char lettre);
	// ajoute 1 � la frequence de la lettre dans le tableau des symboles de Huffman
	void addFrequence(char lettre);
	// construit lettre apr�s lettre le tableau de Huffman (on ajoute un nouveau symbole si la lettre n existe pas dans le tableau) (on ajoute 1 � la fr�quence de chaque lettre)
	void constructionDictionnaire();
	// renvoie le code de Huffman li� au symbole correspondant � la lettre
	std::string getCode(char lettre)const;

	// permet de rajouter "1" ou "0" (valeurs possible de bit) � chaque fusion � chaque lettre du _mot du symbole 
	void addCode(std::string bit, const CSymbole& Symb); 
	// easy inverve tous les codes de chaque lettre dans le tableau de huffman
	void reverseCode();
	// fonction principale : � partir d'une copie du tableau de Huffman : cr�� par tri puis fusion successive des 2 symboles les moins fr�quents l'arbre de Huffman
	void constructionCode();

	// permet de savoir si un code correspond � une lettre dans le tableau de Huffman
	bool isCode(std::string cod)const;
	// renvoie la lettre correspondant au code de Huffman
	char getLettre(std::string cod)const;
};

