#include "Entity.h"

#ifndef _PLAYER_
#define _PLAYER_
class Player : Entity {
private:
	int Score;

public:
	virtual void update(Time elapsed);
	virtual void ColType();
	void Shoot();
	};
#endif