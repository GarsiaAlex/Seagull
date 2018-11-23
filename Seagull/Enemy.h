#include "Entity.h"

#ifndef _ENEMY_
#define _ENEMY_
class Enemy : Entity {
private:
	int ROF;
public:
	virtual void update(Time);
	virtual void ColType();
};
#endif
