
#ifndef GameObject_H
#define GameObject_H

//#include "d3dUtil.h"
#include "d3dUtil.h"
#include "Box.h"
#include "constants.h"
#include <math.h>

class GameObject
{
public:

	GameObject();
	~GameObject();

	void init(Box *b, float r, Vector3 pos, Vector3 vel, float sp, float s);
	void draw();
	void update(float dt);

	void setBox(Box* b) {box = b;}
	void setPosition (Vector3 pos) {position = pos;}
	Vector3 getPosition() {return position;}
	void setVelocity (Vector3 vel) {velocity = vel;}
	void addVelocity(Vector3 vel) {velocity += vel;}
	Vector3 getVelocity() {return velocity;}
	void setSpeed(float s) {speed = s;}
	float getSpeed() {return speed;}
	void setRadius(float r) {radius = r; radiusSquared = (scale*r)*(scale*r);}
	float getRadiusSquare() {return radiusSquared;}
	float getRadius() {return radius;}
	Matrix getWorldMatrix() {return world;}
	void setScale(float s) {scale = s; radiusSquared = (s*radius)*(s*radius);}
	float getScale() {return scale;}
	void setActive() {active = true;}
	void setInActive() {active = false;}
	bool isActive() {return active;}
	bool isNotActive() {return !active;}
	void setMTech(ID3D10EffectTechnique* m){ mTech = m;}
	bool collided(GameObject *gameObject);
	bool willCollide(GameObject *gameObject, float dt);
	bool onTopOf(GameObject *gameObject);
	bool isAbove(GameObject *gameObject);
	void normlizeVelocity();
	float getBoxBottom();
	void deleteBox();

protected:
		Box *box;

private:
	Vector3 position;
	Vector3 velocity;
	float speed;
	float radius;
	float radiusSquared;
	bool active;
	Matrix world;
	float scale;
	ID3D10EffectTechnique* mTech;
};


#endif
