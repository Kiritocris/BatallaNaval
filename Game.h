#pragma once


const int Sz = 8;
const int BS[2] = { 1,1 };
const int BM[4] = { 1,1,1,1 };
const int BL[6] = { 1,1,1,1,1,1 };

class Game {
private:
	int tablero[Sz][Sz];
	int contador = 0;


public:
	void initab();
	void settbs();
	void settbm();
	void settbl();
	bool valide(int x, int y, int h, int cont, int opc);
	void showtab();
	void cont();
	int contdev();
	int result();
	int tab(int x, int y);
};