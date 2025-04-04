#include "Serie.hpp"
#include <iostream>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>

using namespace ftxui;

int main(int argc, char const *argv[])
{
    ftxui::Screen pantalla(10, 10);
    
    Screen pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Full()
    );

    auto document = hbox({
        vbox()
    });
  
    ftxui::Render(pantalla,docuento);

    return EXIT_SUCCESS;
}