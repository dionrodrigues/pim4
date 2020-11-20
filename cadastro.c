#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "paciente.h"

void cadastro()
{
    struct Paciente paciente;

    //Nome
    printf("Nome do paciente ......: ");
    scanf("%s", &paciente.nome);

    //CPF
    printf("CPF do paciente ......: ");
    scanf("%s", &paciente.cpf);

    //Telefone
    printf("Telefone do paciente .: ");
    scanf("%s", &paciente.telefone);

    //Rua
    printf("Rua do paciente ......: ");
    scanf("%s", &paciente.rua);

    //Numero
    printf("Numero do paciente ...: ");
    scanf("%d", &paciente.numero);

    //Bairro
    printf("Bairro do paciente ...: ");
    scanf("%s", &paciente.bairro);

    //Cidade
    printf("Cidade do paciente ...: ");
    scanf("%s", &paciente.cidade);

    //Estado
    printf("Estado do paciente ...: ");
    scanf("%s", &paciente.estado);

    //CEP
    printf("CEP do paciente ......: ");
    scanf("%s", &paciente.cep);

    printf("Paciente: %s cadastrado com sucesso! \n\n", paciente.nome);

    return 0;
}
