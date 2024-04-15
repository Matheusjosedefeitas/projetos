#include <iostream>

using namespace std;

int main()
{
    char resp;
    float nota = 0, nota2 = 0, nota3 = 0;
    int p1, p2, sub;
    int media;
    string nome;
    cout << "escreva o seu nome: " << endl;
    getline(cin, nome);
    cout << "1) qual a capital de brasila" << endl;
    cout << "a) brasila" << endl;
    cout << "b) sp" << endl;
    cout << "c) rj" << endl;
    cout << "d) sul" << endl;
    cin >> resp;
    if (resp == 'a')
    {
        nota = nota + 1;
    }

    cout << "2) Quem foi o primeiro presidente dos Estados Unidos?" << endl;
    cout << "a) George Washington" << endl;
    cout << "b) Abraham Lincoln" << endl;
    cout << "c) Thomas Jefferson" << endl;
    cout << "d) John Adams" << endl;
    cin >> resp;
    if (resp == 'a')
    {
        nota = nota + 1;
    }

    cout << "3) Qual e a capital da Austrália?" << endl;
    cout << "a) Sydney" << endl;
    cout << "b) Melbourne" << endl;
    cout << "c) Brisbane" << endl;
    cout << "d) Canberra" << endl;
    cin >> resp;
    if (resp == 'd')
    {
        nota = nota + 1;
    }

    cout << "4) Qual e o maior oceano do mundo? " << endl;
    cout << "a) Oceano Atlatico" << endl;
    cout << "b) Oceano Pacífico" << endl;
    cout << "c) Oceano indico" << endl;
    cout << "d) Oceano Antártico" << endl;
    cin >> resp;
    if (resp == 'b')
    {
        nota = nota + 1;
    }

    cout << "5) Quem escreveu a peca de teatro Romeu e Julieta? " << endl;
    cout << "a) William Shakespeare" << endl;
    cout << "b) George Bernard Shaw" << endl;
    cout << "c) Arthur Miller" << endl;
    cout << "d) Tennessee Williams" << endl;
    cin >> resp;
    if (resp == 'b')
    {
        nota = nota + 1;
    }

    cout << "6) Qual e a capital do Canada? " << endl;
    cout << "a) Montreal" << endl;
    cout << "b) Vancouver" << endl;
    cout << "c) Ottawa" << endl;
    cout << "d) Toronto" << endl;
    cin >> resp;
    if (resp == 'b')
    {
        nota = nota + 1;
    }

    cout << "7) Qual e o símbolo químico do elemento ouro?" << endl;
    cout << "a) O" << endl;
    cout << "b) Au" << endl;
    cout << "a) Ag" << endl;
    cout << "a) Fe" << endl;
    cin >> resp;
    if (resp == 'b')
    {
        nota = nota + 1;
    }

    cout << "8) Quem pintou a obra A Noite Estrelada" << endl;
    cout << "A) Vincent van Gogh" << endl;
    cout << "B) Leonardo da Vinci" << endl;
    cout << "C) Pablo Picasso" << endl;
    cout << "D) Claude Monet" << endl;
    cin >> resp;
    if (resp == 'a')
    {
        nota = nota + 1;
    }

    cout << "9) Quem foi o primeiro homem a pisar na Lua?" << endl;
    cout << "A) Neil Armstrong" << endl;
    cout << "B) Buzz Aldrin" << endl;
    cout << "C) Yuri Gagarin" << endl;
    cout << "D) Alan Shepard" << endl;
    cin >> resp;
    if (resp == 'a')
    {
        nota = nota + 1;
    }

    cout << "Quais sao os quatro tipos de sangue?" << endl;
    cout << "A) A, B, AB, O" << endl;
    cout << "B) A, B, C, D" << endl;
    cout << "C) X, Y, Z, W" << endl;
    cout << "D) A, X, Y, Z" << endl;
    cin >> resp;
    if (resp == 'a')
    {
        nota = nota + 1;
    }

    p1 = nota;

    cout << "1) qual a capital de brasila" << endl;
    cout << "a) brasila" << endl;
    cout << "b) sp" << endl;
    cout << "c) rj" << endl;
    cout << "d) sul" << endl;
    cin >> resp;
    if (resp == 'a')
    {
        nota2 = nota2 + 1;
    }

    cout << "2) Quem foi o primeiro presidente dos Estados Unidos?" << endl;
    cout << "a) George Washington" << endl;
    cout << "b) Abraham Lincoln" << endl;
    cout << "c) Thomas Jefferson" << endl;
    cout << "d) John Adams" << endl;
    cin >> resp;
    if (resp == 'a')
    {
        nota2 = nota2 + 1;
    }

    cout << "3) Qual e a capital da Australia?" << endl;
    cout << "a) Sydney" << endl;
    cout << "b) Melbourne" << endl;
    cout << "c) Brisbane" << endl;
    cout << "d) Canberra" << endl;
    cin >> resp;
    if (resp == 'd')
    {
        nota2 = nota2 + 1;
    }

    cout << "4) Qual e o maior oceano do mundo? " << endl;
    cout << "a) Oceano Atlatico" << endl;
    cout << "b) Oceano Pacífico" << endl;
    cout << "c) Oceano Índico" << endl;
    cout << "d) Oceano Antártico" << endl;
    cin >> resp;
    if (resp == 'b')
    {
        nota2 = nota2 + 1;
    }

    cout << "5) Quem escreveu a peca de teatro Romeu e Julieta? " << endl;
    cout << "a) William Shakespeare" << endl;
    cout << "b) george bernard" << endl;
    cout << "c) arthur miller" << endl;
    cout << "d) tennesse williams" << endl;
    cin >> resp;
    if (resp == 'b')
    {
        nota2 = nota2 + 1;
    }

    cout << "6) Qual e a capital do Canada? " << endl;
    cout << "a) Montreal" << endl;
    cout << "b) Vancouver" << endl;
    cout << "c) Ottawa" << endl;
    cout << "d) Toronto" << endl;
    cin >> resp;
    if (resp == 'b')
    {
        nota2 = nota2 + 1;
    }

    cout << "7) Qual e o símbolo químico do elemento ouro?" << endl;
    cout << "a) O" << endl;
    cout << "b) Au" << endl;
    cout << "a) Ag" << endl;
    cout << "a) Fe" << endl;
    cin >> resp;
    if (resp == 'b')
    {
        nota2 = nota2 + 1;
    }

    cout << "8) Quem pintou a obra A Noite Estrelada" << endl;
    cout << "A) Vincent van Gogh" << endl;
    cout << "B) Leonardo da Vinci" << endl;
    cout << "C) Pablo Picasso" << endl;
    cout << "D) Claude Monet" << endl;
    cin >> resp;
    if (resp == 'a')
    {
        nota2 = nota2 + 1;
    }

    cout << "9) Quem foi o primeiro homem a pisar na Lua?" << endl;
    cout << "A) Neil Armstrong" << endl;
    cout << "B) Buzz Aldrin" << endl;
    cout << "C) Yuri Gagarin" << endl;
    cout << "D) Alan Shepard" << endl;
    cin >> resp;
    if (resp == 'a')
    {
        nota2 = nota2 + 1;
    }

    cout << "Quais sao os quatro tipos de sangue?" << endl;
    cout << "A) A, B, AB, O" << endl;
    cout << "B) A, B, C, D" << endl;
    cout << "C) X, Y, Z, W" << endl;
    cout << "D) A, X, Y, Z" << endl;
    cin >> resp;
    if (resp == 'a')
    {
        nota2 = nota2 + 1;
    }

    p2 = nota2;

    media = (p1 + p2) / 2;

    if (media >= 6)
    {
        cout << "parabens " << nome
             << " vc tirou " << media << endl;
    }
    else
    {
        cout << "bem vindo a sub " << nome
             << " vc tirou " << nota << " bora comesar a sub" << endl;

        cout << "1) qual a capital de brasila" << endl;
        cout << "a) brasila" << endl;
        cout << "b) sp" << endl;
        cout << "c) rj" << endl;
        cout << "d) sul" << endl;
        cin >> resp;
        if (resp == 'a')
        {
            nota3 = nota3 + 1;
        }

        cout << "2) Quem foi o primeiro presidente dos Estados Unidos?" << endl;
        cout << "a) George Washington" << endl;
        cout << "b) Abraham Lincoln" << endl;
        cout << "c) Thomas Jefferson" << endl;
        cout << "d) John Adams" << endl;
        cin >> resp;
        if (resp == 'a')
        {
            nota3 = nota3 + 1;
        }

        cout << "3) Qual e a capital da Australia?" << endl;
        cout << "a) Sydney" << endl;
        cout << "b) Melbourne" << endl;
        cout << "c) Brisbane" << endl;
        cout << "d) Canberra" << endl;
        cin >> resp;
        if (resp == 'd')
        {
            nota3 = nota3 + 1;
        }

        cout << "4) Qual e o maior oceano do mundo? " << endl;
        cout << "a) Oceano Atlatico" << endl;
        cout << "b) Oceano Pacífico" << endl;
        cout << "c) Oceano Índico" << endl;
        cout << "d) Oceano Antártico" << endl;
        cin >> resp;
        if (resp == 'b')
        {
            nota3 = nota3 + 1;
        }

        cout << "5) Quem escreveu a peça de teatro Romeu e Julieta? " << endl;
        cout << "a) William Shakespeare" << endl;
        cout << "b) George Bernard Shaw" << endl;
        cout << "c) Arthur Miller" << endl;
        cout << "d) Tennessee Williams" << endl;
        cin >> resp;
        if (resp == 'b')
        {
            nota3 = nota3 + 1;
        }

        cout << "6) Qual e a capital do Canada? " << endl;
        cout << "a) Montreal" << endl;
        cout << "b) Vancouver" << endl;
        cout << "c) Ottawa" << endl;
        cout << "d) Toronto" << endl;
        cin >> resp;
        if (resp == 'b')
        {
            nota3 = nota3 + 1;
        }

        cout << "7) Qual e o simbolo quimico do elemento ouro?" << endl;
        cout << "a) O" << endl;
        cout << "b) Au" << endl;
        cout << "a) Ag" << endl;
        cout << "a) Fe" << endl;
        cin >> resp;
        if (resp == 'b')
        {
            nota3 = nota3 + 1;
        }

        cout << "8) Quem pintou a obra A Noite Estrelada" << endl;
        cout << "A) Vincent van Gogh" << endl;
        cout << "B) Leonardo da Vinci" << endl;
        cout << "C) Pablo Picasso" << endl;
        cout << "D) Claude Monet" << endl;
        cin >> resp;
        if (resp == 'a')
        {
            nota3 = nota3 + 1;
        }

        cout << "9) Quem foi o primeiro homem a pisar na Lua?" << endl;
        cout << "A) Neil Armstrong" << endl;
        cout << "B) Buzz Aldrin" << endl;
        cout << "C) Yuri Gagarin" << endl;
        cout << "D) Alan Shepard" << endl;
        cin >> resp;
        if (resp == 'a')
        {
            nota3 = nota3 + 1;
        }

        cout << "Quais sao os quatro tipos de sangue?" << endl;
        cout << "A) A, B, AB, O" << endl;
        cout << "B) A, B, C, D" << endl;
        cout << "C) X, Y, Z, W" << endl;
        cout << "D) A, X, Y, Z" << endl;
        cin >> resp;
        if (resp == 'a')
        {
            nota3 = nota3 + 1;
        }

        sub = nota3;

        int maior;
        if (p1 > p2)
        {
            maior = p1;
        }
        else
        {
            maior = p2;
        }

        media = (maior + sub) / 2;

        if (media >= 6)
        {
            cout << "parabens " << nome << " vc tirou " << media << endl;
        }
        else
        {
            cout << "vc repetiu de materia " << nome << " sua nota foi " << media << endl;
        }
    }
}