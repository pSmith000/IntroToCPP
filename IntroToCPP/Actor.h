#pragma once
class Actor
{
public:
	Actor();
	Actor(const char* name) { m_name = name; }
	~Actor();

	virtual void start() { m_started = true; };
	virtual void update() {};
	virtual void draw() {};
	virtual void end() {};

private:
	const char* m_name;
	bool m_started;
};
