#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>
#include<windows.h> 	
void CABECALHO()
{system("color 8");
	printf("Seja bem-vindo!\n");
	printf("\n\n");
	printf(" #     #    #    #    #     #    #    ######  ####### ######   \n");
	printf(" ##   ##   # #   #    #     #   # #   #     # #       #     #  \n");
	printf(" # # # #  #   #  #    #     #  #   #  #     # #       #     #  \n");
	printf(" #  #  # #     # #    #     # #     # #     # #####   ######   \n");
	printf(" #     # ####### #     #   #  ####### #     # #       #   #    \n");
	printf(" #     # #     # #      # #   #     # #     # #       #    #   \n");
	printf(" #     # #     # ####### #    #     # ######  ####### #     #  \n");
	printf("\n\n");
	printf("		######     #    #     # #    # \n");
	printf("		#     #   # #   ##    # #   #  \n");
	printf("		#     #  #   #  # #   # #  #   \n");
	printf("		######  #     # #  #  # ###    \n");
	printf("		#     # ####### #   # # #  #   \n");
	printf("		#     # #     # #    ## #   #  \n");
	printf("		######  #     # #     # #    # \n");
}
void CABECALHO_MALVADER()
{
		system("color 2");
		printf(" #     #    #    #    #     #    #    ######  ####### ######   \n");
		printf(" ##   ##   # #   #    #     #   # #   #     # #       #     #  \n");
		printf(" # # # #  #   #  #    #     #  #   #  #     # #       #     #  \n");
		printf(" #  #  # #     # #    #     # #     # #     # #####   ######   \n");
		printf(" #     # ####### #     #   #  ####### #     # #       #   #    \n");
		printf(" #     # #     # #      # #   #     # #     # #       #    #   \n");
		printf(" #     # #     # ####### #    #     # ######  ####### #     #  \n");
		printf("\n\n");
		printf("		######     #    #     # #    # \n");
		printf("		#     #   # #   ##    # #   #  \n");
		printf("		#     #  #   #  # #   # #  #   \n");
		printf("		######  #     # #  #  # ###    \n");
		printf("		#     # ####### #   # # #  #   \n");
		printf("		#     # #     # #    ## #   #  \n");
		printf("		######  #     # #     # #    # \n");
		printf("\n\n");
		printf("\n\n*************************************************************\n");
		printf("************* AQUI O SEU DINHEIRO GANHA FORÇAS! *************\n");
		printf("*************************************************************\n\n");
		printf("\n\n");
}
void MENU_PRINCIPAL()
{	system("color 1");
	setlocale(LC_ALL,"Portuguese");
	int opcao;
	do
	{
		printf("\n\n");
		printf("Tecle a opcao desejada:\n");
		printf("[1]. Funcionário\n");
		printf("[2]. Cliente\n");
		printf("[3]. Sair \n");
		scanf("%d",&opcao);
		system("cls");
		switch(opcao)
		{
			case 1:SENHA_FUN(); 		    
				break;
			case 2: MENU_CLIENTE();
				break;
			case 3: CABECALHO_MALVADER();				
				exit(1);
				break;
			default:
				printf("Opcão inválida!\n\n");
				getch();
				break;								
		}
	}while(opcao!=3);		
}
void SENHA_FUN()
{system("color 3");
	int login;
	int senha;
	printf("Login: ");
	scanf("%d",&login);
	printf("Senha: ");
	scanf("%d",&senha);
	system("cls");	
	if (login==123 && senha==123)
	{
		MENU_FUNCIONARIO();
	}
	else 
	{
		system("cls");
		printf("Login ou Senha inválido!\n\n");
		CABECALHO();
		MENU_PRINCIPAL();
		getch();
		system("cls");
	}
}
void MENU_FUNCIONARIO()
{	system("color F");
	printf("**************************************\n");
	printf("********** MENU FUNCIONÁRIO **********\n");
	printf("**************************************\n");
	printf("\n");	
	int opcao1;
		do
		{
			printf("Tecle a opção desejada:\n\n");
			printf("[1]. Abertura de Conta\n");
			printf("[2]. Encerramento de Conta\n");
			printf("[3]. Consultar Dados\n");
			printf("[4]. Alterar Dados\n");
			printf("[5]. Cadastro de Funcionário\n");
			printf("[6]. Gerar Relatório\n");
			printf("[7]. Sair\n");
			scanf("%d",&opcao1);
			system("cls");
			switch(opcao1)
			{
				case 1:ABRE_CONTA();
					break;
				case 2:EXCLUIR();
					break;					
				case 3:CONSULTA_DADOS();
					break;
				case 4:ALTERA_DADOS();
					break;
				case 5: CADASTRA_FUNCIONARIO();
					break;
				case 6: GERAR_RELATORIO();
					break;
				case 7: system("cls");
						CABECALHO();
						MENU_PRINCIPAL();					
					break;
				default:
					printf("Opcão inválida!\n\n");
					getch();
					break;																		
			}		
		}while(opcao1!=7);			
}
//Essa e apenas uma função de meu para a criação 
void ABRE_CONTA()
{
	int opcao2;
	printf("***************************************\n");
	printf("********** Abertura de Conta **********\n");
	printf("***************************************\n");
	printf("\n");
	do
	{
		printf("Tecle a opção desejada:\n\n");
		printf("[1]. Conta Poupança-CP\n");
		printf("[2]. Conta Corrente-CC\n");
		printf("[3]. Voltar \n");
		scanf("%d",&opcao2);
		system("cls");
		switch(opcao2)
		{
			case 1:	CLIENTE_POUPANCA();
				break;
			case 2:CLIENTE_CORRENTE();
				break;
			case 3:MENU_FUNCIONARIO();
				break;
			default:
				printf("Opcão inválida!\n\n");
				getch();
				break;	
		}	
	}while(opcao2!=3);		
}
// Struct do CLIENTE_POUPANCA
struct POUPANCA_DATA
{
	int dia_cp;
	int mes_cp;
	int ano_cp;
};
struct POUPANCA_ENDERECO
{
	int cep_cp;
	char local_cp[50];
	int num_casa_cp;
	char bairro_cp[50];
	char cidade_cp[50];
	char estado_cp[50];  
};
struct REGISTRO_POUPANCA
{
	int agencia_cp;
	int num_conta_cp;
	char nome_cp[50];
	char cpf_cp[15];
	struct POUPANCA_DATA data_cp;
	char contato_cp[15];
	struct POUPANCA_ENDERECO endereco_cp;
	int senha_cp;
};
// FUNÇÃO QUE CRIA CONTA DO CLIENTE POUPANÇA.
void CLIENTE_POUPANCA()
{
	printf("************************************************\n");
	printf("********** Abertura de Conta poupança **********\n");
	printf("************************************************\n\n");
	printf("\n");
	FILE* arquivo_poupanca;
	struct REGISTRO_POUPANCA registro_cp;
	arquivo_poupanca=fopen("arquivo_poupanca.txt","ab");//apende  bineri abre uma arquivo novo se não existir caso exista ele adiciona no final do arquivo.
	if(arquivo_poupanca==NULL)
	{
		printf("Erro na abertura do arquivo!\n");
	}
	else
	{
        printf("Agência :\n");
        scanf("%d", &registro_cp.agencia_cp);
        fflush(stdin);
        printf("N° Conta :\n");
        scanf("%d", &registro_cp.num_conta_cp);
        printf("Nome: :\n");
        fflush(stdin);
        gets(registro_cp.nome_cp);
        printf("CPF :\n");
        fflush(stdin);
        gets(registro_cp.cpf_cp);
        fflush(stdin);
        printf("Data de Nascimento DD/MM/AAAA:\n");
        scanf("%d" ,&registro_cp.data_cp.dia_cp); 
        scanf("%d", &registro_cp.data_cp.mes_cp);
        scanf("%d", &registro_cp.data_cp.ano_cp);
        printf("Contato :\n");
        fflush(stdin);
        gets(registro_cp.contato_cp);
        printf("Endereço do Cliente:\n");
        printf("Cep :\n");
        scanf("%d", &registro_cp.endereco_cp.cep_cp);
        printf("Logradouro:\n");
        fflush(stdin);
        gets(registro_cp.endereco_cp.local_cp);
        printf("N° casa:\n");
        scanf("%d", &registro_cp.endereco_cp.num_casa_cp);
        printf("Bairro:\n");
        fflush(stdin);
        gets(registro_cp.endereco_cp.bairro_cp);
        printf("Cidade:\n");
        fflush(stdin);
        gets(registro_cp.endereco_cp.cidade_cp);
        printf("Estado:\n");
        fflush(stdin);
        gets(registro_cp.endereco_cp.estado_cp);
        printf("Senha:\n");
        scanf("%d", &registro_cp.senha_cp);
        fwrite(&registro_cp, sizeof(struct REGISTRO_POUPANCA), 1, arquivo_poupanca);
        fclose(arquivo_poupanca);
        getch();
        system("cls");
        printf("\n**********************************************\n");
        printf("********** Conta Aberta Com Sucesso **********\n");
        printf("**********************************************\n\n");
        printf("\n");
        printf("Agência: %d\n", registro_cp.agencia_cp);
        printf("N° Conta: %d\n", registro_cp.num_conta_cp);
        printf("Nome: %s\n", registro_cp.nome_cp);
        printf("CPF: %s\n", registro_cp.cpf_cp);
        printf("Data de Nascimento: %02d/%02d/%04d\n", registro_cp.data_cp.dia_cp, registro_cp.data_cp.mes_cp, registro_cp.data_cp.ano_cp);
        printf("Contato: %s\n", registro_cp.contato_cp);
        printf("Cep: %d\n", registro_cp.endereco_cp.cep_cp);
        printf("Logradouro: %s\n", registro_cp.endereco_cp.local_cp);
        printf("N° casa: %d\n", registro_cp.endereco_cp.num_casa_cp);
        printf("Bairro: %s\n", registro_cp.endereco_cp.bairro_cp);
        printf("Cidade: %s\n", registro_cp.endereco_cp.cidade_cp);
        printf("Estado: %s\n", registro_cp.endereco_cp.estado_cp);
        printf("Senha: %d\n", registro_cp.senha_cp);
        getch();
        system("cls");  			
	}
}
struct DATA_VENCIMENTO
{
	int venc_dia;
	int venc_mes;
	int venc_ano;
};
struct DATA_NASCIMENTO
{
	int aniv_dia;
	int aniv_mes;
	int aniv_ano;
};
struct ENDERECO_CORRENTE
{
	int cep_cc;
	char local_cc[50];
	int num_casacc;
	char bairro_cc[50];
	char cidade_cc[50];
	char estado_cc[50];
};
struct REGISTRO_CORRENTE
{
	char tipo_conta_cc[50];
	int agencia_cc;
	int num_conta_cc;
	float limite_cc;
	float saldo_cc;
	float valor_deposito;
	float valor_saque;
	struct DATA_VENCIMENTO venci_cc;
	char nome_cc[50];
	char cpf_cc[15];
	struct DATA_NASCIMENTO nasci_cc;
	char contato_cc[15];
	struct ENDERECO_CORRENTE endereco_cc;
	int senha_cc;
};
struct TRANSACAO {
    char tipo[10]; // "Deposito" ou "Saque"
    float valor;
    char data[20]; // Data da transação
};
void CLIENTE_CORRENTE()
{
	printf("************************************************\n");
	printf("********** Abertura de Conta Corrente **********\n");
	printf("************************************************\n\n");
	printf("\n");
	FILE* arquivo_corrente;
	struct REGISTRO_CORRENTE registro_cc;
	arquivo_corrente=fopen("arquivo_corrente.txt","ab");//apende modo binario abre uma arquivo novo se não existir caso exista ele adiciona no final do arquivo.
	if(arquivo_corrente==NULL)
	{
		printf("Erro na abertura do arquivo!\n");
	}
	else
	{   		
		printf("Tipo de Conta:\n");
		fflush(stdin);
		gets(registro_cc.tipo_conta_cc);
		printf("Agência :\n");
		scanf("%d", &registro_cc.agencia_cc);
		printf("N° Conta:\n");
		scanf("%d", &registro_cc.num_conta_cc);
		printf("Limite: \n");
		scanf("%f", &registro_cc.limite_cc);
		printf("Data de Vencimento DD/MM/AAAA:\n");
		scanf("%d",&registro_cc.venci_cc.venc_dia); 	
		scanf("%d",&registro_cc.venci_cc.venc_mes);
		scanf("%d",&registro_cc.venci_cc.venc_ano);	
		printf("Nome: \n");
		fflush(stdin);
		gets(registro_cc.nome_cc);
		printf("CPF :\n");
		fflush(stdin);
		gets(registro_cc.cpf_cc);
		printf("Data de Nascimento DD/MM/AAAA:\n");
		scanf("%d", &registro_cc.nasci_cc.aniv_dia);
		scanf("%d", &registro_cc.nasci_cc.aniv_mes);
		scanf("%d", &registro_cc.nasci_cc.aniv_ano);
		printf("Contato :\n");
		fflush(stdin);
		gets(registro_cc.contato_cc);
		printf("Endereço do Cliente:\n");
		printf("Cep :\n");
		scanf("%d",&registro_cc.endereco_cc.cep_cc);
		printf("Logradouro :\n");
		fflush(stdin);
		gets(registro_cc.endereco_cc.local_cc);
		printf("N° casa :\n");
		scanf("%d", &registro_cc.endereco_cc.num_casacc);		
		printf("Bairro :\n");
		fflush(stdin);
		gets(registro_cc.endereco_cc.bairro_cc);	
		printf("Cidade :\n");
		fflush(stdin);
		gets(registro_cc.endereco_cc.cidade_cc);	
		printf("Estado :\n");
		fflush(stdin);
		gets(registro_cc.endereco_cc.estado_cc);
		printf("Senha :\n");
		scanf("%d", &registro_cc.senha_cc);
		printf("Digite o valor do deposito:\n");
		scanf("%f",&registro_cc.saldo_cc);
		fwrite(&registro_cc, sizeof(struct REGISTRO_CORRENTE), 1, arquivo_corrente);
		fclose(arquivo_corrente);
		getch();
		system("cls");
		printf("\n\n**********************************************\n");
		printf("********** Conta Aberta Com Sucesso **********\n");
		printf("**********************************************\n\n");
		printf("\n");
		printf("Tipo de Conta: ",registro_cc.tipo_conta_cc);
		printf("Agência: %d\n", registro_cc.agencia_cc);
		printf("N° Conta: %d\n", registro_cc.num_conta_cc);
		printf("Limite: %.2f\n", registro_cc.limite_cc);
		printf("Data de Vencimento: %2d/%2d/%4d\n",registro_cc.venci_cc.venc_dia ,registro_cc.venci_cc.venc_mes ,registro_cc.venci_cc.venc_ano);
		printf("Saldo: %.2f\n",registro_cc.saldo_cc);
		printf("Nome: %s\n", registro_cc.nome_cc);
		printf("CPF: %s\n", registro_cc.cpf_cc);
		printf("Data de Nascimento: %02d/%02d/%04d\n", registro_cc.nasci_cc.aniv_dia, registro_cc.nasci_cc.aniv_mes, registro_cc.nasci_cc.aniv_ano);
		printf("Contato: %s\n", registro_cc.contato_cc);
		printf("Cep: %d\n", registro_cc.endereco_cc.cep_cc);
		printf("Logradouro: %s\n", registro_cc.endereco_cc.local_cc);
		printf("N° casa: %d\n", registro_cc.endereco_cc.num_casacc);
		printf("Bairro: %s\n", registro_cc.endereco_cc.bairro_cc);
		printf("Cidade: %s\n", registro_cc.endereco_cc.cidade_cc);
		printf("Estado: %s\n", registro_cc.endereco_cc.estado_cc);
		printf("Senha: %d\n", registro_cc.senha_cc);
		getch();
		system("cls");
	}
}
//CADASTRO DE FUNCIONÁRIO
struct NASCIMENTO_FUN 
{
	int fun_dia;
	int fun_mes;
	int fun_ano;	
};
struct ENDERECO_FUN
{
	int fun_cep;
	char fun_local[50];
	int fun_casa;
	char fun_bairro[50];
	char fun_cidade[50];
	char fun_estado[50];
};
struct DADOS_FUN
{
	int fun_codigo;
	char fun_cargo[50];
	char fun_nome[50];
	char fun_cpf[15];
	struct NASCIMENTO_FUN fun_nasc;
	char fun_ctt[15];
	struct ENDERECO_FUN fun_endereco;
	int fun_senha;	
};
void CADASTRA_FUNCIONARIO()
{
	printf("*******************************************\n");
	printf("********** Cadastrar Funcionário **********\n");
	printf("*******************************************\n\n");
	printf("\n");
	FILE* arquivo_funcionario;
	struct DADOS_FUN dados_fun;
	arquivo_funcionario=fopen("arquivo_funcionario.txt","ab");//apende modo binario abre uma arquivo novo se não existir caso exista ele adiciona no final do arquivo.
	if(arquivo_funcionario==NULL)
	{
		printf("Erro na abertura do arquivo!\n");
	}
	else
	{
		fflush(stdin);
		printf("Codígo do funcionário: \n");
		scanf("%d",&dados_fun.fun_codigo);
		printf("Novo Qual o cargo:\n ");
		fflush(stdin);
		gets(dados_fun.fun_cargo);		
		printf("Digite o nome: \n");
		fflush(stdin);
		gets(dados_fun.fun_nome);	
		printf("Digite o CPF: \n");
		fflush(stdin);
		gets(dados_fun.fun_cpf);
		fflush(stdin);
		printf("Digite a data de nascimento (DD/MM/AAAA): \n");
		scanf("%d",&dados_fun.fun_nasc.fun_dia);
		scanf("%d",&dados_fun.fun_nasc.fun_mes);
		scanf("%d",&dados_fun.fun_nasc.fun_ano);
		printf("Digite o número de contado: \n");
		fflush(stdin);
		gets(dados_fun.fun_ctt);
		printf("Endereço do Funcionário:\n");
		fflush(stdin);
		printf("Cep :\n");
		scanf("%d",&dados_fun.fun_endereco.fun_cep);
		printf("Logradouro :\n");
		fflush(stdin);
		gets(dados_fun.fun_endereco.fun_local);
		printf("N° casa :\n");
		scanf("%d", &dados_fun.fun_endereco.fun_casa);
		printf("Bairro :\n");
		fflush(stdin);
		gets(dados_fun.fun_endereco.fun_bairro);
		printf("Cidade :\n");
		fflush(stdin);
		gets(dados_fun.fun_endereco.fun_cidade);
		printf("Estado :\n");
		fflush(stdin);
		gets(dados_fun.fun_endereco.fun_estado);
		printf("Senha :\n");
		scanf("%d", &dados_fun.fun_senha);
		fwrite(&dados_fun, sizeof(struct DADOS_FUN), 1, arquivo_funcionario);
		fclose(arquivo_funcionario);
		getch();
		system("cls");
		printf("****************************************************\n");
		printf("********** Cadastro Realizado com Sucesso **********\n");
		printf("****************************************************\n\n");
		printf("\n");
		printf("Codigo do Funcionário: %d\n",dados_fun.fun_codigo);
		printf("Cargo: %s\n",dados_fun.fun_cargo);
		printf("Nome: %s\n",dados_fun.fun_nome);
		printf("CPF: %s\n",dados_fun.fun_cpf);
		printf("Data de Nascimento: %d/%d/%d\n",dados_fun.fun_nasc.fun_dia,dados_fun.fun_nasc.fun_mes,dados_fun.fun_nasc.fun_ano);
		printf("Telefone: %s\n",dados_fun.fun_ctt);
		printf("\n\n:----- Endereço do Funcionário -----: \n\n");
		printf("Cep: %d\n",dados_fun.fun_endereco.fun_cep);
		printf("Logradouro: %s\n",dados_fun.fun_endereco.fun_local);
		printf("N° casa: %d\n",dados_fun.fun_endereco.fun_casa);
		printf("Bairro: %s\n",dados_fun.fun_endereco.fun_bairro);
		printf("Cidade: %s\n",dados_fun.fun_endereco.fun_cidade);
		printf("Estado: %s\n",dados_fun.fun_endereco.fun_estado);
		printf("Senha: %d\n",dados_fun.fun_senha);
		getch();
		system("cls");				
	}
}
//AQUI EU ESTOU CRIANDO UM MENU DE CONSULTAR CONTAS
void CONSULTA_DADOS()
{
	printf("************************************\n");
	printf("********** Consulta Dados **********\n");
	printf("************************************\n\n");
	printf("\n");
	int consulta;
	do
	{
		printf("Tecle na opção de (1 à 4):\n");
		printf("[1]. Consultar Conta:\n");
		printf("[2]. Consultar Funcionário:\n");
		printf("[3]. Cosultar Dados\n");
		printf("[4]. Voltar\n");
		scanf("%d",&consulta);
		getch();
		system("cls");
		switch(consulta) 
		{
			case 1:CONSULTA_CONTA();			
				break;
			case 2:CONSULTA_FUNCIONARIO();
				break;	
			case 3:CONSULTA_POUPANCA();
				break;
			case 4:MENU_FUNCIONARIO();				
				break;
			default:
				printf("Opção inválida!\n");
				break;			
		}		
	}while(consulta!=4);
}
//ESSA FUNÇAO E PARA CONSULTAR CLIENTE CORRENTE
void CONSULTA_CONTA()
{
	char nome_cliente[50];
	struct REGISTRO_CORRENTE registro_cc;
	FILE* arquivo_corrente;
	arquivo_corrente=fopen("arquivo_corrente.txt","r");//abre um arquivo do tipo binario para leitura	
	if(arquivo_corrente==NULL)
	{
		printf("Erro na abertura do arquivo!\n");
	}
	else
	{			
		printf("Digite o nome do Cliente:\n");
		fflush(stdin);		
		gets(nome_cliente); 				
		while(fread(&registro_cc,sizeof( struct REGISTRO_CORRENTE ), 1 ,arquivo_corrente)==1)
		{
			if( strcmp(nome_cliente, registro_cc.nome_cc)==0)
			{
				system("cls");
				printf("************************************\n");
				printf("********** Consulta Dados **********\n");
				printf("************************************\n\n");
				printf("\n");		
				printf("Tipo de Conta: ",registro_cc.tipo_conta_cc);
				printf("Nome: %s\n", registro_cc.nome_cc);
				printf("CPF: %s\n", registro_cc.cpf_cc);
				printf("Saldo na conta: %.2f\n",registro_cc.saldo_cc);
				printf("Limite disponivel: %.2f\n", registro_cc.limite_cc);
				printf("Data de Vencimento: %2d/%2d/%4d",registro_cc.venci_cc.venc_dia ,registro_cc.venci_cc.venc_mes ,registro_cc.venci_cc.venc_ano);			
				printf("\n\n--------------------------------\n\n");							
			}
			else
				printf("Cliente não encontrado!\n");
		}		
	}
	fclose(arquivo_corrente);
	MENU_FUNCIONARIO();
	getch();
}
void CONSULTA_FUNCIONARIO()
{	
	char nomo_func[50];
	FILE* arquivo_funcionario;
	struct DADOS_FUN dados_fun;
	arquivo_funcionario=fopen("arquivo_funcionario.txt","r");//apende modo binario abre uma arquivo novo se não existir caso exista ele adiciona no final do arquivo.
	if(arquivo_funcionario==NULL)
	{
		printf("Erro na abertura do arquivo!\n");
	}
	else		
		printf("Digite o nome do Funcionario:\n");
		fflush(stdin);		
		gets(nomo_func); 
		while(fread(&dados_fun,sizeof(struct DADOS_FUN),1,arquivo_funcionario)==1)
		{
			if(nomo_func,dados_fun.fun_nome)
			{
				system("cls");
				printf("*******************************************\n");
				printf("********** Consulta Funcionário ***********\n");
				printf("*******************************************\n\n");
				printf("\n");
				printf("Codigo do Funcionário: %d\n",dados_fun.fun_codigo);
				printf("Cargo: %s\n",dados_fun.fun_cargo);
				printf("Nome: %s\n",dados_fun.fun_nome);			
				printf("CPF: %s\n",dados_fun.fun_cpf);
				printf("Data de Nascimento: %d/%d/%d\n",dados_fun.fun_nasc.fun_dia,dados_fun.fun_nasc.fun_mes,dados_fun.fun_nasc.fun_ano);
				printf("Telefone: %s\n",dados_fun.fun_ctt);
				printf("\n\n:----- Endereço do Funcionário -----: \n\n");								
				printf("Logradouro: %s\n",dados_fun.fun_endereco.fun_local);
				printf("N° casa: %d\n",dados_fun.fun_endereco.fun_casa);
				printf("Cep: %d\n",dados_fun.fun_endereco.fun_cep);
				printf("Bairro: %s\n",dados_fun.fun_endereco.fun_bairro);
				printf("Cidade: %s\n",dados_fun.fun_endereco.fun_cidade);
				printf("Estado: %s\n", dados_fun.fun_endereco.fun_estado);
				printf("Senha: %d\n",dados_fun.fun_senha);
				printf("\n\n--------------------------------\n\n");
				getch();
				system("cls");	
			}
			else
				printf("Cliente não encontrado!\n");
		}
		fclose(arquivo_funcionario);				
		MENU_FUNCIONARIO();
		getch();		
}
void CONSULTA_POUPANCA()
{	
	char nome_cp[50];
	FILE* arquivo_poupanca;
	struct REGISTRO_POUPANCA registro_cp;
	arquivo_poupanca=fopen("arquivo_poupanca.txt","r");//apende modo binario abre uma arquivo novo se não existir caso exista ele adiciona no final do arquivo.
	if(arquivo_poupanca==NULL)
	{
		printf("Erro na abertura do arquivo!\n");
	}
	else
		fflush(stdin);
		printf("Digite o nome do Cliente:\n");		
		gets(nome_cp);
		while(fread(&registro_cp,sizeof(struct REGISTRO_POUPANCA),1,arquivo_poupanca)==1)
		{
			if(nome_cp,registro_cp.nome_cp)
			{
				system("cls");
				printf("*********************************************\n");
				printf("********** Consulta Conta poupança **********\n");
				printf("*********************************************\n\n");
				printf("\n");
				printf("Nome: %s\n", registro_cp.nome_cp);
        		printf("CPF: %s\n", registro_cp.cpf_cp);
      			printf("Data de Nascimento: %2d/%2d/%4d\n", registro_cp.data_cp.dia_cp, registro_cp.data_cp.mes_cp, registro_cp.data_cp.ano_cp);
        		printf("Contato: %s\n", registro_cp.contato_cp);
        		printf("Logradouro: %s\n", registro_cp.endereco_cp.local_cp);
        		printf("N° casa: %d\n", registro_cp.endereco_cp.num_casa_cp);
        		printf("Bairro: %s\n", registro_cp.endereco_cp.bairro_cp);
        		printf("Cidade: %s\n", registro_cp.endereco_cp.cidade_cp);
        		printf("Estado: %s\n", registro_cp.endereco_cp.estado_cp);
			}
		}
		fclose(arquivo_poupanca);
		MENU_FUNCIONARIO();
		getch();
}
void ALTERA_DADOS()
{
	printf("***********************************\n");
	printf("********** Alterar Dados **********\n");
	printf("***********************************\n\n");
	printf("\n");
	int atd;//Variavel (ALTERA DADOS).
	do 
	{
		printf("Tecle a opção desejada [1 a 4]:\n");
		printf("[1]. Alterar Conta\n");		
		printf("[2]. Alterar Funcionário\n");
		printf("[3]. Alterar Cliente\n");
		printf("[4]. Voltar\n");
		scanf("%d",&atd);
		system("cls");
		switch(atd)
		{
			case 1: ALTERA_CONTA();
				break;
			case 2: ALTERA_FUNCIONARIO();
				break;
			case 3: ALTERA_CLIENTE();
				break;
			case 4: MENU_FUNCIONARIO();
				break;
			default:
				printf("Opção inválida[1 a 4]!\n");				
		}			
	}
	while(atd!=4);
	system("cls");
	MENU_FUNCIONARIO();
}
void ALTERA_CONTA()
{
	int sadm,senha_adm = 321;
	printf("Digite a senha (ADM):\n");
	scanf("%d",&sadm);
	system("cls");
	if(sadm==321)
	{
		printf("***********************************\n");
		printf("********** Alterar Conta **********\n");
		printf("***********************************\n\n");
		printf("\n");
		char n_c[50];
        FILE *arquivo_corrente;
        struct REGISTRO_CORRENTE registro_cc;
        arquivo_corrente = fopen("arquivo_corrente.txt", "rb+");
        if (arquivo_corrente == NULL) {
            printf("Erro na abertura do arquivo!\n");
        } else {
            printf("Digite nome do cliente que deseja alterar:\n\n");
            fflush(stdin); 
            gets(n_c);
            int cliente_encontrado = 0;
            long contador = 0; // Variável para rastrear a posição do registro
            while (fread(&registro_cc, sizeof(struct REGISTRO_CORRENTE), 1, arquivo_corrente) == 1) {
                if (strcmp(n_c, registro_cc.nome_cc) == 0) {
                    cliente_encontrado = 1;
                    printf("\n");
                    printf("Digite o novo tipo de conta:\n");
                    fflush(stdin);
                    gets(registro_cc.tipo_conta_cc);
                    printf("Novo limite Disponível:\n");
                    scanf("%f", &registro_cc.limite_cc);
                    printf("Nova data de vencimento (dd mm aaaa):\n");
                    scanf("%d", &registro_cc.venci_cc.venc_dia);
                    scanf("%d", &registro_cc.venci_cc.venc_mes);
                    scanf("%d",&registro_cc.venci_cc.venc_ano);                    
                    fseek(arquivo_corrente, contador * sizeof(struct REGISTRO_CORRENTE), SEEK_SET);
                    fwrite(&registro_cc, sizeof(struct REGISTRO_CORRENTE), 1, arquivo_corrente);
                    system("cls");
                    getch();
                    printf("******************************************\n");
                    printf("********** Alterado com sucesso **********\n");
                    printf("******************************************\n\n");
                    printf("\n");
                    printf("Tipo de conta alterado: %s\n", registro_cc.tipo_conta_cc);
                    printf("Novo limite: %.2f\n", registro_cc.limite_cc);
                    printf("Nova data de vencimento: %2d/%2d/%4d\n", registro_cc.venci_cc.venc_dia, registro_cc.venci_cc.venc_mes, registro_cc.venci_cc.venc_ano);
                    break;
                }
                contador++;
            }
            if (registro_cc.nome_cc!=cliente_encontrado) {
                printf("Cliente não encontrado!\n");
            }
        }
        fclose(arquivo_corrente);
    } 
	else
	{
		senha_adm!=321;
        printf("Senha incorreta!\n");
        getch();
		system("cls");	
    }
    getch();
    system("cls");
}
void ALTERA_FUNCIONARIO()
{
	int sadm,senha_adm = 321;
	printf("Digite a senha (ADM):\n");
	scanf("%d",&sadm);
	system("cls");
	if(sadm==321)
	{
		printf("*****************************************\n");
		printf("********** Alterar Funcionário **********\n");
		printf("*****************************************\n\n");
		printf("\n");
		char n_f[50];
		FILE* arquivo_funcionario;
		struct DADOS_FUN dados_fun;
		arquivo_funcionario=fopen("arquivo_funcionario.txt","rb+");//apende modo binario abre uma arquivo novo se não existir caso exista ele adiciona no final do arquivo.
		if(arquivo_funcionario==NULL)
		{
			printf("Erro na abertura do arquivo!\n");
		}
		else
		{
			printf("Digite nome do cliente que deseja alterar:\n\n");
            fflush(stdin); // Limpar o buffer de entrada
            gets(n_f);
            int cl_encont = 0;
            long contado = 0; // Variável para rastrear a posição do registro
			while(fread(& dados_fun,sizeof(struct DADOS_FUN),1,arquivo_funcionario)==1)
			{
				if(strcmp(n_f,dados_fun.fun_nome)==0)
				{
					cl_encont=1;
					fflush(stdin);
					printf("\n");
					printf("Novo codigo do funcionário: \n");
					scanf("%d",&dados_fun.fun_codigo);
					printf("Novo cargo: \n");
					fflush(stdin);
					gets(dados_fun.fun_cargo);
					printf("Novo contato: \n");
					fflush(stdin);
					gets(dados_fun.fun_ctt);
					printf("Novo logradouro: \n");
					fflush(stdin);
					gets(dados_fun.fun_endereco.fun_local);
					printf("Número da casa: \n");
					scanf("%d",&dados_fun.fun_endereco.fun_casa);
					printf("Novo Cep: \n");
					scanf("d",&dados_fun.fun_endereco.fun_cep);
					printf("Bairro: \n");
					fflush(stdin);
					gets(dados_fun.fun_endereco.fun_bairro);
					printf("Cidade: \n");
					fflush(stdin);
					gets(dados_fun.fun_endereco.fun_cidade);
					printf("Estado: \n");
					fflush(stdin);
					gets(dados_fun.fun_endereco.fun_estado);					
					fseek(arquivo_funcionario,contado*sizeof(struct DADOS_FUN),SEEK_SET);
					fwrite(&dados_fun,sizeof(struct DADOS_FUN),1,arquivo_funcionario);
					getch;
					system("cls");
					printf("******************************************\n");
                    printf("********** Alterado com sucesso **********\n");
                    printf("******************************************\n\n");
                    printf("\n");
					printf("Codigo do Funcionário: %d\n",dados_fun.fun_codigo);
					printf("Cargo: %s\n",dados_fun.fun_cargo);
					printf("Telefone: %s\n",dados_fun.fun_ctt);
					printf("Logradouro: %s\n",dados_fun.fun_endereco.fun_local);
					printf("N° casa: %d\n",dados_fun.fun_endereco.fun_casa);
					printf("Cep: %d\n",dados_fun.fun_endereco.fun_cep);
					printf("Bairro: %s\n",dados_fun.fun_endereco.fun_bairro);
					printf("Cidade: %s\n",dados_fun.fun_endereco.fun_cidade);
					printf("Estado: %s\n",dados_fun.fun_endereco.fun_estado);
					break;
				}
				contado++;
			}
			if(dados_fun.fun_nome!=cl_encont)
			{
				printf("Cliente não encontrado!\n");
			}
		}
		fclose(arquivo_funcionario);
	}
	else
	{
		senha_adm!=321;
		printf("Senha incorreta!\n");
		getch();
		system("cls");
	}
    getch();
    system("cls");
}
void ALTERA_CLIENTE()
{
	int sadm,senha_adm = 321;
	printf("Digite a senha (ADM):\n");
	scanf("%d",&sadm);
	system("cls");
	if(sadm==senha_adm)
	{
		printf("*************************************\n");
		printf("********** Alterar Cliente **********\n");
		printf("*************************************\n\n");
		printf("\n");
		char n_p[50];
		FILE* arquivo_poupanca;
		struct REGISTRO_POUPANCA registro_cp;
		arquivo_poupanca=fopen("arquivo_poupanca.txt","rb+");//apende modo binario abre uma arquivo novo se não existir caso exista ele adiciona no final do arquivo.
		if(arquivo_poupanca==NULL)
		{
			printf("Erro na abertura do arquivo!\n");
		}
		else
		{
			printf("Digite nome do cliente que deseja alterar:\n\n");
            fflush(stdin); 
            gets(n_p);
            int cli_encontra=0;
            long cont =0;
            while(fread(&registro_cp,sizeof(struct REGISTRO_POUPANCA),1,arquivo_poupanca))
            {
            	if(strcmp(n_p,registro_cp.nome_cp)==0)
            	{
            		cli_encontra=1;
            		printf("\n");
            		printf("Novo telefone:\n");
            		fflush(stdin);
            		gets(registro_cp.contato_cp);
            		printf("Novo logradouro:\n");
            		fflush(stdin);
            		gets(registro_cp.endereco_cp.local_cp);            		
            		printf("Alterar número da casa:\n");
            		scanf("%d",registro_cp.endereco_cp.num_casa_cp);
            		printf("Alterar Cep:\n");
            		scanf("%d",registro_cp.endereco_cp.cep_cp);
            		printf("Alterar bairro:\n");
            		fflush(stdin);
            		gets(registro_cp.endereco_cp.bairro_cp);
            		printf("Alterar cidade:\n");
            		fflush(stdin);
            		gets(registro_cp.endereco_cp.cidade_cp);
            		printf("Alterar estado:\n");
            		fflush(stdin);
            		gets(registro_cp.endereco_cp.estado_cp);
            		fseek(arquivo_poupanca,cont*sizeof(struct REGISTRO_POUPANCA),SEEK_SET);
            		fwrite(&registro_cp,sizeof(struct REGISTRO_POUPANCA),1,arquivo_poupanca);
            		system("cls");
					printf("******************************************\n");
                    printf("********** Alterado com sucesso **********\n");
                    printf("******************************************\n\n");
                    printf("\n");
					printf("Contato: %s\n", registro_cp.contato_cp);
					printf("Logradouro: %s\n", registro_cp.endereco_cp.local_cp);
					printf("N° casa: %d\n", registro_cp.endereco_cp.num_casa_cp);
					printf("Cep: %d\n", registro_cp.endereco_cp.cep_cp);
					printf("Bairro: %s\n", registro_cp.endereco_cp.bairro_cp);
					printf("Cidade: %s\n", registro_cp.endereco_cp.cidade_cp); 
					printf("Estado: %s\n", registro_cp.endereco_cp.estado_cp);
					break;
				}
				cont++;
			}
			if(registro_cp.nome_cp!=registro_cp.nome_cp)
			{
				printf("Cliente não encontrado!\n");
			}
		}
		fclose(arquivo_poupanca);
	}
	else
	{
		senha_adm!=321;
		printf("Senha incorreta!\n");
		getch();
		system("cls");
	}
	getch();
	system("cls");
}
void EXCLUIR()
{
	int sadm,senha_adm = 321;
	printf("Digite a senha (ADM):\n");
	scanf("%d",&sadm);
	system("cls");
	if(sadm==321)
	{
		printf("**********************************\n");
		printf("********** Exluir Conta **********\n");
		printf("**********************************\n\n");
		printf("\n");
		int n;
		do
		{
			printf("Tecle a opção desejada:\n");
			printf("[1]. Conta Poupança\n");
			printf("[2]. Conta Corrente\n");
			printf("[3]. Voltar\n");
			scanf("%d",&n);
			system("cls");
			switch(n)
			{
				case 1:
					printf("*******************************************\n");
					printf("********** Exluir Conta Poupança **********\n");
					printf("*******************************************\n\n");
					printf("\n");
					FILE* arquivo_poupanca;
					FILE*arquivo_temporario;
					struct REGISTRO_POUPANCA registro_cp;
					char c_exclur [50];
					arquivo_poupanca=fopen("arquivo_poupanca.txt","rb");
					arquivo_temporario=fopen("arquivo_temporario.txt","ab");
					if(arquivo_poupanca == NULL || arquivo_temporario == NULL)
					{
						printf("Erro na abertura do arquivo!\n");
					}
					else
					{						
						printf("Digite o nome do cliente para excluir:\n");
						fflush(stdin);
						gets(c_exclur);
						while(fread(&registro_cp, sizeof(struct REGISTRO_POUPANCA),1,arquivo_poupanca)==1)
						{
							if(strcmp(c_exclur,registro_cp.nome_cp)!=0)
							{
								fwrite(&registro_cp,sizeof(struct REGISTRO_POUPANCA),1,arquivo_temporario);
							}
						}
					}
					fclose(arquivo_poupanca);
					fclose(arquivo_temporario);
					remove("arquivo_poupanca.txt");
					rename("arquivo_temporario.txt","arquivo_poupanca.txt");
					printf("**************************************************\n");
					printf("********** Cliente Excluido Com Sucesso **********\n");
					printf("**************************************************\n\n");
					getch();
					system("cls");
					MENU_FUNCIONARIO();
				case 2:
					printf("*******************************************\n");
					printf("********** Exluir Conta Corrente **********\n");
					printf("*******************************************\n\n");
					printf("\n");
					FILE*arquivo_corrente;
					FILE*arquivo_temporario_cc;
					struct REGISTRO_CORRENTE registro_cc;
					char cc_exclur [50];
					arquivo_corrente=fopen("arquivo_corrente.txt","rb");
					arquivo_temporario_cc=fopen("arquivo_temporario_cc.txt","ab");
					if(arquivo_corrente == NULL || arquivo_temporario_cc == NULL)
					{
						printf("Erro na abertura do arquivo!\n");
					}
					else
					{						
						printf("Digite o nome do cliente para excluir:\n");
						fflush(stdin);
						gets(cc_exclur);
						while(fread(&registro_cc, sizeof(struct REGISTRO_CORRENTE),1,arquivo_corrente)==1)
						{
							if(strcmp(cc_exclur,registro_cc.nome_cc)!=0)
							{
								fwrite(&registro_cc,sizeof(struct REGISTRO_CORRENTE),1,arquivo_temporario_cc);
							}
						}
					}
					fclose(arquivo_corrente);
					fclose(arquivo_temporario_cc);
					remove("arquivo_corrente.txt");
					rename("arquivo_temporario_cc.txt","arquivo_corrente.txt");
					printf("\n");
					printf("**************************************************\n");
					printf("********** Cliente Excluido Com Sucesso **********\n");
					printf("**************************************************\n\n");
					getch();
					system("cls");
					MENU_FUNCIONARIO();
				case 3:MENU_FUNCIONARIO();	
					break;	
					default:
					printf("Opção inválida (1 ou 3):");	
					break;					
			}
		}
		while(n!=3);
		getch();
		system("cls");	
	}
	else
	printf("Senha inválida!\n");
}
void GERAR_RELATORIO() 
{
	int sadm,senha_adm = 321;
	printf("Digite a senha (ADM):\n");
	scanf("%d",&sadm);
	system("cls");
	if(sadm==senha_adm)
	{
		struct REGISTRO_CORRENTE registro_cc;
        FILE *arquivo_corrente, *relatorio_cc;
        arquivo_corrente = fopen("arquivo_corrente.txt", "rb");
        if (arquivo_corrente == NULL)
        {
            printf("ERRO AO ABRIR O ARQUIVO");
        }
        relatorio_cc = fopen("relatorio_cc.csv", "a");
        if (relatorio_cc == NULL) 
		{
            printf("ERRO AO CRIAR O ARQUIVO EXTRATO");
            fclose(arquivo_corrente);
        }
        fprintf(relatorio_cc, "TIPO DE CONTA,AGENCIA,NUMERO DA CONTA,SALDO,LIMITE,NOME,CPF,CONTATO,DATA DE NASCIMENTO,CEP,LOCAL,NUMERO DA CASA,BAIRRO,CIDADE,ESTADO,DATA DE VENCIMENTO,SENHA\n");
        while (fread(&registro_cc, sizeof(struct REGISTRO_CORRENTE), 1, arquivo_corrente) == 1) 
		{
            fprintf(relatorio_cc ,"TIPO DE CONTA: %s\n",registro_cc.tipo_conta_cc );
            fprintf(relatorio_cc ,"AGENCIA: %d\n",registro_cc.agencia_cc );
            fprintf(relatorio_cc ,"NUMERO DA CONTA: %d\n",registro_cc.num_conta_cc );
            fprintf(relatorio_cc ,"SALDO: %.2f\n",registro_cc.saldo_cc );
            fprintf(relatorio_cc ,"LIMITE: %.2f\n",registro_cc.limite_cc );
            fprintf(relatorio_cc ,"NOME: %s\n",registro_cc.nome_cc );
            fprintf(relatorio_cc ,"CPF: %s\n",registro_cc.cpf_cc );
            fprintf(relatorio_cc ,"CONTATO: %s\n",registro_cc.contato_cc );
            fprintf(relatorio_cc ,"DATA DE NASCIMENTO: %d/%d/%d\n",registro_cc.nasci_cc.aniv_dia,registro_cc.nasci_cc.aniv_mes,registro_cc.nasci_cc.aniv_ano );
            fprintf(relatorio_cc ,"CEP: %d\n",registro_cc.endereco_cc.cep_cc );
            fprintf(relatorio_cc ,"LOCAL: %s\n",registro_cc.endereco_cc.local_cc );
            fprintf(relatorio_cc ,"NUMERO DA CASA: %d\n",registro_cc.endereco_cc.num_casacc );
            fprintf(relatorio_cc ,"BAIRRO: %s\n",registro_cc.endereco_cc.bairro_cc );
            fprintf(relatorio_cc ,"CIDADE: %s\n",registro_cc.endereco_cc.cidade_cc );
            fprintf(relatorio_cc ,"ESTADO: %s\n",registro_cc.endereco_cc.estado_cc );
            fprintf(relatorio_cc ,"DATA DE VENCIMENTO: %d/%d/%d\n",registro_cc.venci_cc.venc_dia,registro_cc.venci_cc.venc_mes,registro_cc.venci_cc.venc_ano );
            fprintf(relatorio_cc ,"SENHA: %d\n",registro_cc.senha_cc );
        }
        system("pause");
        fclose(arquivo_corrente);
        fclose(relatorio_cc);
        printf("***************************************************\n");
        printf("********** Relatório Gerado Com Sucesso  **********\n");
        printf("***************************************************\n\n");
    }
    else
        printf("Senha incorreta!\n");		
}
void MENU_CLIENTE()
{	system("color 6");
	printf("*************************************\n");
	printf("********** MENU DO CLIENTE **********\n");
	printf("*************************************\n\n");
	printf("\n");
	int op_cli;
	do
	{
		printf("Tecle a opção desejada: \n");
		printf("[1]. Saldo\n");
		printf("[2]. Depósito\n");
		printf("[3]. Saque\n");
		printf("[4]. Extrato\n");
		printf("[5]. Consultar Limite\n");
		printf("[6]. Sair\n");
		scanf("%d",&op_cli);
		system("cls");
		switch(op_cli)
		{
			case 1: SALDO();
				break;
			case 2: DEPOSITO();
				break;
			case 3: SAQUE();
				break;
			case 4: EXTRATO();
				break;
			case 5: CONSULTA_LIMITE();
				break;
			case 6:MENU_PRINCIPAL();
				break;
			default:
				printf("INVALIDO. Tecle na opção (1 a 6):\n");					
		}
	}
	while(op_cli!=7);
}
void SALDO()
{
	int senha_cli;
	char nome_cliente[50];
	struct REGISTRO_CORRENTE registro_cc;
	FILE* arquivo_corrente;
	arquivo_corrente=fopen("arquivo_corrente.txt","r");//abre um arquivo do tipo binario para leitura	
	if(arquivo_corrente==NULL)
	{
		printf("Erro na abertura do arquivo!\n");
	}
	else
	{	
		printf("Nome: \n");
		fflush(stdin);
		gets(nome_cliente);			
		while(fread(&registro_cc,sizeof( struct REGISTRO_CORRENTE ), 1 ,arquivo_corrente)==1)
		{
		if( strcmp(nome_cliente, registro_cc.nome_cc)==0)
			{
				system("cls");
				printf("***************************\n");
				printf("********** Saldo **********\n");
				printf("***************************\n\n\n");
				printf("\n");		
				printf("Saldo: %.2f\n",registro_cc.saldo_cc);
				getch();					
			}
		}		
	}
	fclose(arquivo_corrente);
	MENU_CLIENTE();
	getch();
}
void DEPOSITO()
{
    printf("******************************\n");
    printf("********** Depósito **********\n");
    printf("******************************\n\n");
    printf("\n");
    char n_c[50];
    FILE *arquivo_corrente;
    struct REGISTRO_CORRENTE registro_cc;
    arquivo_corrente = fopen("arquivo_corrente.txt", "rb+");
    if (arquivo_corrente == NULL) 
    {
        printf("Erro na abertura do arquivo!\n");
    }

    printf("Digite o nome do cliente que deseja fazer o depósito:\n");
    fflush(stdin); 
    gets(n_c);

    int cliente_encontrado = 0;
    long contador = 0; 
    while (fread(&registro_cc, sizeof(struct REGISTRO_CORRENTE), 1, arquivo_corrente) == 1) 
    {
        if (strcmp(n_c, registro_cc.nome_cc) == 0) 
        {
            cliente_encontrado = 1;
            float valor_deposito = 0;
            printf("Digite o valor do depósito:\n");
            scanf("%f", &valor_deposito);

            registro_cc.saldo_cc += valor_deposito;

            fseek(arquivo_corrente, contador * sizeof(struct REGISTRO_CORRENTE), SEEK_SET);
            fwrite(&registro_cc, sizeof(struct REGISTRO_CORRENTE), 1, arquivo_corrente);

            FILE *arquivo_transacoes = fopen("transacoes.txt", "a");
            if (arquivo_transacoes != NULL)
            {
                struct TRANSACAO transacao;
                strcpy(transacao.tipo, "Deposito");
                transacao.valor = valor_deposito;
                strcpy(transacao.data, "16/06/2024"); // Aqui você pode usar uma função para obter a data atual

                fwrite(&transacao, sizeof(struct TRANSACAO), 1, arquivo_transacoes);
                fclose(arquivo_transacoes);
            }

            system("cls");
            printf("****************************************************\n");
            printf("********** Depósito realizado com sucesso **********\n");
            printf("****************************************************\n\n");
            printf("\n");
            printf("Nome do cliente: %s\n", registro_cc.nome_cc);
            printf("Saldo: %.2f\n\n\n", registro_cc.saldo_cc);
            break;
        }
        contador++;
    }

    if (!cliente_encontrado) 
    {
        printf("Cliente não encontrado!\n");
    }

    fclose(arquivo_corrente);
}
void SAQUE()
{
    printf("***************************\n");
    printf("********** Saque **********\n");
    printf("***************************\n\n");
    printf("\n");
    char n_c[50];    
    FILE *arquivo_corrente;
    struct REGISTRO_CORRENTE registro_cc;
    arquivo_corrente = fopen("arquivo_corrente.txt", "rb+");
    if (arquivo_corrente == NULL) 
    {
        printf("Erro na abertura do arquivo!\n");
    }

    printf("Digite o nome do cliente:\n");
    fflush(stdin); 
    gets(n_c);

    int cliente_encontrado = 0;
    long contador = 0; 
    while (fread(&registro_cc, sizeof(struct REGISTRO_CORRENTE), 1, arquivo_corrente) == 1) 
    {
        if (strcmp(n_c, registro_cc.nome_cc) == 0) 
        {
            cliente_encontrado = 1;
            float valor_saque = 0;
            printf("Digite o valor do Saque:\n");
            scanf("%f", &valor_saque);
            if(valor_saque <= registro_cc.saldo_cc)
            {
                registro_cc.saldo_cc -= valor_saque;

                fseek(arquivo_corrente, contador * sizeof(struct REGISTRO_CORRENTE), SEEK_SET);
                fwrite(&registro_cc, sizeof(struct REGISTRO_CORRENTE), 1, arquivo_corrente);

                FILE *arquivo_transacoes = fopen("transacoes.txt", "a");
                if (arquivo_transacoes != NULL)
                {
                    struct TRANSACAO transacao;
                    strcpy(transacao.tipo, "Saque");
                    transacao.valor = valor_saque;
                    strcpy(transacao.data, "2024-06-16"); // Aqui você pode usar uma função para obter a data atual

                    fwrite(&transacao, sizeof(struct TRANSACAO), 1, arquivo_transacoes);
                    fclose(arquivo_transacoes);
                }

                system("cls");
                printf("*************************************************\n");
                printf("********** Saque realizado com sucesso **********\n");
                printf("*************************************************\n\n");
                printf("\n");
                printf("Nome do cliente: %s\n", registro_cc.nome_cc);
                printf("Saldo: %.2f\n\n\n", registro_cc.saldo_cc);
                break;
            }
            else 
            {
                printf("Saldo insuficiente!\n");
            } 
        }
        contador++;
    }

    if (!cliente_encontrado) 
    {
        printf("Cliente não encontrado!\n");
    }

    fclose(arquivo_corrente);
}
void EXTRATO()
{
    printf("****************************\n");
    printf("********** Extrato *********\n");
    printf("****************************\n\n");
    printf("\n");
    char nome_corrente[50];
    struct REGISTRO_CORRENTE registro_corrente;
    FILE *arquivo_corrente;
    FILE *extrato_corrente;    
    arquivo_corrente = fopen("arquivo_corrente.txt", "rb");
    if (arquivo_corrente == NULL) 
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    extrato_corrente = fopen("extrato_corrente.csv", "w");
    if(extrato_corrente == NULL)
    {
        printf("ERRO AO CRIAR O ARQUIVO EXTRATO\n");
        fclose(arquivo_corrente);
        return;  	
    }
    printf("Digite o nome do cliente a ser consultado: \n");
    fflush(stdin);
    gets(nome_corrente);    

    while (fread(&registro_corrente, sizeof(struct REGISTRO_CORRENTE), 1, arquivo_corrente) == 1) 
    {
        if (strcmp(nome_corrente, registro_corrente.nome_cc) == 0) 
        {
            FILE *arquivo_transacoes = fopen("transacoes.txt", "rb");
            if (arquivo_transacoes == NULL)
            {
                printf("Erro ao abrir o arquivo de transações.\n");
                fclose(arquivo_corrente);
                fclose(extrato_corrente);
                return;
            }

            struct TRANSACAO transacao;
            fprintf(extrato_corrente, "CONTA-CORRENTE\n");
            fprintf(extrato_corrente, "N° da Conta:  %d \n", registro_corrente.num_conta_cc);
            printf("CONTA-CORRENTE \n");
            printf("N° da Conta: %d \n", registro_corrente.num_conta_cc);

            while (fread(&transacao, sizeof(struct TRANSACAO), 1, arquivo_transacoes) == 1) 
            {
                fprintf(extrato_corrente, "Tipo: %s \n", transacao.tipo);
                fprintf(extrato_corrente, "Valor: %.2f \n", transacao.valor);
                fprintf(extrato_corrente, "Data: %s \n", transacao.data);
                printf("Tipo: %s \n", transacao.tipo);
                printf("Valor: %.2f \n", transacao.valor);
                printf("Data: %s \n", transacao.data);
                printf("\n---------------------------------------------------\n\n");
            }

            fprintf(extrato_corrente, "Saldo: %.2f \n", registro_corrente.saldo_cc);
            printf("Saldo: %.2f \n", registro_corrente.saldo_cc);

            fclose(arquivo_transacoes);
        }
    }
    fclose(arquivo_corrente);
    fclose(extrato_corrente);
    getch();
}
	
