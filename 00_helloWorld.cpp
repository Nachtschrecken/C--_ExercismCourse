#include "00_helloWorld.h"

using namespace std;

int main() {
    hello_world::hello();
    return 0;
}

namespace hello_world {

    

    string hello() {
        return "Hello, World!";
    }

}
