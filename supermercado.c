#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int pagamento_op,op;
     float preco;
     char dia[50] = "";
     char pagamento;


     printf("Digite dia da semana: (1-SEG a 7-DOM)\n");
     scanf("%i",&op);

     switch (op){
          case 1:
          dia = "seg";
          break;
/*
          case 2:
          dia = "ter";
          break;

          case 3:
          dia = "qua";
          break;

          case 4:
          dia = "qui";
          break;

          case 5:
          dia = "sex";
          break ;

          case 6:
          dia = "sab";
          break;

          case 7:
          dia = "dom";
          break;

          default:
          op = 0;
          break;
          */
     }
    
     printf("Digite preco do produto em reais:\n");
     scanf("%f",&preco);
    
     printf("Digite a opcao do produto: (2-prata 1-ouro)\n");
     scanf("%i",&pagamento_op);
     switch (pagamento_op) {
          case 1:
          printf( "ouro");
          break;
/*
          case 2:
          pagamento = "prata";
          break;

          default:
          pagamento_op = 0;
          break; 
  */   }
    

     if( op  == 1 || op == 2 || op == 3  && pagamento_op == 1){
          preco / 2;
     }else if (op == 4 || op == 5 && preco >= 10.00 || preco <= 100.00 ){
          preco;
     } else {
          preco * 3;
     } 

     printf("O preco do produto no dia %s e R$ %f",dia,preco);

     return 0;
}