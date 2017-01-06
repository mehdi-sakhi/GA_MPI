#define CATCH_CONFIG_MAIN
#include "catch.hpp"

int main(int argc, char * argv[]) {
	int i = Catch::Session().run(argc, argv);
	system("pause");
	return i;
}
