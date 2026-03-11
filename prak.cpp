#include <iostream>
using namespace std;
float hitungBMI(float berat, float tinggi) 
{
    return berat / (tinggi * tinggi);
}
string kondisiBMI(float bmi)
{

    if (bmi < 18.5) 
    {
        return "Berat Badan Kurang";
    }
    else if (bmi < 25) {
        return "Berat Badan Normal";
    }
    else if (bmi < 30) {
        return "Berat Badan Kelebihan";
    }
     else {
        return "Obesitas";

    }
}