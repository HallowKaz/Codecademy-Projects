#include <iostream>

int main() {

int dog_age = 3; // int dec
int early_years;
int later_years;
int human_years;
early_years=21; // variable assignment
later_years=(dog_age-2)*4; // later years calc
human_years=early_years+later_years; // human years
std::cout << "My name is Cooper! Riff ruff, I am " << human_years << " years old in human years.\n";
}