#include "player.h"
#include "matrica.h"

void Player::Play() {
	this->money = this->money - stake;
	Matrica m;
	m.Make();
	m.Print();
	if (m.FourCol()) {
		switch (m.found) {
		case 15:
			std::cout << "MEGA KING WIN  " << std::endl;
			this->money = this->money + stake * 225;
			std::cout << "CONGRATS YOU WON : " << stake * 225 << std::endl;
			break;
		case 14:
			std::cout << "MEGA QUEEN WIN  " << std::endl;
			this->money = this->money + stake * 196;
			std::cout << "CONGRATS YOU WON : " << stake * 196 << std::endl;
			break;
		case 13:
			std::cout << "MEGA JACK WIN  " << std::endl;
			this->money = this->money + stake * 169;
			std::cout << "CONGRATS YOU WON : " << stake * 169 << std::endl;
			break;
		case 12:
			std::cout << "MEGA ACE WIN  " << std::endl;
			this->money = this->money + stake * 144;
			std::cout << "CONGRATS YOU WON : " << stake * 144 << std::endl;
			break;
		case 11:
			std::cout << "STRONG B WIN  " << std::endl;
			this->money = this->money + stake * 121;
			std::cout << "CONGRATS YOU WON : " << stake * 121 << std::endl;
			break;
		case 10:
			std::cout << "STRONG C WIN  " << std::endl;
			this->money = this->money + stake * 100;
			std::cout << "CONGRATS YOU WON : " << stake * 100 << std::endl;
			break;
		case 9:
			std::cout << "4 NINES  " << std::endl;
			this->money = this->money + stake * 81;
			std::cout << "CONGRATS YOU WON : " << stake * 81 << std::endl;
			break;
		case 8:
			std::cout << "4 EIGHTS  " << std::endl;
			this->money = this->money + stake * 64;
			std::cout << "CONGRATS YOU WON : " << stake * 64 << std::endl;
			break;
		case 7:
			std::cout << "4 SEVENS SECRET WIN" << std::endl;
			this->money = this->money + stake * 49;
			std::cout << "CONGRATS YOU WON : " << stake * 49 << std::endl;
			break;
		case 6:
			std::cout << "4 SIXES  " << std::endl;
			this->money = this->money + stake * 36;
			std::cout << "CONGRATS YOU WON : " << stake * 36 << std::endl;
			break;
		case 5:
			std::cout << "4 FIVES  " << std::endl;
			this->money = this->money + stake * 25;
			std::cout << "CONGRATS YOU WON : " << stake * 25 << std::endl;
			break;
		case 4:
			std::cout << "4 FOURS  " << std::endl;
			this->money = this->money + stake * 16;
			std::cout << "CONGRATS YOU WON : " << stake * 16 << std::endl;
			break;
		case 3:
			std::cout << "4 THREES  " << std::endl;
			this->money = this->money + stake * 9;
			std::cout << "CONGRATS YOU WON : " << stake * 9 << std::endl;
			break;
		case 2:
			std::cout << "STANDARD 2" << std::endl;
			this->money = this->money + stake * 4;
			std::cout << "CONGRATS YOU WON : " << stake * 4 << std::endl;
			break;
		}
	}
	else if (m.ThreeCol()) {
		switch (m.found) {
		case 15:
			std::cout << "CUTE KING WIN" << std::endl;
			this->money = this->money + stake * 30;
			std::cout << "CONGRATS YOU WON : " << stake * 30 << std::endl;
			break;
		case 14:
			std::cout << "CUTE QUEEN WIN" << std::endl;
			this->money = this->money + stake * 28;
			std::cout << "CONGRATS YOU WON : " << stake * 28 << std::endl;
			break;
		case 13:
			std::cout << "CUTE JACK WIN  " << std::endl;
			this->money = this->money + stake * 26;
			std::cout << "CONGRATS YOU WON : " << stake * 26 << std::endl;
			break;
		case 12:
			std::cout << "CUTE ACE WIN" << std::endl;
			this->money = this->money + stake * 24;
			std::cout << "CONGRATS YOU WON : " << stake * 24 << std::endl;
			break;
		case 11:
			std::cout << "GOOD B WIN" << std::endl;
			this->money = this->money + stake * 22;
			std::cout << "CONGRATS YOU WON : " << stake * 22 << std::endl;
			break;
		case 10:
			std::cout << "GOOD C WIN" << std::endl;
			this->money = this->money + stake * 20;
			std::cout << "CONGRATS YOU WON : " << stake * 20 << std::endl;
			break;
		case 9:
			std::cout << "3 NINES" << std::endl;
			this->money = this->money + stake * 18;
			std::cout << "CONGRATS YOU WON : " << stake * 18 << std::endl;
			break;
		case 8:
			std::cout << "3 EIGHTS" << std::endl;
			this->money = this->money + stake * 16;
			std::cout << "CONGRATS YOU WON : " << stake * 16 << std::endl;
			break;
		case 7:
			std::cout << "3 SEVENS SECRET WIN" << std::endl;
			this->money = this->money + stake * 14;
			std::cout << "CONGRATS YOU WON : " << stake * 14 << std::endl;
			break;
		case 6:
			std::cout << "3 SIXES" << std::endl;
			this->money = this->money + stake * 12;
			std::cout << "CONGRATS YOU WON : " << stake * 12 << std::endl;
			break;
		case 5:
			std::cout << "3 FIVES" << std::endl;
			this->money = this->money + stake * 10;
			std::cout << "CONGRATS YOU WON : " << stake * 10 << std::endl;
			break;
		case 4:
			std::cout << "3 FOURS" << std::endl;
			this->money = this->money + stake * 8;
			std::cout << "CONGRATS YOU WON : " << stake * 8 << std::endl;
			break;
		case 3:
			std::cout << "3 THREES" << std::endl;
			this->money = this->money + stake * 6;
			std::cout << "CONGRATS YOU WON : " << stake * 6 << std::endl;
			break;
		case 2:
			std::cout << "STANDARD 2" << std::endl;
			this->money = this->money + stake * 4;
			std::cout << "CONGRATS YOU WON : " << stake * 4 << std::endl;
			break;
		}
	}
		else if (m.FourRow()) {
			switch (m.found) {
			case 15:
				std::cout << "MEGA KING WIN" << std::endl;
				this->money = this->money + stake * 225;
				std::cout << "CONGRATS YOU WON : " << stake * 225 << std::endl;
				break;
			case 14:
				std::cout << "MEGA QUEEN WIN" << std::endl;
				this->money = this->money + stake * 196;
				std::cout << "CONGRATS YOU WON : " << stake * 196 << std::endl;
				break;
			case 13:
				std::cout << "MEGA JACK WIN" << std::endl;
				this->money = this->money + stake * 169;
				std::cout << "CONGRATS YOU WON : " << stake * 169 << std::endl;
				break;
			case 12:
				std::cout << "MEGA ACE WIN" << std::endl;
				this->money = this->money + stake * 144;
				std::cout << "CONGRATS YOU WON : " << stake * 144 << std::endl;
				break;
			case 11:
				std::cout << "STRONG B WIN" << std::endl;
				this->money = this->money + stake * 121;
				std::cout << "CONGRATS YOU WON : " << stake * 121 << std::endl;
				break;
			case 10:
				std::cout << "STRONG C WIN" << std::endl;
				this->money = this->money + stake * 100;
				std::cout << "CONGRATS YOU WON : " << stake * 100 << std::endl;
				break;
			case 9:
				std::cout << "4 NINES" << std::endl;
				this->money = this->money + stake * 81;
				std::cout << "CONGRATS YOU WON : " << stake * 81 << std::endl;
				break;
			case 8:
				std::cout << "4 EIGHTS" << std::endl;
				this->money = this->money + stake * 64;
				std::cout << "CONGRATS YOU WON : " << stake * 64 << std::endl;
				break;
			case 7:
				std::cout << "4 SEVENS SECRET WIN" << std::endl;
				this->money = this->money + stake * 49;
				std::cout << "CONGRATS YOU WON : " << stake * 49 << std::endl;
				break;
			case 6:
				std::cout << "4 SIXES" << std::endl;
				this->money = this->money + stake * 36;
				std::cout << "CONGRATS YOU WON : " << stake * 36 << std::endl;
				break;
			case 5:
				std::cout << "4 FIVES" << std::endl;
				this->money = this->money + stake * 25;
				std::cout << "CONGRATS YOU WON : " << stake * 25 << std::endl;
				break;
			case 4:
				std::cout << "4 FOURS" << std::endl;
				this->money = this->money + stake * 16;
				std::cout << "CONGRATS YOU WON : " << stake * 16 << std::endl;
				break;
			case 3:
				std::cout << "4 THREES" << std::endl;
				this->money = this->money + stake * 9;
				std::cout << "CONGRATS YOU WON : " << stake * 9 << std::endl;
				break;
			case 2:
				std::cout << "STANDARD 2" << std::endl;
				this->money = this->money + stake * 4;
				std::cout << "CONGRATS YOU WON : " << stake * 4 << std::endl;
				break;
			}
		}
		else if (m.ThreeRow()) {
			switch (m.found) {
			case 15:
				std::cout << "CUTE KING WIN  " << std::endl;
				this->money = this->money + stake * 30;
				std::cout << "CONGRATS YOU WON : " << stake * 30 << std::endl;
				break;
			case 14:
				std::cout << "CUTE QUEEN WIN  " << std::endl;
				this->money = this->money + stake * 28;
				std::cout << "CONGRATS YOU WON : " << stake * 28 << std::endl;
				break;
			case 13:
				std::cout << "CUTE JACK WIN  " << std::endl;
				this->money = this->money + stake * 26;
				std::cout << "CONGRATS YOU WON : " << stake * 26 << std::endl;
				break;
			case 12:
				std::cout << "CUTE ACE WIN  " << std::endl;
				this->money = this->money + stake * 24;
				std::cout << "CONGRATS YOU WON : " << stake * 24 << std::endl;
				break;
			case 11:
				std::cout << "GOOD B WIN  " << std::endl;
				this->money = this->money + stake * 22;
				std::cout << "CONGRATS YOU WON : " << stake * 22 << std::endl;
				break;
			case 10:
				std::cout << "GOOD C WIN  " << std::endl;
				this->money = this->money + stake * 20;
				std::cout << "CONGRATS YOU WON : " << stake * 20 << std::endl;
				break;
			case 9:
				std::cout << "3 NINES  " << std::endl;
				this->money = this->money + stake * 18;
				std::cout << "CONGRATS YOU WON : " << stake * 18 << std::endl;
				break;
			case 8:
				std::cout << "3 EIGHTS  " << std::endl;
				this->money = this->money + stake * 16;
				std::cout << "CONGRATS YOU WON : " << stake * 16 << std::endl;
				break;
			case 7:
				std::cout << "3 SEVENS SECRET WIN" << std::endl;
				this->money = this->money + stake * 14;
				std::cout << "CONGRATS YOU WON : " << stake * 14 << std::endl;
				break;
			case 6:
				std::cout << "3 SIXES  " << std::endl;
				this->money = this->money + stake * 12;
				std::cout << "CONGRATS YOU WON : " << stake * 12 << std::endl;
				break;
			case 5:
				std::cout << "3 FIVES  " << std::endl;
				this->money = this->money + stake * 10;
				std::cout << "CONGRATS YOU WON : " << stake * 10 << std::endl;
				break;
			case 4:
				std::cout << "3 FOURS  " << std::endl;
				this->money = this->money + stake * 8;
				std::cout << "CONGRATS YOU WON : " << stake * 8 << std::endl;
				break;
			case 3:
				std::cout << "3 THREES  " << std::endl;
				this->money = this->money + stake * 6;
				std::cout << "CONGRATS YOU WON : " << stake * 6 << std::endl;
				break;
			case 2:
				std::cout << "STANDARD 2" << std::endl;
				this->money = this->money + stake * 4;
				std::cout << "CONGRATS YOU WON : " << stake * 4 << std::endl;
				break;
			}
		}
		games++;
   }
void Player::Stats() {
	std::cout << std::endl;
	std::cout << "NICNAME : " << nick << std::endl;
	std::cout << "MONEY : " << money << std::endl;
	std::cout << "GAMES PLAYED : " << games << std::endl;
	std::cout << std::endl;
}
void Player::setPlayer() {
	std::cout << "PLEASE ENTER NICKNAME : ";
	std::string ime;
	std::cin>> ime;
	this->nick = ime;
	std::cout << "HOW MUCH MONEY DO YOU WANT TO BET : ";
	std::cin >> money;
	this->money = money;
	std::cout << std::endl;
	std::cout << "STAKE : ";
	std::cin >> stake;
	this->stake = stake;
	std::cout << std::endl;
}
bool Player::MCheck() {
	return money >= stake;
}
float Player::GetM() {
	return money;
}
void Player::SetStake(int nstake) {
	if (nstake > 1) {
		this->stake = nstake;
	}
}

