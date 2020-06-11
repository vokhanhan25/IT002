#include <iostream>

using namespace std;

class RECTANGLE {};
class SQUARE: public RECTANGLE {};

class POINT{};
class POLYGON {
	POINT* p;
};

class STAFF{};
class DIRECTOR: public STAFF {};

class ELIP{};
class CIRCLE: public ELIP {};

class ENGINE{};
class AIRPLANE {
	ENGINE* a;
};

class WORD{};
class SENTENCE {
	WORD* s;
};

class GOODS{};
class COSMETIC : public GOODS {};

class CROP{};
class RICE: public CROP {};


class BOOK{};
class LIBRARY{
	BOOK* b;
};

class MOVIE{};
class CARTOON: public MOVIE{};

int main() {

}