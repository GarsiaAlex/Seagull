#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include <list>

using namespace sf;
using namespace std;

#ifndef _ENTITY_
#define _ENTITY_
class Entity {
protected:
	Texture texture;
	Vector2f point;
	Vector2f speed;
	float HP;
	enum ColType {ship, missile};
	bool active;
	list <Entity> generated;

public:
	~Entity();
	virtual void update (Time);
	virtual void getColType();
	virtual void colAction(Entity other);
	};
#endif