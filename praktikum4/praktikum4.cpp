#include <iostream>
#include  <string>
using namespace std;

class mahasiswa {
private:
    string nama;
public:
    friend void setNama(mahasiswa& a, string);
};

void setNama(mahasiswa& a, string Pnama) {
    a.nama = Pnama;
}

int main() {
    mahasiswa joko;
    setNama(joko, "kairi kumar");
    return 0;
}