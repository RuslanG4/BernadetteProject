#include"Player.h"

Player::Player()
{
	loadContent();
	health = 100;
	speed = 5;
	score = 0;
	
}

sf::Sprite Player::draw()
{
	return body;
}

void Player::loadContent()
{
	if (!textureNorth.loadFromFile("ASSETS//IMAGES//PROJ//player_up.png"))
	{
		std::cout << "error loading up texture" << std::endl;
	}
	if (!textureSouth.loadFromFile("ASSETS//IMAGES//PROJ//player_down.png"))
	{
		std::cout << "error loading down texture" << std::endl;
	}
	if (!textureWest.loadFromFile("ASSETS//IMAGES//PROJ//player_left.png"))
	{
		std::cout << "error loading left texture" << std::endl;
	}
	if (!textureEast.loadFromFile("ASSETS//IMAGES//PROJ//player_right.png"))
	{
		std::cout << "error loading right texture" << std::endl;
	}
	body.setTexture(textureNorth);
	body.setPosition(location);
	body.setOrigin(32, 32);
}

void Player::shoot()
{
}

void Player::dies()
{
}

void Player::decreaseHealth()
{
}

void Player::moveLeft()
{
	body.setTexture(textureWest);
	sf::Vector2f move{ 0,0 };
	move.x -= speed;
	location += move;
	body.setPosition(location);
	if (location.x < 32)
	{
		location.x = 32.f;
	}
}

void Player::moveRight()
{
	body.setTexture(textureEast);
	sf::Vector2f move{ 0,0 };
	move.x += speed;
	location += move;
	body.setPosition(location);
	if (location.x > 768)
	{
		location.x = 768.f;
	}
}

void Player::moveUp()
{
	body.setTexture(textureNorth);
	sf::Vector2f move{ 0,0 };
	move.y -= speed;
	location += move;
	body.setPosition(location);
	if (location.y < 32)
	{
		location.y = 32.f;
	}
}

void Player::moveDown()
{
	body.setTexture(textureSouth);
	sf::Vector2f move{ 0,0 };
	move.y += speed;
	location += move;
	body.setPosition(location);
	if (location.y > 568)
	{
		location.y = 568.f;
	}
}

void Player::displayPlayerStats()
{
}

void Player::reSpawn()
{
}

void Player::increaseScore()
{
}

void Player::decreaseScore()
{
}
