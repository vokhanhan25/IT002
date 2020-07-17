#pragma once
class BloodGroup
{
protected:
	bool rh;
public:
	void Input();
	bool GetRh();
	virtual bool CheckGenetic(const char &, const char &) = 0;
	virtual char GetName() = 0;
	virtual bool GiveBlood(const char&, const bool & ) = 0;
};

