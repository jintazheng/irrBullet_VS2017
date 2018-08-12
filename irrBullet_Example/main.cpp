#include <irrlicht.h>
#include "helloworldexample.h"
#include "affectorsexample.h"
#include "characterexample.h"
#include "collisionexample.h"
#include "liquidbodyexample.h"
#include "loadsceneexample.h"
#include "raycasttankexample.h"
#include "softbodyexample.h"

#include <iostream>

int main()
{
	std::cout << "show example: input \n\
1: hello world \n \
2: affector \n \
3: character \n \
4: collision \n \
5: liquid body \n \
6: load scene \n \
7: ray cast tank \n \
8: soft body \n \
8: exit \n";
	int i;
	std::cin >> i;
	switch (i)
	{
	case 1:
	{
		//hello world
		CHelloWorldExample example1;
		example1.runExample();
		break;
	}
	case 2:
	{
		//affector
		CAffectorsExample example2;
		example2.runExample();
		break;
	}
	case 3:
	{
		//character
		CCharacterExample example3;
		example3.runExample();
		break;
	}
	case 4:
	{
		//collision
		CCollisionExample example4;
		example4.runExample();
		break;
	}
	case 5:
	{
		//liquid body
		CLiquidbodyExample example5;
		example5.runExample();
		break;
	}
	case 6:
	{
		//load scene
		CLoadSceneExample example6;
		example6.runExample();
		break;
	}
	case 7:
	{
		//ray cast tank
		CRaycastTankExample example7;
		example7.runExample();
		break;
	}
	case 8:
	{
		//soft body
		CSoftbodyExample example8;
		example8.runExample();
		break;
	}
	}
    return 0;
}
