

#include <iostream>

class pelajar;
class manusia {
	public:
    void shownilaipelajar(pelajar& x);

};

class pelajar {
private:
    int nilai;
public:
    pelajar() { nilai = 100; }
    friend void manusia::shownilaipelajar(pelajar& x);
};

void manusia::shownilaipelajar(pelajar& x) {
    std::cout << x.nilai;
}

int main()
{

}