/*void DEPOSITO()
{
	printf("******************************\n");
    printf("********** Depósito **********\n");
    printf("******************************\n\n");
    printf("\n");
    char n_c[50];
    FILE *arquivo_corrente;
    struct REGISTRO_CORRENTE registro_cc;
    // Abre o arquivo corrente em modo de leitura e escrita binária
    arquivo_corrente = fopen("arquivo_corrente.txt", "rb+");
    if (arquivo_corrente == NULL) 
	{
        printf("Erro na abertura do arquivo!\n");
    }
    // Solicita o nome do cliente   
    printf("Digite o nome do cliente que deseja fazer o depósito:\n");
    fflush(stdin); // Limpa o buffer de entrada
    gets(n_c);
    // Variáveis para controle
    int cliente_encontrado = 0;
    long contador = 0; // Variável para rastrear a posição do registro
    // Itera sobre os registros de conta corrente
    while (fread(&registro_cc, sizeof(struct REGISTRO_CORRENTE), 1, arquivo_corrente) == 1) 
	{
        // Se encontrar o cliente
        if (strcmp(n_c, registro_cc.nome_cc) == 0) 
		{
            cliente_encontrado = 1;
            // Solicita o valor do depósit
            float valor_deposito=0;
            printf("Digite o valor do depósito:\n");
            scanf("%f",&valor_deposito);
            registro_cc.valor_deposito = valor_deposito;
            registro_cc.saldo_cc += valor_deposito;
            // Atualiza o registro no arquivo
            fseek(arquivo_corrente, contador * sizeof(struct REGISTRO_CORRENTE), SEEK_SET);
            fwrite(&registro_cc, sizeof(struct REGISTRO_CORRENTE), 1, arquivo_corrente);
            // Exibe mensagem de sucesso e informações atualizadas
            system("cls");
            printf("****************************************************\n");
            printf("********** Depósito realizado com sucesso **********\n");
            printf("****************************************************\n\n");
            printf("\n");
            printf("Nome do cliente: %s\n", registro_cc.nome_cc);
            printf("Saldo: %.2f\n\n\n", registro_cc.saldo_cc);
            break;
        }
        contador++;
    }
    // Se o cliente não for encontrado
    if (!cliente_encontrado) 
	{
        printf("Cliente não encontrado!\n");
    }
    // Fecha o arquivo corrente
    fclose(arquivo_corrente);
}*/ 
/*void SAQUE()
{
	printf("***************************\n");
    printf("********** Saque **********\n");
    printf("***************************\n\n");
    printf("\n");
    char n_c[50];    
    FILE *arquivo_corrente;
    struct REGISTRO_CORRENTE registro_cc;
    // Abre o arquivo corrente em modo de leitura e escrita binária
    arquivo_corrente = fopen("arquivo_corrente.txt", "rb+");
    if (arquivo_corrente == NULL) 
	{
        printf("Erro na abertura do arquivo!\n");
    }
    // Solicita o nome do cliente   
    printf("Digite o nome do cliente:\n");
    fflush(stdin); // Limpa o buffer de entrada
    gets(n_c);
    // Variáveis para controle
    int cliente_encontrado = 0;
    long contador = 0; // Variável para rastrear a posição do registro
    // Itera sobre os registros de conta corrente
    while (fread(&registro_cc, sizeof(struct REGISTRO_CORRENTE), 1, arquivo_corrente) == 1) 
	{
        // Se encontrar o cliente
        if (strcmp(n_c, registro_cc.nome_cc) == 0) 
		{
            cliente_encontrado = 1;
            // Solicita o valor do depósito
            float valor_saque=0;
            printf("Digite o valor do Saque:\n");
            scanf("%f", &valor_saque);
            if(valor_saque<=registro_cc.saldo_cc)
            {
            	// Realiza o saque
            registro_cc.valor_saque = valor_saque;
            registro_cc.saldo_cc -= valor_saque;
            // Atualiza o registro no arquivo
            fseek(arquivo_corrente, contador * sizeof(struct REGISTRO_CORRENTE), SEEK_SET);
            fwrite(&registro_cc, sizeof(struct REGISTRO_CORRENTE), 1, arquivo_corrente);
            // Exibe mensagem de sucesso e informações atualizadas
            system("cls");
            printf("*************************************************\n");
            printf("********** Saque realizado com sucesso **********\n");
            printf("*************************************************\n\n");
            printf("\n");
            printf("Nome do cliente: %s\n", registro_cc.nome_cc);
            printf("Saldo: %.2f\n\n\n", registro_cc.saldo_cc);
            break;
			}
			else 
				printf("Saldo insuficiente!\n");            
        }
        contador++;
    }
    // Se o cliente não for encontrado
    if (!cliente_encontrado) 
	{
        printf("Cliente não encontrado!\n");
    }
    // Fecha o arquivo corrente
    fclose(arquivo_corrente);
}*/ 
/*void EXTRATO()
{
	printf("****************************\n");
    printf("********** Extrato *********\n");
    printf("****************************\n\n");
    printf("\n");
    char nome_corrente[50];
    struct REGISTRO_CORRENTE registro_corrente;
	FILE *arquivo_corrente;
	FILE *extrato_corrente;	
	arquivo_corrente = fopen("arquivo_corrente.txt", "rb");
    if (arquivo_corrente == NULL) 
	{
        printf("Erro ao abrir o arquivo.\n");
    }
    extrato_corrente=fopen("extrato_corrente.csv","w");
    if(extrato_corrente==NULL)
    {
    	printf("ERRO AO CRIAR O ARQUIVO EXTRATO\n");
		fclose(arquivo_corrente);  	
	}
	printf("Digite o nome do cliente a ser consultada: \n");
    fflush(stdin);
    gets(nome_corrente);	
	while (fread(&registro_corrente, sizeof(struct REGISTRO_CORRENTE), 1, arquivo_corrente) == 1) 
	{
        if (strcmp(nome_corrente, registro_corrente.nome_cc) == 0) 
		{
			fprintf(extrato_corrente,"CONTA-CORRENTE\n");
			fprintf(extrato_corrente,"N° da Conta:  %d \n",registro_corrente.num_conta_cc);
			fprintf(extrato_corrente,"Deposito: %.2f \n",registro_corrente.valor_deposito);
			fprintf(extrato_corrente,"Saque:  %.2f \n",registro_corrente.valor_saque);
			fprintf(extrato_corrente,"Saldo: %.2f \n",registro_corrente.saldo_cc);
			fprintf(extrato_corrente,"\n---------------------------------------------------\n\n");
			printf("CONTA-CORRENTE \n");
			printf("N° da Conta: %d \n",registro_corrente.num_conta_cc);
			printf("Deposito: %.2f \n",registro_corrente.valor_deposito);
			printf("Saque:  %.2f \n",registro_corrente.valor_saque);
			printf("Saldo: %.2f \n",registro_corrente.saldo_cc);
			printf("\n---------------------------------------------------\n\n");	
		}
	}
	fclose(arquivo_corrente);
	fclose(extrato_corrente);
	getch();
}*/
void CONSULTA_LIMITE()
{
	printf("*************************************************\n");
    printf("********** Consulta Limite **********\n");
    printf("*************************************************\n\n");
    printf("\n");
	int senha_clie;
	char nome_cliente[50];
	struct REGISTRO_CORRENTE registro_cc;
	FILE* arquivo_corrente;
	arquivo_corrente=fopen("arquivo_corrente.txt","r");//abre um arquivo do tipo binario para leitura	
	if(arquivo_corrente==NULL)
	{
		printf("Erro na abertura do arquivo!\n");
	}
	else
	{	
		printf("Nome: \n");
		fflush(stdin);
		gets(nome_cliente);			
		while(fread(&registro_cc,sizeof( struct REGISTRO_CORRENTE ), 1 ,arquivo_corrente)==1)
		{
		if( strcmp(nome_cliente, registro_cc.nome_cc)==0)
			{
				system("cls");
				printf("****************************\n");
				printf("********** Limite **********\n");
				printf("****************************\n\n");
				printf("\n");		
				printf("Limite: %.2f\n",registro_cc.limite_cc);
				getch();					
			}
		}		
	}
	fclose(arquivo_corrente);
	MENU_CLIENTE();
	getch(); 
}
