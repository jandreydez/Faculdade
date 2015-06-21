
package academia;
import java.util.Scanner;
class Ficha{
    int matricula;
    int idade;
    String sexo, nome;
    double mensalidade;
    
    void AumentaMens (double valor){
        this.mensalidade = this.mensalidade + valor;
    }
    
    double Mens_Semestral () {
        return this.mensalidade*6;
    }
    void Imprimir_dados(){
        System.out.printf("Nome: %s\n", this.nome);
        System.out.printf("Matricula: %d\n", this.matricula);
        System.out.printf("Idade: %d\n", this.idade);
        System.out.printf("Sexo: %s\n", this.sexo);
        System.out.printf("Valor da mensalidade: %.2f\n", this.mensalidade);
    
         
}
}
public class Academia {

   
    public static void main(String[] args) {
        Scanner ler = new Scanner (System.in);
        Ficha Aluno = new Ficha();
        
        System.out.printf("Digite o nome do aluno: ");
        Aluno.nome = ler.nextLine();
        
        System.out.printf("Digite o sexo: ");
        Aluno.sexo = ler.nextLine();
        
        System.out.printf("Digite a matricula: ");
        Aluno.matricula = ler.nextInt();
        
        System.out.printf("Digite a idade: ");
        Aluno.idade = ler.nextInt();
        
        System.out.printf("Digite a mensalidade: ");
        Aluno.mensalidade = ler.nextDouble();
    
        System.out.printf("Digite o valor do aumento");
         double num = ler.nextDouble();
        
         Aluno.AumentaMens(num);
         Aluno.Imprimir_dados();
         System.out.printf("O valor a ser pago semestral é: %.2f\n",Aluno.Mens_Semestral());
         
         
    }
    
}
