switch(STATEMENTS){
    case A:
        // execute if statements == A
        break;
    case B:
        // execute if statements == B
        break;
        ..
        ..
        ..
    default:
        //execute if other options are not worked.
}


#include <iostream>
int main(){
    enum class RGB
    {
        RED,
        GREEN,
        BLUE
    };
    RGB color = RGB::GREEN;
    switch(color)
    {
        case RGB::RED:
            std::cout << "red\n";
        case RGB::GREEN:
            std::cout << "green\n";
        case RGB::BLUE:
            std::cout << "blue\n";
    }
    return 0;
}