#include "Player.h"
#include <stdlib.h>  
#include <time.h>   


Player::Player()
{
	srand(time(NULL));
	position = Vector3(rand() % 1000 - 500, rand() % 1000 - 500, rand() % 100);
	//rotation = Quat(rand(), rand(), rand());
	scale = Vector3(rand() % 10, rand() % 10, rand() % 10);
	life = rand() % 300;
	armor = rand() % 50;
	money = rand() % (99999999*2) - 99999999;
}

void Player::Reset()
{
	position.x = 0;
	position.y = 0;
	position.z = 0;

	rotation.x = 0;
	rotation.y = 0;
	rotation.z = 0;

	scale.x = 0;
	scale.y = 0;
	scale.z = 0;

	life = 0;
	armor = 0;
	money = 0;

}

void Player::Display()
{
	std::cout << '\n';
	std::cout << name;
	std::cout << "\nPosition : " << position.x << " " << position.y << " " << position.z;
	std::cout << "\nRotation : " << rotation.x << " " << rotation.y << " " << rotation.z << " " << rotation.w;
	std::cout << "\nScale : "    << scale.x << " " << scale.y << " " << scale.z;
	std::cout << "\nLife : " << life;
	std::cout << "\nArmor : " << armor;
	std::cout << "\nMoney : " << money;

}

void Player::Write(Serializer& s)
{

}

void Player::Read(Deserializer& s)
{
}