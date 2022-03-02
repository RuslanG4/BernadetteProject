#pragma once

#include <SFML/Graphics.hpp>
#include<iostream>

class Player
{
	sf::Texture textureNorth; // the texture for player facing north

	sf::Texture textureSouth; // the texture for player facing south

	sf::Texture textureEast; // the texture for player facing east

	sf::Texture textureWest; // the texture for player facing west

	// Note instead of using the 4 texture images above you might choose to use a sprite sheet or one image and rotate it.

	sf::Sprite body; // sprite used to represent player

	sf::Vector2f location{ 300,300 };

	int health; // the health of the player

	int speed; // the speed of the player

	int score; // the player score

	int direction; // the direction the player is facing

	int noOfLives; // the number of lives the player has. When noOfLives is 0, he is dead.

	public:

	Player(); //constructor

	sf::Sprite draw(); //used to draw the player

	void loadContent(); // load the player image files

	void shoot(); //function to cause bullet to shoot

	void dies(); // the player dies

	void decreaseHealth(); // reduce player health

	void moveLeft(); // Used to move the player left but stay within the boundary of the screen.

	void moveRight();

	void moveUp();

	void moveDown();

	void displayPlayerStats(); // display the player health & score on the screen

	void reSpawn(); // the player respawns to the centre of on the screen

	void increaseScore(); // the player’s score increases

	void decreaseScore(); // the player’s score decreases
};