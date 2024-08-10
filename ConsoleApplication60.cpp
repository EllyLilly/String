// ConsoleApplication60.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string> //для функции getline
using namespace std;

//Строки - string
//Строки - не примитивный тип данных, а класс, кот обеспечивает 
//верхнеуровневую работу с текстом
int main()
{
    string str;
    //Строки взаимодействуют с cin и cout так же как и примитивные типы данных
    //Сколько угодно символов можно вводить. Очищать не надо.
    //Ввод заканчивается на пробеле - символ разделения слов
    

    //Если мы хотим ввести строку вместе с пробелом, то пользуемся функцией getline
    /*
    getline(
        Поток ввода (десскриптор),
        Строка
        
    )
    */
    //getchar()
    string buffer;
    getline(cin, buffer);
    cout << '!' << buffer << '!';

    {
        cout << "Enter your name: "; cin >> str;
        cout << "Welcome! " << str;

        int a, b;
        cin >> a >> b;
        cout << a + b;

        string str1, str2;
        cin >> str1 >> str2;
        cout << '!' << str1 << '!' << str2 << '!' << endl;
    }

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
