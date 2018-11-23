#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
using namespace sf;

#ifndef _ENTITY_
#define _ENTITY_
class Entity {
public:
	Texture texture;
	Vector2f: point;
	Vector2f: speed;
	HP: float;
	enum ColType = {};
	bool active;
	list <Entity> generated;
	
	virtual void update(time);
	virtual void draw;
	};
#endif