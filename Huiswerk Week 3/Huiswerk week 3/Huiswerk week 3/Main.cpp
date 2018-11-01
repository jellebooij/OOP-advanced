#include "Farmer.h"
#include "Soldier.h"
#include "Orc.h"
#include "Shaman.h"

int main() {

	Npc* henk = &Shaman(&Soldier(&Farmer(&Orc("Piet"))));
	(henk)->render();

	std::cin.get();

	return 0;

}