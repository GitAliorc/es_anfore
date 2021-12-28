#ifndef OOP1_H_INCLUDED
#define OOP1_H_INCLUDED
#include<iostream>
class Anfora{
    public:
        Anfora();
        void visualizza();
        void pulisci();
        void riempiAnfora3l();
        void svuotaAnfora3l();
        void riempiAnfora5l();
        void svuotaAnfora5l();
        void trasferisci5lin3l();
        void trasferisci3lin5l();
        void vittoria();
        void menu();
        void gioco();
    private:
        int anfora3l = 0, anfora5l = 0;
        bool win = false;
};
#endif // OOP1_H_INCLUDED