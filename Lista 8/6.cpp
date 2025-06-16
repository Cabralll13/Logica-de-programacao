#include <iostream>
#include <string>
using namespace std;

struct horario
{
    int hora;
    int minuto;
    int segundo;
};

struct data
{
    int dia;
    int mes;
    int ano;
};

struct compromisso
{
    data dataCompromisso;
    horario horarioCompromisso;
    string descricao;
};
