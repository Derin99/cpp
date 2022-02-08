#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
int Nota = 0;

cout << "INGRESE LA NOTA QUE OBTUVO: ";
cin >> Nota;

 if (Nota > 100 || Nota < 0) {
	
    cout << "Ingrese una nota que entre 0 - 100";
    return 0;
}

if (Nota >=100 && Nota <=100) {
    cout << "Obtuviste una A++";
}
    

if (Nota >=94 && Nota <= 95) {
    cout << "Obtuviste una A+";
    
}

if (Nota >=86 && Nota <= 90) {
    cout << "Obtuviste una A";
}

if (Nota >=80 && Nota <= 84) {
    cout << "Obtuviste una A-";
    
}

if (Nota >=80 && Nota <= 84) {
    cout << "Obtuviste una B+";
    
}

if (Nota >=70 && Nota <= 74) {
    cout << "Obtuviste una B";
    
}

if (Nota >=66 && Nota <= 70) {
    cout << "Obtuviste una B-";
    
}

if (Nota >=61 && Nota <= 65) {
    cout << "Obtuviste una C+";
}
    

if (Nota >=56 && Nota <= 60) {
    cout << "Obtuviste una C";
}
    

if (Nota >=51 && Nota <= 55) {
    cout << "Obtuviste una C-";
}

if (Nota >=46 && Nota <= 50) {
    cout << "Obtuviste una D+";
}
    
    if (Nota >=41 && Nota <= 45) {
    cout << "Obtuviste una D";
}
    
    if (Nota >=36 && Nota <= 40) {
    cout << "Obtuviste una D-";
}
    
    if (Nota >=31 && Nota <= 35) {
    cout << "Obtuviste una E+";
}

  if (Nota >=26 && Nota <= 30) {
    cout << "Obtuviste una E";
}
    
    if (Nota >=21 && Nota <= 25) {
    cout << "Obtuviste una E-";
}
    
    if (Nota >=16 && Nota <= 20) {
    cout << "Obtuviste una F+";
    
}
    if (Nota >=10 && Nota <= 15) {
    cout << "Obtuviste una F";
}

    if (Nota >=6 && Nota <= 10) {
    cout << "Obtuviste una F-";
}
    
    if (Nota >=0 && Nota <=0) {
    cout << "Obtuviste una F--";
}

return 0;

}
