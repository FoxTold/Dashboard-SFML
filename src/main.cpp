#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window( sf::VideoMode( { 320, 480 } ), "SFML works!" );
	sf::CircleShape shape( 100.f );
	shape.setFillColor( sf::Color::Green );

	while ( window.isOpen() )
	{
		while ( const std::optional event = window.pollEvent() )
		{
			if ( event->is<sf::Event::Closed>() )
				window.close();
		}

		const auto font = sf::Font("resources/Roboto-Regular.ttf");
		auto text = sf::Text(font);
		text.setString("16.09,2026");
		text.setCharacterSize(32);
		text.setOutlineColor(sf::Color::White);

		window.clear();
		window.draw( shape );
		window.draw( text );
		window.display();
	}
}
