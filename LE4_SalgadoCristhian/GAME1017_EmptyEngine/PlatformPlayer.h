#pragma once
#ifndef _PLATFORMPLAYER_H_
#define _PLATFORMPLAYER_H_

#include "GameObject.h"
#define GRAVITY 2.0
#define JUMPFORCE 25.0

enum PlayerState { STATE_IDILING, STATE_RUNNING, STATE_JUMPING };

class PlatformPlayer : public AnimatedSpriteObject

{
public:
	PlatformPlayer(SDL_Rect s, SDL_FRect d);
	void Update();
	void Render();

	//Getters and Setters
	void Stop();
	void StopX();
	void StopY();
	void SetAccelX(double a);
	void SetAccely(double a);
	void setX(float x);
	void setY(float y);
	void SetGrounded(bool g);
	bool IsGrounded();
	double GetVelX();
	double GetVelY();

private:
	bool isGrounded,  m_isFacingLeft;
	double m_accelX,  m_accelY,
		   m_velX,    m_velY,
		   m_maxVelX, m_maxVelY,
		   m_drag,    m_grav;
	PlayerState m_state;

};

#endif