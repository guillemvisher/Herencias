#include "Character.h"
#include "FinalBoss.h"
#include "myHero.h"
#include <Windows.h>
#include <iostream>
#include <conio.h>
using namespace std;

void playerCombat(Character& enemy, myHero& player);
void lvlUp(myHero& jugador);
void finalBossCombat(FinalBoss& finalBoss, myHero player);

int main() {
	srand(time(NULL));
	//Creamos el jugador
	myHero jugador1(1000, 150, 1, 0, "Jacobo", 250, 5);
	//Creamos al final boss
	FinalBoss FinalBoss(2500, 75, 0, 0, "Vinicius Jr", 175, 180);
	//Creamos a los enemigos que nos vamos a encontrar
	Character enemigo1(400, 70, 0, 0, "Oriol");
	Character enemigo2(550, 50, 0, 0, "Sergi");
	Character enemigo3(450, 85, 0, 0, "Kevin");
	Character enemigo4(250, 150, 0, 0, "Ramon");

	char tablero[10][6] = {
{ '|', '.', '.', '.', '.', '|'},
{ '|', '.', '.', '.', '.', '|'},
{ '|', '.', '.', '.', '.', '|'},
{ '|', '.', '.', '.', '.', '|'},
{ '|', '.', '.', '.', '.', '|'},
{ '|', '.', '.', '.', '.', '|'},
{ '|', '.', '.', '.', '.', '|'},
{ '|', '.', '.', '.', '.', '|'},
{ '|', '.', '.', '.', '.', '|'},
{ '|', '.', '.', '.', '.', '|'},
	};
	//Posicion inicial de nuestro jugador
	tablero[jugador1.getPY()][jugador1.getPX()] = 1;

	//Posicion del enemigo 1
	int x1 = rand() % 4 + 1;
	int y1 = rand() % 8 + 1;
	enemigo1.setPX(x1);
	enemigo1.setPY(y1);
	tablero[enemigo1.getPY()][enemigo1.getPX()] = '.';

	//Posicion del enemigo 2
	int x2 = rand() % 4 + 1;
	int y2 = rand() % 8 + 1;
	enemigo2.setPX(x2);
	enemigo2.setPY(y2);
	tablero[enemigo2.getPY()][enemigo2.getPX()] = '.';

	//Posicion del enemigo 3
	int x3 = rand() % 4 + 1;
	int y3 = rand() % 8 + 1;
	enemigo3.setPX(x3);
	enemigo3.setPY(y3);
	tablero[enemigo3.getPY()][enemigo3.getPX()] = '.';

	//Posicion del enemigo 4
	int x4 = rand() % 4 + 1;
	int y4 = rand() % 8 + 1;
	enemigo4.setPX(x4);
	enemigo4.setPY(y4);
	tablero[enemigo4.getPY()][enemigo4.getPX()] = '.';

	cout << "Wellcome to...\n";
	Sleep(1000);
	cout << R"(
 _______  _______  _        _______ _________ _______  _______                      _       _________ _______  _______ 
(       )(  ___  )( (    /|(  ____ \\__   __/(  ____ \(  ____ )  |\     /||\     /|( (    /|\__   __/(  ____ \(  ____ )
| () () || (   ) ||  \  ( || (    \/   ) (   | (    \/| (    )|  | )   ( || )   ( ||  \  ( |   ) (   | (    \/| (    )|
| || || || |   | ||   \ | || (_____    | |   | (__    | (____)|  | (___) || |   | ||   \ | |   | |   | (__    | (____)|
| |(_)| || |   | || (\ \) |(_____  )   | |   |  __)   |     __)  |  ___  || |   | || (\ \) |   | |   |  __)   |     __)
| |   | || |   | || | \   |      ) |   | |   | (      | (\ (     | (   ) || |   | || | \   |   | |   | (      | (\ (   
| )   ( || (___) || )  \  |/\____) |   | |   | (____/\| ) \ \__  | )   ( || (___) || )  \  |   | |   | (____/\| ) \ \__
|/     \|(_______)|/    )_)\_______)   )_(   (_______/|/   \__/  |/     \|(_______)|/    )_)   )_(   (_______/|/   \__/
                                                                                                                       
                                                                                                                                                                                                                                                                                                              
)" << '\n';
	Sleep(2000);
	system("cls");
	cout << "Your goal is to reach the end of the board, killing or avoiding the enemies hidind on it. Once you reach the end you will have to fight the Final Boss\n";
	Sleep(8000);
	system("cls");
	while (jugador1.getPY() != tablero[9][1] || jugador1.getPY() != tablero[9][2] || jugador1.getPY() != tablero[9][3] || jugador1.getPY() != tablero[9][4]) {
		system("cls");
		for (int fila = 0; fila < 10; fila++)
		{
			for (int columna = 0; columna < 6; columna++)
			{
				cout << tablero[fila][columna] << "\t";
			}
			cout << endl;
		}

		// Obtener la entrada del usuario
		char key = _getch();
		system("cls");
		// Mover el objeto según la tecla presionada
		if (key == 'w') {
			if (jugador1.getPY() == 0)
			{
				cout << "It is not possible to go that way! \n";
			}
			else {
				tablero[jugador1.getPY()][jugador1.getPX()] = '.';
				jugador1.setPY(jugador1.getPY() - 1);
				tablero[jugador1.getPY()][jugador1.getPX()] = 1;
			}
		}
		else if (key == 's') {
			if (jugador1.getPY() == 9)
			{
				cout << "It is not possible to go that way! \n";
			}
			else {
				tablero[jugador1.getPY()][jugador1.getPX()] = '.';
				jugador1.setPY(jugador1.getPY() + 1);
				tablero[jugador1.getPY()][jugador1.getPX()] = 1;
			}
		}
		else if (key == 'd') {
			if (jugador1.getPX() == 4)
			{
				cout << "It is not possible to go that way! \n";
			}
			else {
				tablero[jugador1.getPY()][jugador1.getPX()] = '.';
				jugador1.setPX(jugador1.getPX() + 1);
				tablero[jugador1.getPY()][jugador1.getPX()] = 1;
			}
		}
		else if (key == 'a') {
			if (jugador1.getPX() == 1)
			{
				cout << "It is not possible to go that way! \n";
			}
			else {
				tablero[jugador1.getPY()][jugador1.getPX()] = '.';
				jugador1.setPX(jugador1.getPX() - 1);
				tablero[jugador1.getPY()][jugador1.getPX()] = 1;
			}
		}
		//Jugador vs Enemigo1
		if (tablero[jugador1.getPY()][jugador1.getPX()] == tablero[enemigo1.getPY()][enemigo1.getPX()]) {
			playerCombat(enemigo1, jugador1);
		}else if (tablero[jugador1.getPY()][jugador1.getPX()] == tablero[enemigo2.getPY()][enemigo2.getPX()]) {
			playerCombat(enemigo2, jugador1);
		}else if (tablero[jugador1.getPY()][jugador1.getPX()] == tablero[enemigo3.getPY()][enemigo3.getPX()]) {
			playerCombat(enemigo3, jugador1);
		}else if (tablero[jugador1.getPY()][jugador1.getPX()] == tablero[enemigo4.getPY()][enemigo4.getPX()]) {
			playerCombat(enemigo4, jugador1);
		}
		else if (jugador1.getPY() == 9) {
			finalBossCombat(FinalBoss, jugador1);
			break;
		}
	}
}

void playerCombat(Character& enemy, myHero& player) {
	int chooseAttack;
	system("cls");
	cout << "You found " << enemy.getName() << ", the combat is about to start\n\n";
	Sleep(500);
	while (enemy.getHp() > 0 || player.getHp() > 0) {
		cout << "\nIts your turn to attack: \n";
		Sleep(500);
		cout << "Which attack you want to use?\n";
		cout << "[1]Punch \n";
		cout << "[2]FireBall \n";
		cin >> chooseAttack;
		Sleep(500);
		if (chooseAttack == 1) {
			cout << "You punched your enemy and dealt " << player.getDmg() << " damage\n";
			enemy.setHp(enemy.getHp() - player.getDmg());
			Sleep(500);
			
			Sleep(500);
		}
		else if (chooseAttack == 2) {
			if (player.getStamina() >= 5) {
				cout << "You used Fire Ball and dealt " << player.getFireBall() << " damage\n";
				Sleep(500);
				player.setStamina(player.getStamina() - 5);
				enemy.setHp(enemy.getHp() - player.getFireBall());

				Sleep(500);
			}
			else {
				cout << "You don't have enough stamina to use this attack\n";
				Sleep(500);
				continue;
			}
		}
		if (enemy.getHp() <= 0) {
			cout << "You killed " << enemy.getName() << "\n";
			lvlUp(player);
			enemy.setPX(0);
			enemy.setPY(0);
			break;
		}
		cout << "Your enemy has " << enemy.getHp() << " health points remaining\n\n";
		cout << "Its " << enemy.getName() << " turn to attack\n";
		Sleep(500);
		cout << enemy.getName() << " attacked and dealt " << enemy.getDmg() << " damage\n";
		Sleep(500);
		player.setHp(player.getHp() - enemy.getDmg());
		if (player.getHp() <= 0) {
			cout << "You died...\n";
			cout << R"(
   _____          __  __ ______    ______      ________ _____  
  / ____|   /\   |  \/  |  ____|  / __ \ \    / /  ____|  __ \ 
 | |  __   /  \  | \  / | |__    | |  | \ \  / /| |__  | |__) |
 | | |_ | / /\ \ | |\/| |  __|   | |  | |\ \/ / |  __| |  _  / 
 | |__| |/ ____ \| |  | | |____  | |__| | \  /  | |____| | \ \ 
  \_____/_/    \_\_|  |_|______|  \____/   \/   |______|_|  \_\
                                                               
                                                                                                                 
)" << '\n';
			break;
		}
		cout << "You have " << player.getHp() << " healh point remaining\n";
		Sleep(500);

	}
}
void lvlUp(myHero& jugador) {
	cout << "You have leveled up! \n";
	Sleep(500);
	cout << "+ 150 Hp\n";
	Sleep(500);
	cout << "+ 25 Dmg\n";
	Sleep(500);
	cout << "+ 5 Stamina\n";
	Sleep(500);
	cout << "+ 50 FireBall damage\n";
	Sleep(500);
	jugador.setHp(jugador.getHp() + 150);
	jugador.setDmg(jugador.getDmg() + 25);
	jugador.setStamina(jugador.getStamina() + 5);
	jugador.setFireBall(jugador.getFireBall() + 50);

}
void finalBossCombat(FinalBoss& finalBoss, myHero player) {
	cout << R"(
 (     (        )          (               )   (    (     
 )\ )  )\ )  ( /(   (      )\ )     (   ( /(   )\ ) )\ )  
(()/( (()/(  )\())  )\    (()/(   ( )\  )\()) (()/((()/(  
 /(_)) /(_))((_)\((((_)(   /(_))  )((_)((_)\   /(_))/(_)) 
(_))_|(_))   _((_))\ _ )\ (_))   ((_)_   ((_) (_)) (_))   
| |_  |_ _| | \| |(_)_\(_)| |     | _ ) / _ \ / __|/ __|  
| __|  | |  | .` | / _ \  | |__   | _ \| (_) |\__ \\__ \  
|_|   |___| |_|\_|/_/ \_\ |____|  |___/ \___/ |___/|___/  
                                                          
)" << '\n';

	cout << "You encountered the final boss, time to fight!\n";
	int chooseAttack;
	int finalBossAttack;
	int missChance;
	Sleep(500);
	while (finalBoss.getHp() > 0 || player.getHp() > 0) {
		cout << "Its your turn to attack: \n";
		Sleep(500);
		cout << "Which attack you want to use?\n";
		cout << "[1]Punch \n";
		cout << "[2]FireBall \n";
		cin >> chooseAttack;
		Sleep(500);
		if (chooseAttack == 1) {
			cout << "You punched your enemy and dealt " << player.getDmg() << " damage\n";
			finalBoss.setHp(finalBoss.getHp() - player.getDmg());
			Sleep(500);

			Sleep(500);
		}
		else if (chooseAttack == 2) {
			if (player.getStamina() >= 5) {
				cout << "You used Fire Ball and dealt " << player.getFireBall() << " damage\n";
				Sleep(500);
				player.setStamina(player.getStamina() - 5);
				finalBoss.setHp(finalBoss.getHp() - player.getFireBall());

				Sleep(500);
			}
			else {
				cout << "You don't have enough stamina to use this attack\n\n";
				Sleep(500);
				continue;
			}
			
			}
		cout << finalBoss.getName() << " has " << finalBoss.getHp() << " health points remaining\n\n";
		if (finalBoss.getHp() <= 0) {
			cout << "\nYou killed " << finalBoss.getName() << "\n";
			cout << "Congratulations, you have completed the game\n";
			cout << R"(
                                          
                                          
        GGGGGGGGGGGGG        GGGGGGGGGGGGG
     GGG::::::::::::G     GGG::::::::::::G
   GG:::::::::::::::G   GG:::::::::::::::G
  G:::::GGGGGGGG::::G  G:::::GGGGGGGG::::G
 G:::::G       GGGGGG G:::::G       GGGGGG
G:::::G              G:::::G              
G:::::G              G:::::G              
G:::::G    GGGGGGGGGGG:::::G    GGGGGGGGGG
G:::::G    G::::::::GG:::::G    G::::::::G
G:::::G    GGGGG::::GG:::::G    GGGGG::::G
G:::::G        G::::GG:::::G        G::::G
 G:::::G       G::::G G:::::G       G::::G
  G:::::GGGGGGGG::::G  G:::::GGGGGGGG::::G
   GG:::::::::::::::G   GG:::::::::::::::G
     GGG::::::GGG:::G     GGG::::::GGG:::G
        GGGGGG   GGGG        GGGGGG   GGGG
                                                        
                                                        
)" << '\n';
			break;
		}
		cout << "\nIts " << finalBoss.getName() << " turn\n";
		int finalBossAttack = rand() % 2;
		if (finalBossAttack == 0) {
			cout << finalBoss.getName() << " attacked with his sword and dealt " << finalBoss.getDmg() << " damage\n";
			player.setHp(player.getHp() - finalBoss.getDmg());
		}
		else if (finalBossAttack == 1) {
			int missChance = rand() % 4;
			if (missChance > 0) {
				cout << finalBoss.getName() << " used Fire Attack and dealt " << finalBoss.getFireAttack() << " damage\n";
				player.setHp(player.getHp() - finalBoss.getFireAttack());
			}
			else {
				cout << finalBoss.getName() << " used Fire Attack\n";
				cout << finalBoss.getName() << " attack missed!\n";
			}
		}
		else if (finalBossAttack == 2) {
			int missChance = rand() % 4;
			if (missChance > 0) {
				cout << finalBoss.getName() << " used Lightning Attack and dealt " << finalBoss.getLightningAttack() << " damage\n";
				player.setHp(player.getHp() - finalBoss.getLightningAttack());
			}
			else {
				cout << finalBoss.getName() << " used Lightning Attack\n";
				cout << finalBoss.getName() << " attack missed!\n\n";
			}
		}
		if (player.getHp() <= 0) {
			cout << "\nYou died...\n";
			cout << R"(
   _____          __  __ ______    ______      ________ _____  
  / ____|   /\   |  \/  |  ____|  / __ \ \    / /  ____|  __ \ 
 | |  __   /  \  | \  / | |__    | |  | \ \  / /| |__  | |__) |
 | | |_ | / /\ \ | |\/| |  __|   | |  | |\ \/ / |  __| |  _  / 
 | |__| |/ ____ \| |  | | |____  | |__| | \  /  | |____| | \ \ 
  \_____/_/    \_\_|  |_|______|  \____/   \/   |______|_|  \_\
                                                               
                                                                                                                 
)" << '\n';
			break;
			

		}
		cout << "You have " << player.getHp() << " healh points remaining\n\n";
	}
}