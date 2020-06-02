#pragma once

namespace particle
{
struct Particle
{
	double m_x;
	double m_y;

	double m_speed;
	double m_direction;

public:
	Particle();
	virtual ~Particle();
	void update();
};
}


