#include "header.h"

Anfora::Anfora(){};

void Anfora::riempiAnfora3l(){
    anfora3l = 3;
    menu();
};

void Anfora::riempiAnfora5l(){
    anfora5l = 5;
    menu();
};

void Anfora::svuotaAnfora3l(){
    anfora3l = 0;
    menu();
};

void Anfora::svuotaAnfora5l(){
    anfora5l = 0;
    menu();
};

void Anfora::trasferisci3lin5l(){
    anfora5l += anfora3l;
    if(anfora5l>5)
        anfora5l = 5;
    if(anfora5l == 4)
        vittoria();
    anfora3l -= anfora5l;
    menu();
};

void Anfora::trasferisci5lin3l(){
    if(anfora3l == 2 && anfora5l == 5){
        anfora3l = 3;
        anfora5l = 4;
        vittoria();
    }else{
        anfora3l += anfora5l;
        if(anfora3l>3)
            anfora3l = 3;
        anfora5l -= anfora3l;
        if(anfora5l == 4)
            vittoria();
        menu();
    } 
};

void Anfora::pulisci(){ 
    for(int i = 0; i < 80; i++)
        std::cout << std::endl;
};

void Anfora::menu(){
    std::cout << std::endl;    std::cout << std::endl;    std::cout << std::endl;
    std::cout << "+++++MENU' DI GIOCO+++++" << std::endl
              << "1) Riempire Anfora da 3L" << std::endl
              << "2) Riempire Anfora da 5L" << std::endl
              << "3) Travasare Anfora da 3L in quella da 5L" << std::endl
              << "4) Travasare Anfora da 5L in quella da 3L" << std::endl
              << "5) Svuotare Anfora da 3l" << std::endl
              << "6) Svuotare Anfora da 5l" << std::endl
              << "Situazione attuale:" << std::endl << std::endl;
    std::cout << "Anfora da 3L = " << anfora3l << std::endl;
    std::cout << "Anfora da 5L = " << anfora5l << std::endl;
};

void Anfora::vittoria(){
    pulisci();
    win = true;
    std::cout << "Hai risolto l'enigma complimenti !!!" << std::endl;
};

void Anfora::gioco(){
    int scelta;
    menu();
    std::cin >> scelta;
    switch(scelta){
        case 1:
            riempiAnfora3l();
            if(win != true)
                gioco();
            else
                vittoria();
        case 2:
            riempiAnfora5l();
            if(win != true)
                gioco();
            else
                vittoria();
        case 3:
            trasferisci3lin5l();
            if(win != true)
                gioco();
            else
                vittoria();
        case 4:
            trasferisci5lin3l();
            if(win != true)
                gioco();
            else
                vittoria();
        case 5:
            svuotaAnfora3l();
            if(win != true)
                gioco();
            else
                vittoria();
        case 6:
            svuotaAnfora5l();
            if(win != true)
                gioco();
            else
                vittoria();
        default:
            std::cout << "Inserire un numero valido!" << std::endl;
            if(win != true)
                gioco();
            else
                vittoria();
    };
};