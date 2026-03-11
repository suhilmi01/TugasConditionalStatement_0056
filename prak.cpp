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
int main() 
{
    float berat, tinggi, bmi;

cout << "====== Selamat Datang Mahasiswa Kelas A 2025 ======" << endl;
{
float berat, tinggi; 
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (m): ";
    cin >> tinggi;

    bmi = hitungBMI(berat, tinggi);

    cout << "Nilai BMI Anda: " << bmi << endl;
    cout << "Kondisi Berat Badan: " << kondisiBMI(bmi) << endl;

    return 0;
}
}