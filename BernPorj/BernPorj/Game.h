/// <summary>
/// Ruslan Gavrilov 2022
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </s

#include <SFML/Graphics.hpp>
#include<iostream>
#include"Player.h"

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();
	
private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	

	void setupSprite();

	Player myPlayer;

	sf::RenderWindow m_window; // main SFML window


	sf::Texture m_bgTexture; // texture used for sfml logo
	sf::Sprite m_bgSprite; // sprite used for sfml logo
	bool m_exitGame; // control exiting game

	
};

#endif // !GAME_HPP

