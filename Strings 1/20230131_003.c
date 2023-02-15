#include <stdio.h>
#include <string.h>
#include <string.h>

int convert_digit(char digit){
	
	switch(digit){
		case 48:
			return 0;
			
		case 49:
			return 1;
			
    	case 50:
			return 2;
    	case 51:
			return 3;
    	case 52:
			return 4;
    	case 53:
			return 5;
    	case 54:
			return 6;
    	case 55:
			return 7;
    	case 56:
			return 8;
    	case 57:
			return 9;
	}
}

int is_digit(char digit){
	switch(digit){
		
    	case '0':
			return 1;
    	case '1':
			return 1;
    	case '2': 
			return 1;
    	case '3':
			return 1;
    	case '4':
			return 1;
    	case '5':
			return 1;
    	case '6':
			return 1;
    	case '7':
			return 1;
    	case '8':
			return 1;
    	case '9':
			return 1;
		default:
			return 0;
	}
}

int main(){
    printf("Digite uma data no formato DD/MM/AAAA\n");
    char data[11];
    scanf("%s", data);

    int valido_barra, valido_num, digit, i;

    for(i=0;i<10;i++){
        if((i==2)||(i==5)){
            if (data[i]=='/'){valido_barra = 1;}
            else{
                valido_barra = 0;
                break;
            }
        }
        else{
            digit = is_digit(data[i]);
            if(digit==1){valido_num = 1;}
            else{
                valido_num = 0;
                break;
            }
        }
    }

    while((!valido_barra) || (!valido_num)){
        printf("A data inserida nao eh valida. Digite novamente:\n");
        scanf("%s", data);
        for(i=0;i<10;i++){
            if((i==2)||(i==5)){
                if (data[i]=='/'){valido_barra = 1;}
                else{
                    valido_barra = 0;
                    break;
                }
            }
            else{
                digit = is_digit(data[i]);
                if(digit==1){valido_num = 1;}
                else{
                    valido_num = 0;
                    break;
                }
            }
        }
    }

    int dia, mes, ano;
    
    dia = (convert_digit(data[0])*10) + convert_digit(data[1]);
    mes = ((convert_digit(data[3])*10) + convert_digit(data[4]));
    ano = ((convert_digit(data[6])*1000) + (convert_digit(data[7])*100) + (convert_digit(data[8])*10) + convert_digit(data[9]));
    printf("Dia: %d\n", dia);
    printf("Mes: %d\n", mes);
    printf("Ano: %d\n", ano);

    return 0;
}
