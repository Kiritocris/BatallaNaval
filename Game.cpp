#include "pch.h"	
#include "Game.h"
#include <iostream>

using namespace std;

int random();
int randombl();
int ransel();
int valuesel(int);

void Game::initab() {
	for (int i = 0; i < Sz; i++) {
		for (int j = 0; j < Sz; j++) {
			tablero[i][j] = 0;
		}
	}
}

void Game::settbs() {
	int i = random();
	int j = random();
	if (i >= Sz - 2) {
		i = i - 1;
	}
	int p = i;
	int pos = ransel();
	do {
		i = random();
		j = random();
		if (i >= Sz - 2) {
			i = i - 1;
		}
		p = i;
		pos = ransel();
	} while (valide(i, j, pos, p, sizeof BS / sizeof BS[0]));

	for (i; i < p + sizeof BS / sizeof BS[0]; i++) {
		if (pos == 1) {
			tablero[i][j] = 1;
		}
		else {
			tablero[j][i] = 1;
		}
	}
}

void Game::settbm() {
	int i = random();
	int j = random();
	if (i > Sz - 4) {
		i = i - 3;
	}
	int p = i;
	int pos = ransel();
	do {
		i = random();
		j = random();
		if (i > Sz - 4) {
			i = i - 3;
		}
		p = i;
		pos = ransel();
	} while (valide(i, j, pos, p, sizeof BM / sizeof BM[0]));

	for (i; i < p + sizeof BM / sizeof BM[0]; i++) {
		if (pos == 1) {
			tablero[i][j] = 1;
		}
		else {
			tablero[j][i] = 1;
		}
	}
}

void Game::settbl() {
	int i = randombl();
	int j = random();
	int p = i;
	int pos = ransel();
	do {
		i = randombl();
		j = random();
		p = i;
		pos = ransel();
	} while (valide(i, j, pos, p, sizeof BL / sizeof BL[0]));

	for (i; i < p + sizeof BL / sizeof BL[0]; i++) {
		if (pos == 1) {
			tablero[i][j] = 1;
		}
		else {
			tablero[j][i] = 1;
		}
	}
}

bool Game::valide(int x, int y, int h, int cont, int opc) {
	switch (opc)
	{
	case 2:
		for (x; x < cont + sizeof BS / sizeof BS[0]; x++) {
			if (h == 1) {
				if (tablero[x][y] == 1) {
					return true;
				}
			}
			else {
				if (tablero[y][x] == 1) {
					return true;
				}
			}

		}
		return false;
		break;
	case 4:
		for (x; x < cont + sizeof BM / sizeof BM[0]; x++) {
			if (h == 1) {
				if (tablero[x][y] == 1) {
					return true;
				}
			}
			else {
				if (tablero[y][x] == 1) {
					return true;
				}
			}

		}
		return false;
		break;
	case 6:
		for (x; x < cont + sizeof BL / sizeof BL[0]; x++) {
			if (h == 1) {
				if (tablero[x][y] == 1) {
					return true;
				}
			}
			else {
				if (tablero[y][x] == 1) {
					return true;
				}
			}

		}
		return false;
		break;
	default:
		return false;
	}
	return false;

}

void Game::showtab() {
	for (int i = 0; i < Sz; i++) {
		for (int j = 0; j < Sz; j++) {
			cout << tablero[i][j] << " ";
		}
		cout << endl;
	}
}

int Game::randompick(int x) {
	int num;
	srand(time(NULL));
	num = rand() % (x+1);
	return num;
}

void Game::setnew(int x,int y) {
	tablero[x][y] = 2;
}

void Game::cont() {

	contador+=1;

}
int Game::contdev() {

	return contador;
}

int Game::tab(int x, int y) {
	return tablero[x][y];
}

int random() {
	int num;
	srand(time(NULL));
	num = rand() % (Sz);

	return num;
}

int randombl() {
	int num;
	srand(time(NULL));
	num = rand() % (Sz - 5);

	return num;
}

int ransel() {
	int num;
	srand(time(NULL));
	num = rand() % 2;

	return num;
}
