#include "menu.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void CABECALHO(void);
void CABECALHO_MALVADER(void);
void MENU_PRINCIPAL(void);
void SENHA_FUN(void);
void MENU_FUNCIONARIO(void);
void ABRE_CONTA(void);
void CLIENTE_POUPANCA(void);
void CLIENTE_CORRENTE(void);
void CADASTRA_FUNCIONARIO(void);
void CONSULTA_DADOS(void);
void CONSULTA_CONTA(void);
void CONSULTA_FUNCIONARIO(void);
void CONSULTA_POUPANCA(void);
void ALTERA_DADOS(void);
void ALTERA_CONTA(void);
void ALTERA_FUNCIONARIO(void);
void ALTERA_CLIENTE(void);
void EXCLUIR(void);
void GERAR_RELATORIO(void);
void MENU_CLIENTE(void);
void SALDO(void);
void DEPOSITO(void);
void SAQUE(void);
void EXTRATO(void);
void CONSULTA_LIMITE(void);
int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL,"Portuguese");
	system("color 5");
	CABECALHO();
	MENU_PRINCIPAL();	
	getch();
	return 0;
}
